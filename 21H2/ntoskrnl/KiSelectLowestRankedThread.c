/*
 * XREFs of KiSelectLowestRankedThread @ 0x140278714
 * Callers:
 *     KiSelectNextThread @ 0x1402785FC (KiSelectNextThread.c)
 *     KiSelectReadyThreadEx @ 0x1402D4710 (KiSelectReadyThreadEx.c)
 * Callees:
 *     KiSelectThreadFromSchedulingGroup @ 0x14029CA8C (KiSelectThreadFromSchedulingGroup.c)
 */

__int64 __fastcall KiSelectLowestRankedThread(__int64 a1)
{
  __int64 v2; // rdx
  __int64 i; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax

  if ( KiPerfIsoEnabled )
  {
    v8 = **(_QWORD **)(a1 + 192) - ((**(_QWORD **)(a1 + 192) >> 1) & 0x5555555555555555LL);
    if ( (unsigned int)((0x101010101010101LL
                       * (((v8 & 0x3333333333333333LL)
                         + ((v8 >> 2) & 0x3333333333333333LL)
                         + (((v8 & 0x3333333333333333LL) + ((v8 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < KiPerfIsoEnabled )
      return 0LL;
    v9 = *(_QWORD *)(a1 + 200);
    v10 = *(_QWORD *)(a1 + 33880);
    if ( v9 != v10 )
    {
      v11 = v10 & ~v9;
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 24LL) & v11) == 0 )
      {
        _BitScanForward64(&v12, v11);
        if ( (*(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208)
                                                                              + (int)v12]]
                        + 236) & 0x400) == 0 )
          return 0LL;
      }
    }
  }
  v2 = 0LL;
  for ( i = a1 + 31856; ; i = v7 + 392 )
  {
    v4 = *(_QWORD *)(i + 8);
    if ( (v4 & 1) != 0 )
    {
      if ( v4 == 1 )
        return v2;
      v5 = v4 ^ (i | 1);
    }
    else
    {
      v5 = *(_QWORD *)(i + 8);
    }
    if ( !v5 )
      break;
    v7 = v5 - 88;
    v2 = KiSelectThreadFromSchedulingGroup(a1, v5 - 88, 0LL);
    if ( v2 )
      break;
  }
  return v2;
}
