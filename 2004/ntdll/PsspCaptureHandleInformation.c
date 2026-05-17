/*
 * XREFs of PsspCaptureHandleInformation @ 0x180115804
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180113940 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009D110 (ZwAllocateVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x18009D130 (NtQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x18009D1D0 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009D310 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D350 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009D750 (NtCreateSection.c)
 *     PsspWalkHandleTable @ 0x180115FB4 (PsspWalkHandleTable.c)
 */

int __fastcall PsspCaptureHandleInformation(__int64 a1, void *a2, int a3)
{
  int result; // eax
  ULONG v7; // esi
  int v8; // ebx
  void *Heap; // rax
  int Section; // esi
  ULONG v11; // r12d
  __int64 v12; // [rsp+58h] [rbp-19h]
  ULONG ReturnLength; // [rsp+68h] [rbp-9h] BYREF
  __int64 v14; // [rsp+70h] [rbp-1h]
  HANDLE Handle; // [rsp+78h] [rbp+7h]
  __int64 v16; // [rsp+80h] [rbp+Fh] BYREF
  int v17; // [rsp+88h] [rbp+17h]
  __int64 v18; // [rsp+8Ch] [rbp+1Bh]
  int ProcessInformation; // [rsp+98h] [rbp+27h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+2Fh]
  unsigned int v21; // [rsp+F0h] [rbp+7Fh] BYREF

  result = NtQueryInformationProcess(a2, (PROCESSINFOCLASS)20, &ProcessInformation, 8u, 0LL);
  if ( result >= 0 )
  {
    v7 = 4 * ProcessInformation;
    v8 = a3 & 0x20000000;
    if ( (a3 & 0x20000000) != 0 )
    {
      v12 = 0LL;
      result = ZwAllocateVirtualMemory();
      if ( result < 0 )
        return result;
      Heap = 0LL;
    }
    else
    {
      Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(4 * ProcessInformation));
      v12 = (__int64)Heap;
      if ( !Heap )
        return -1073741670;
    }
    Section = NtQueryInformationProcess(a2, ProcessWow64Information|0x20, Heap, v7, &ReturnLength);
    if ( Section < 0 )
    {
      if ( !v8 )
      {
LABEL_9:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
        return Section;
      }
LABEL_10:
      ZwFreeVirtualMemory();
      return Section;
    }
    v11 = ReturnLength >> 2;
    v21 = 0;
    PsspWalkHandleTable((_DWORD)a2, v12, ReturnLength >> 2, a3, (__int64)PsspHandleStreamSizeCalculator, (__int64)&v21);
    v20 = v21;
    Section = NtCreateSection();
    if ( Section < 0 )
    {
LABEL_15:
      if ( !v8 )
        goto LABEL_9;
      goto LABEL_10;
    }
    v14 = 0LL;
    Section = ZwMapViewOfSection();
    if ( Section < 0 )
    {
      NtClose(Handle);
      goto LABEL_15;
    }
    v16 = v14;
    v21 = 0;
    v17 = 0;
    v18 = 0LL;
    PsspWalkHandleTable((_DWORD)a2, v12, v11, a3, (__int64)PsspHandleDumper, (__int64)&v16);
    NtUnmapViewOfSection();
    if ( v8 )
      ZwFreeVirtualMemory();
    else
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
    *(_DWORD *)(a1 + 960) = HIDWORD(v18);
    *(_QWORD *)(a1 + 968) = (unsigned int)v18;
    *(_QWORD *)(a1 + 976) = Handle;
    *(_QWORD *)(a1 + 984) = MEMORY[0x7FFE0014];
    return 0;
  }
  return result;
}
