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

char __stdcall RtlpScanProcessVirtualMemory()
{
  unsigned int *v0; // edi
  unsigned int v1; // ecx
  int v2; // ebx
  unsigned int v3; // eax
  int HeapBlock; // eax
  _DWORD *v5; // ecx
  int v6; // eax
  int v7; // edx
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _BYTE v11[12]; // [esp+10h] [ebp-48h] BYREF
  unsigned int v12; // [esp+1Ch] [ebp-3Ch]
  int v13; // [esp+20h] [ebp-38h]
  int v14; // [esp+24h] [ebp-34h]
  unsigned int *v15; // [esp+2Ch] [ebp-2Ch]
  unsigned int v16; // [esp+30h] [ebp-28h]
  int v17; // [esp+34h] [ebp-24h]
  int VirtualMemory; // [esp+38h] [ebp-20h]
  unsigned int *v19; // [esp+3Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  v19 = 0;
  VirtualMemory = 0;
  while ( VirtualMemory >= 0 )
  {
    v0 = v19;
    VirtualMemory = NtQueryVirtualMemory(-1, (int)v19, 0, (int)v11, 28, 0);
    if ( VirtualMemory >= 0 )
    {
      if ( (v11[8] & 0xCC) != 0
        && (v13 & 0x1000) != 0
        && (v14 & 0x100) == 0
        && !RtlpGetMemoryFlag((_DWORD *)RtlpProcessMemoryMap, (unsigned int)v0) )
      {
        v1 = v12 >> 2;
        v16 = v12 >> 2;
        ms_exc.registration.TryLevel = 0;
        v2 = 0;
        v3 = 0;
        while ( 1 )
        {
          v17 = v2;
          if ( v3 >= v1 )
            break;
          HeapBlock = RtlpGetHeapBlock(*v0);
          v5 = (_DWORD *)HeapBlock;
          if ( HeapBlock )
          {
            if ( !*(_DWORD *)(HeapBlock + 8) )
              __debugbreak();
            v6 = *(_DWORD *)(HeapBlock + 16);
            if ( !v6 )
            {
              v7 = *v5;
              v8 = (_DWORD *)v5[1];
              if ( *(_DWORD **)(*v5 + 4) != v5
                || (_DWORD *)*v8 != v5
                || (*v8 = v7,
                    *(_DWORD *)(v7 + 4) = v8,
                    v9 = (_DWORD *)dword_4B3A47E4,
                    *(int **)dword_4B3A47E4 != &RtlpBusyList) )
              {
                __fastfail(3u);
              }
              *v5 = &RtlpBusyList;
              v5[1] = v9;
              *v9 = v5;
              dword_4B3A47E4 = (int)v5;
              v6 = v5[4];
            }
            v5[4] = v6 + 1;
          }
          v15 = ++v0;
          v3 = ++v2;
          v1 = v16;
        }
        ms_exc.registration.TryLevel = -2;
      }
      v19 = (unsigned int *)((char *)v19 + v12);
    }
  }
  RtlpScanHeapAllocBlocks();
  return 1;
}
