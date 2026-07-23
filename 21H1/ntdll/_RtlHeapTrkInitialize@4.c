/*
 * XREFs of _RtlHeapTrkInitialize@4 @ 0x4B364170
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlSetHeapInformation@16 @ 0x4B2ECAF0 (_RtlSetHeapInformation@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtQueryPerformanceCounter@8 @ 0x4B2F2C90 (_NtQueryPerformanceCounter@8.c)
 *     _RtlSetHeapDebuggingInformation@8 @ 0x4B357004 (_RtlSetHeapDebuggingInformation@8.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x4B364433 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x4B36481D (RtlpHeapTrkGenerateHashRandoms.c)
 */

NTSTATUS __stdcall RtlHeapTrkInitialize(HANDLE SectionHandle)
{
  NTSTATUS result; // eax
  PVOID Heap; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  int v5; // edx
  int v6; // esi
  SIZE_T v7; // [esp-14h] [ebp-58h]
  SIZE_T v8; // [esp-4h] [ebp-48h]
  SIZE_T v9; // [esp-4h] [ebp-48h]
  SIZE_T v10; // [esp-4h] [ebp-48h]
  ULONG v11; // [esp+0h] [ebp-44h]
  void *v12; // [esp+0h] [ebp-44h]
  ULONG v13; // [esp+4h] [ebp-40h]
  void *v14; // [esp+4h] [ebp-40h]
  _DWORD (__stdcall *v15)(_DWORD, _DWORD, _DWORD, _DWORD); // [esp+Ch] [ebp-38h] BYREF
  __int16 v16; // [esp+10h] [ebp-34h]
  int v17; // [esp+12h] [ebp-32h]
  int v18; // [esp+16h] [ebp-2Eh]
  int v19; // [esp+1Ah] [ebp-2Ah]
  int v20; // [esp+1Eh] [ebp-26h]
  __int16 v21; // [esp+22h] [ebp-22h]
  void *v22; // [esp+24h] [ebp-20h]
  LARGE_INTEGER PerformanceCounter; // [esp+28h] [ebp-1Ch] BYREF
  SIZE_T CommitSize; // [esp+30h] [ebp-14h] BYREF
  int HeapInformation; // [esp+38h] [ebp-Ch] BYREF
  int v26; // [esp+3Ch] [ebp-8h] BYREF
  PVOID BaseAddress; // [esp+40h] [ebp-4h] BYREF

  v26 = 0x10000;
  BaseAddress = 0;
  CommitSize = 0LL;
  if ( ::SectionHandle )
    return -1073741823;
  if ( !SectionHandle )
    return -1073741811;
  HIDWORD(v7) = &v26;
  LODWORD(v7) = &CommitSize;
  if ( ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFF,
         &BaseAddress,
         0LL,
         v7,
         (PLARGE_INTEGER)1,
         0,
         (SECTION_INHERIT)4,
         v11,
         v13) < 0 )
    return -1073741811;
  if ( *(_DWORD *)BaseAddress < 0x400u )
    return -1073741789;
  if ( *((_DWORD *)BaseAddress + 7) > 0x40u
    || *((_DWORD *)BaseAddress + 8) > 2u
    || !*((_DWORD *)BaseAddress + 1)
    || *((_DWORD *)BaseAddress + 1) == -1
    || !*((_DWORD *)BaseAddress + 2)
    || *((_DWORD *)BaseAddress + 2) == -1
    || !*((_DWORD *)BaseAddress + 3)
    || *((_DWORD *)BaseAddress + 3) == -1 )
  {
    return -1073741811;
  }
  result = NtQueryPerformanceCounter(&PerformanceCounter, &PerformanceFrequency);
  if ( result >= 0 )
  {
    if ( PerformanceFrequency.QuadPart )
    {
      dword_4B3A6C60 = *((_DWORD *)BaseAddress + 8);
      RtlpHeapTrkGenerateHashRandoms();
      Heap = RtlCreateHeap(
               *((_DWORD *)BaseAddress + 7) != 0 ? 0 : 2,
               0,
               (unsigned int)(*((_DWORD *)BaseAddress + 7) << 20),
               0LL,
               v12,
               v14);
      HeapHandle = Heap;
      if ( Heap )
      {
        LODWORD(v8) = 4;
        HeapInformation = 2;
        RtlSetHeapInformation(Heap, HeapCompatibilityInformation, &HeapInformation, v8);
        dword_4B3A6D8C = NtCurrentPeb()->NumberOfProcessors;
        if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(32, dword_4B3A6D8C) )
        {
          if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(4, 16) )
          {
            if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(4, 16) )
            {
              LODWORD(v9) = 63352;
              dword_4B3A6C54 = (int)RtlAllocateHeap(HeapHandle, 0, v9);
              if ( dword_4B3A6C54 )
              {
                LODWORD(v10) = 63352;
                v3 = RtlAllocateHeap(HeapHandle, 0, v10);
                v4 = v3;
                dword_4B3A6C5C = (int)v3;
                if ( v3 )
                {
                  ::SectionHandle = SectionHandle;
                  v5 = dword_4B3A6C54 - (_DWORD)v3;
                  dword_4B3A6C58 = 0;
                  v6 = 7919;
                  do
                  {
                    *(_DWORD *)((char *)v4 + v5 + 4) = (char *)v4 + v5;
                    *(_DWORD *)((char *)v4 + v5) = (char *)v4 + v5;
                    v4[1] = v4;
                    *v4 = v4;
                    v4 += 2;
                    --v6;
                  }
                  while ( v6 );
                  v17 = 0;
                  v18 = 0;
                  v19 = 0;
                  v20 = 0;
                  v21 = 0;
                  v15 = RtlpHeapTrkInterceptor;
                  v16 = 0;
                  v22 = &RtlpHeapTrkLeakCallback;
                  if ( RtlSetHeapDebuggingInformation(0, &v15) >= 0 )
                  {
                    NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
                    return 0;
                  }
                }
              }
            }
          }
        }
        RtlDestroyHeap(HeapHandle);
        HeapHandle = 0;
        dword_4B3A6D9C = 0;
        dword_4B3A6C54 = 0;
        dword_4B3A6D84 = 0;
        dword_4B3A6D80 = 0;
        dword_4B3A6C5C = 0;
        dword_4B3A6D90 = 0;
        dword_4B3A6D7C = 0;
        if ( BaseAddress )
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
        if ( ::SectionHandle )
        {
          NtClose(::SectionHandle);
          ::SectionHandle = 0;
        }
      }
    }
    return -1073741823;
  }
  return result;
}
