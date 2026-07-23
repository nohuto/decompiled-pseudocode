/*
 * XREFs of _PsspCaptureHandleInformation@12 @ 0x4B387CF4
 * Callers:
 *     _PssNtCaptureSnapshot@16 @ 0x4B386310 (_PssNtCaptureSnapshot@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     PsspWalkHandleTable @ 0x4B3882F7 (PsspWalkHandleTable.c)
 */

NTSTATUS __fastcall PsspCaptureHandleInformation(_DWORD *a1, void *a2, int a3)
{
  NTSTATUS result; // eax
  int v6; // esi
  PVOID Heap; // eax
  int v8; // ecx
  _DWORD *v9; // edi
  SIZE_T v10; // [esp-14h] [ebp-70h]
  ULONG_PTR v11; // [esp-10h] [ebp-6Ch]
  SIZE_T v12; // [esp-4h] [ebp-60h]
  ULONG v13; // [esp+0h] [ebp-5Ch]
  ULONG v14; // [esp+4h] [ebp-58h]
  int v15[2]; // [esp+10h] [ebp-4Ch] BYREF
  int v16; // [esp+18h] [ebp-44h]
  int v17; // [esp+1Ch] [ebp-40h]
  int ProcessInformation; // [esp+20h] [ebp-3Ch] BYREF
  LARGE_INTEGER MaximumSize; // [esp+28h] [ebp-34h] BYREF
  _DWORD *v20; // [esp+34h] [ebp-28h]
  int v21; // [esp+38h] [ebp-24h]
  ULONG ReturnLength; // [esp+3Ch] [ebp-20h] BYREF
  ULONG ProcessInformationLength; // [esp+40h] [ebp-1Ch]
  HANDLE SectionHandle; // [esp+44h] [ebp-18h] BYREF
  PVOID BaseAddress; // [esp+48h] [ebp-14h] BYREF
  int v26; // [esp+4Ch] [ebp-10h] BYREF
  ULONG_PTR RegionSize; // [esp+50h] [ebp-Ch] BYREF

  v20 = a1;
  result = ZwQueryInformationProcess(a2, ProcessHandleCount, &ProcessInformation, 8u, 0);
  if ( result >= 0 )
  {
    ProcessInformationLength = 4 * ProcessInformation;
    v6 = a3 & 0x20000000;
    if ( (a3 & 0x20000000) != 0 )
    {
      RegionSize = (unsigned int)(4 * ProcessInformation);
      HIDWORD(v11) = &RegionSize;
      LODWORD(v11) = 0;
      result = NtAllocateVirtualMemory(
                 (HANDLE)0xFFFFFFFF,
                 (PVOID *)&RegionSize + 1,
                 v11,
                 (PSIZE_T)0x1000,
                 4u,
                 HIDWORD(v12));
      if ( result < 0 )
        return result;
      Heap = (PVOID)HIDWORD(RegionSize);
    }
    else
    {
      LODWORD(v12) = 4 * ProcessInformation;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
      HIDWORD(RegionSize) = Heap;
      if ( !Heap )
        return -1073741670;
    }
    ProcessInformationLength = ZwQueryInformationProcess(
                                 a2,
                                 ProcessHandleTable,
                                 Heap,
                                 ProcessInformationLength,
                                 &ReturnLength);
    if ( (ProcessInformationLength & 0x80000000) != 0
      || (v26 = 0,
          v21 = ReturnLength >> 2,
          PsspWalkHandleTable(a2, ReturnLength >> 2, a3, (int)PsspHandleStreamSizeCalculator, (int)&v26),
          MaximumSize.QuadPart = (unsigned int)v26,
          ProcessInformationLength = NtCreateSection(
                                       &SectionHandle,
                                       0xF0007u,
                                       (POBJECT_ATTRIBUTES)&stru_4B2A596C,
                                       &MaximumSize,
                                       4u,
                                       0x8000000u,
                                       0),
          (ProcessInformationLength & 0x80000000) != 0) )
    {
      if ( !v6 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)HIDWORD(RegionSize));
        return ProcessInformationLength;
      }
      goto LABEL_11;
    }
    HIDWORD(v10) = &RegionSize;
    LODWORD(v10) = 0;
    BaseAddress = 0;
    LODWORD(RegionSize) = 0;
    ProcessInformationLength = ZwMapViewOfSection(
                                 SectionHandle,
                                 (HANDLE)0xFFFFFFFF,
                                 &BaseAddress,
                                 0LL,
                                 v10,
                                 (PLARGE_INTEGER)1,
                                 0,
                                 (SECTION_INHERIT)4,
                                 v13,
                                 v14);
    if ( (ProcessInformationLength & 0x80000000) != 0 )
    {
      NtClose(SectionHandle);
      if ( !v6 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)HIDWORD(RegionSize));
        return ProcessInformationLength;
      }
LABEL_11:
      LODWORD(RegionSize) = 0;
      NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&RegionSize + 1, &RegionSize, 0x8000u);
      return ProcessInformationLength;
    }
    v16 = 0;
    v17 = 0;
    v15[0] = (int)BaseAddress;
    v26 = RegionSize;
    v15[1] = RegionSize;
    PsspWalkHandleTable(a2, v21, a3, (int)&PsspHandleDumper, (int)v15);
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
    if ( v6 )
    {
      LODWORD(RegionSize) = 0;
      NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&RegionSize + 1, &RegionSize, 0x8000u);
    }
    else
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)HIDWORD(RegionSize));
    }
    a1[204] = v17;
    a1[205] = v16;
    a1[206] = SectionHandle;
    while ( 1 )
    {
      v8 = MEMORY[0x7FFE0018];
      if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
        break;
      _mm_pause();
    }
    v9 = v20;
    result = 0;
    v20[208] = MEMORY[0x7FFE0014];
    v9[209] = v8;
  }
  return result;
}
