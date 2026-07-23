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

NTSTATUS __cdecl RtlSetCurrentDirectory_U(PUNICODE_STRING PathName)
{
  struct _PEB *v1; // eax
  void *ProcessHeap; // ebx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // edi
  unsigned int i; // esi
  PVOID Heap; // eax
  unsigned int FullPathName_Ustr; // esi
  unsigned __int16 v7; // ax
  int v8; // ecx
  HANDLE *v9; // esi
  NTSTATUS v11; // esi
  SIZE_T v12; // [esp-4h] [ebp-2Ch]
  NTSTATUS v13; // [esp+10h] [ebp-18h]
  int v14; // [esp+14h] [ebp-14h] BYREF
  __int16 v15; // [esp+18h] [ebp-10h]
  unsigned __int16 v16; // [esp+1Ah] [ebp-Eh]
  PVOID BaseAddress; // [esp+1Ch] [ebp-Ch]
  int v18; // [esp+20h] [ebp-8h] BYREF

  v1 = NtCurrentPeb();
  ProcessHeap = v1->ProcessHeap;
  ProcessParameters = v1->ProcessParameters;
  if ( (unsigned __int8)RtlpCheckForSameCurdir(PathName) )
    return 0;
  if ( RtlpIsDosDeviceName_Ustr(PathName) )
    return -1073741565;
  for ( i = ProcessParameters->CurrentDirectory.DosPath.MaximumLength; ; i = FullPathName_Ustr + 4 )
  {
    LODWORD(v12) = i;
    Heap = RtlAllocateHeap(ProcessHeap, 0, v12);
    BaseAddress = Heap;
    if ( !Heap )
      return -1073741801;
    v15 = 0;
    if ( i > 0xFFFF )
    {
      v16 = -1;
      goto LABEL_25;
    }
    v16 = i;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(Heap, 0, 0, (int)&v18);
    if ( !FullPathName_Ustr )
    {
      v11 = -1073741773;
      goto LABEL_23;
    }
    v7 = v16;
    if ( FullPathName_Ustr <= (unsigned int)v16 - 4 )
      goto LABEL_8;
    if ( (NtCurrentPeb()->BitField & 0x80u) == 0 )
      break;
    RtlFreeHeap(ProcessHeap, 0, BaseAddress);
  }
  v7 = v16;
LABEL_8:
  if ( FullPathName_Ustr > v7 )
  {
    v11 = -1073741562;
LABEL_23:
    Heap = BaseAddress;
LABEL_26:
    RtlFreeHeap(ProcessHeap, 0, Heap);
    return v11;
  }
  if ( FullPathName_Ustr > 0xFFFF )
  {
    v15 = -1;
    Heap = BaseAddress;
LABEL_25:
    v11 = -1073741675;
    goto LABEL_26;
  }
  v15 = FullPathName_Ustr;
  v13 = RtlpCreateNewDirectoryReference(&v14);
  RtlFreeHeap(ProcessHeap, 0, BaseAddress);
  if ( v13 >= 0 )
  {
    RtlEnterCriticalSection(&FastPebLock);
    v8 = v14;
    v9 = (HANDLE *)RtlpCurDirRef;
    ProcessParameters->CurrentDirectory.Handle = *(void **)(v14 + 4);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v8 + 16);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v8 + 12);
    RtlpCurDirRef = (PVOID)v8;
    RtlLeaveCriticalSection(&FastPebLock);
    if ( v9 )
    {
      if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v9, 0xFFFFFFFF) )
      {
        NtClose(v9[1]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      }
    }
  }
  return v13;
}
