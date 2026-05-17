/*
 * XREFs of _RtlSetCurrentDirectory_U@4 @ 0x4B2A79F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpCheckForSameCurdir@4 @ 0x4B2A7B3D (_RtlpCheckForSameCurdir@4.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 *     _RtlpIsDosDeviceName_Ustr@4 @ 0x4B2C9330 (_RtlpIsDosDeviceName_Ustr@4.c)
 *     _RtlpCreateNewDirectoryReference@12 @ 0x4B2E418B (_RtlpCreateNewDirectoryReference@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

int __stdcall RtlSetCurrentDirectory_U(int a1)
{
  struct _PEB *v1; // eax
  void *ProcessHeap; // ebx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // edi
  unsigned int i; // esi
  void *Heap; // eax
  unsigned int FullPathName_Ustr; // esi
  unsigned __int16 v7; // ax
  int v8; // ecx
  int v9; // esi
  int v11; // esi
  int v12; // [esp+10h] [ebp-18h]
  int v13; // [esp+14h] [ebp-14h] BYREF
  __int16 v14; // [esp+18h] [ebp-10h]
  unsigned __int16 v15; // [esp+1Ah] [ebp-Eh]
  void *v16; // [esp+1Ch] [ebp-Ch]
  int v17; // [esp+20h] [ebp-8h] BYREF

  v1 = NtCurrentPeb();
  ProcessHeap = v1->ProcessHeap;
  ProcessParameters = v1->ProcessParameters;
  if ( (unsigned __int8)RtlpCheckForSameCurdir(a1) )
    return 0;
  if ( RtlpIsDosDeviceName_Ustr(a1) )
    return -1073741565;
  for ( i = ProcessParameters->CurrentDirectory.DosPath.MaximumLength; ; i = FullPathName_Ustr + 4 )
  {
    Heap = (void *)RtlAllocateHeap(ProcessHeap, 0, i);
    v16 = Heap;
    if ( !Heap )
      return -1073741801;
    v14 = 0;
    if ( i > 0xFFFF )
    {
      v15 = -1;
      goto LABEL_25;
    }
    v15 = i;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(Heap, 0, 0, (int)&v17);
    if ( !FullPathName_Ustr )
    {
      v11 = -1073741773;
      goto LABEL_23;
    }
    v7 = v15;
    if ( FullPathName_Ustr <= (unsigned int)v15 - 4 )
      goto LABEL_8;
    if ( (NtCurrentPeb()->BitField & 0x80u) == 0 )
      break;
    RtlFreeHeap(ProcessHeap, 0, v16);
  }
  v7 = v15;
LABEL_8:
  if ( FullPathName_Ustr > v7 )
  {
    v11 = -1073741562;
LABEL_23:
    Heap = v16;
LABEL_26:
    RtlFreeHeap(ProcessHeap, 0, Heap);
    return v11;
  }
  if ( FullPathName_Ustr > 0xFFFF )
  {
    v14 = -1;
    Heap = v16;
LABEL_25:
    v11 = -1073741675;
    goto LABEL_26;
  }
  v14 = FullPathName_Ustr;
  v12 = RtlpCreateNewDirectoryReference(&v13);
  RtlFreeHeap(ProcessHeap, 0, v16);
  if ( v12 >= 0 )
  {
    RtlEnterCriticalSection(&FastPebLock);
    v8 = v13;
    v9 = RtlpCurDirRef;
    ProcessParameters->CurrentDirectory.Handle = *(void **)(v13 + 4);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v8 + 16);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v8 + 12);
    RtlpCurDirRef = v8;
    RtlLeaveCriticalSection(&FastPebLock);
    if ( v9 )
    {
      if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v9, 0xFFFFFFFF) )
      {
        NtClose(*(HANDLE *)(v9 + 4));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      }
    }
  }
  return v12;
}
