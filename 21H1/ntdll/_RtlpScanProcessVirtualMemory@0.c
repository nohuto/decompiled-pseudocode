/*
 * XREFs of _RtlpScanProcessVirtualMemory@0 @ 0x4B35ECB4
 * Callers:
 *     _RtlDetectHeapLeaks@0 @ 0x4B2DD8C0 (_RtlDetectHeapLeaks@0.c)
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpGetHeapBlock@4 @ 0x4B35E746 (_RtlpGetHeapBlock@4.c)
 *     _RtlpGetMemoryFlag@8 @ 0x4B35E7A1 (_RtlpGetMemoryFlag@8.c)
 *     _RtlpScanHeapAllocBlocks@0 @ 0x4B35EB37 (_RtlpScanHeapAllocBlocks@0.c)
 */

char __fastcall RtlpScanProcessVirtualMemory(unsigned int a1, int *a2)
{
  unsigned int *v2; // edi
  int v3; // ebx
  unsigned int v4; // eax
  int HeapBlock; // eax
  int **v6; // ecx
  int *v7; // eax
  int **v8; // eax
  int *v9; // eax
  ULONG_PTR *v11; // [esp+0h] [ebp-58h]
  _BYTE MemoryInformation[12]; // [esp+10h] [ebp-48h] BYREF
  unsigned int v13; // [esp+1Ch] [ebp-3Ch]
  int v14; // [esp+20h] [ebp-38h]
  int v15; // [esp+24h] [ebp-34h]
  unsigned int *v16; // [esp+2Ch] [ebp-2Ch]
  unsigned int v17; // [esp+30h] [ebp-28h]
  int v18; // [esp+34h] [ebp-24h]
  NTSTATUS VirtualMemory; // [esp+38h] [ebp-20h]
  PVOID BaseAddress; // [esp+3Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  BaseAddress = 0;
  VirtualMemory = 0;
  while ( VirtualMemory >= 0 )
  {
    v2 = (unsigned int *)BaseAddress;
    VirtualMemory = NtQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFF,
                      BaseAddress,
                      MemoryBasicInformation,
                      MemoryInformation,
                      0x1CuLL,
                      v11);
    if ( VirtualMemory >= 0 )
    {
      if ( (MemoryInformation[8] & 0xCC) != 0
        && (v14 & 0x1000) != 0
        && (v15 & 0x100) == 0
        && !RtlpGetMemoryFlag((_DWORD *)RtlpProcessMemoryMap, (unsigned int)v2) )
      {
        a1 = v13 >> 2;
        v17 = v13 >> 2;
        ms_exc.registration.TryLevel = 0;
        v3 = 0;
        v4 = 0;
        while ( 1 )
        {
          v18 = v3;
          if ( v4 >= a1 )
            break;
          HeapBlock = RtlpGetHeapBlock(*v2);
          v6 = (int **)HeapBlock;
          if ( HeapBlock )
          {
            if ( !*(_DWORD *)(HeapBlock + 8) )
              __debugbreak();
            v7 = *(int **)(HeapBlock + 16);
            if ( !v7 )
            {
              a2 = *v6;
              v8 = (int **)v6[1];
              if ( (int **)(*v6)[1] != v6
                || *v8 != (int *)v6
                || (*v8 = a2, a2[1] = (int)v8, v9 = (int *)dword_4B3A47E4, *(int **)dword_4B3A47E4 != &RtlpBusyList) )
              {
                __fastfail(3u);
              }
              *v6 = &RtlpBusyList;
              v6[1] = v9;
              *v9 = (int)v6;
              dword_4B3A47E4 = (int)v6;
              v7 = v6[4];
            }
            v6[4] = (int *)((char *)v7 + 1);
          }
          v16 = ++v2;
          v4 = ++v3;
          a1 = v17;
        }
        ms_exc.registration.TryLevel = -2;
      }
      BaseAddress = (char *)BaseAddress + v13;
    }
  }
  RtlpScanHeapAllocBlocks(a1, a2);
  return 1;
}
