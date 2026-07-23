/*
 * XREFs of PsspCaptureHandleInformation @ 0x180115B74
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180113CB0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009D900 (ZwAllocateVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x18009D920 (NtQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x18009D9C0 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009DB00 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009DB40 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009DF40 (NtCreateSection.c)
 *     PsspWalkHandleTable @ 0x180116324 (PsspWalkHandleTable.c)
 */

NTSTATUS __fastcall PsspCaptureHandleInformation(__int64 a1, void *a2, int a3)
{
  NTSTATUS result; // eax
  ULONG v7; // esi
  int v8; // ebx
  PVOID Heap; // rax
  NTSTATUS v10; // esi
  PVOID BaseAddress; // [rsp+58h] [rbp-19h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-11h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-9h] BYREF
  PVOID v14; // [rsp+70h] [rbp-1h] BYREF
  HANDLE SectionHandle; // [rsp+78h] [rbp+7h] BYREF
  __int64 v16; // [rsp+80h] [rbp+Fh] BYREF
  int v17; // [rsp+88h] [rbp+17h]
  __int64 v18; // [rsp+8Ch] [rbp+1Bh]
  int ProcessInformation; // [rsp+98h] [rbp+27h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+A0h] [rbp+2Fh] BYREF
  __int64 v21; // [rsp+F0h] [rbp+7Fh] BYREF

  result = NtQueryInformationProcess(a2, ProcessHandleCount, &ProcessInformation, 8u, 0LL);
  if ( result >= 0 )
  {
    v7 = 4 * ProcessInformation;
    v8 = a3 & 0x20000000;
    if ( (a3 & 0x20000000) != 0 )
    {
      BaseAddress = 0LL;
      RegionSize = (unsigned int)(4 * ProcessInformation);
      result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      if ( result < 0 )
        return result;
      Heap = BaseAddress;
    }
    else
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(4 * ProcessInformation));
      BaseAddress = Heap;
      if ( !Heap )
        return -1073741670;
    }
    v10 = NtQueryInformationProcess(a2, ProcessHandleTable, Heap, v7, &ReturnLength);
    if ( v10 < 0 )
    {
      if ( !v8 )
      {
LABEL_9:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        return v10;
      }
LABEL_10:
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      return v10;
    }
    LODWORD(v21) = 0;
    PsspWalkHandleTable(a2, (__int64)PsspHandleStreamSizeCalculator, (__int64)&v21);
    MaximumSize.QuadPart = (unsigned int)v21;
    v10 = NtCreateSection(
            &SectionHandle,
            0xF0007u,
            (POBJECT_ATTRIBUTES)&stru_18013FFA0,
            &MaximumSize,
            4u,
            0x8000000u,
            0LL);
    if ( v10 < 0 )
    {
LABEL_15:
      if ( !v8 )
        goto LABEL_9;
      goto LABEL_10;
    }
    v14 = 0LL;
    RegionSize = 0LL;
    v10 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &v14,
            0LL,
            0LL,
            0LL,
            &RegionSize,
            ViewShare,
            0,
            4u);
    if ( v10 < 0 )
    {
      NtClose(SectionHandle);
      goto LABEL_15;
    }
    v16 = (__int64)v14;
    LODWORD(v21) = RegionSize;
    v17 = RegionSize;
    v18 = 0LL;
    PsspWalkHandleTable(a2, (__int64)PsspHandleDumper, (__int64)&v16);
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v14);
    if ( v8 )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    else
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    }
    *(_DWORD *)(a1 + 960) = HIDWORD(v18);
    *(_QWORD *)(a1 + 968) = (unsigned int)v18;
    *(_QWORD *)(a1 + 976) = SectionHandle;
    *(_QWORD *)(a1 + 984) = MEMORY[0x7FFE0014];
    return 0;
  }
  return result;
}
