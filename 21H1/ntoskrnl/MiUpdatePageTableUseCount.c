/*
 * XREFs of MiUpdatePageTableUseCount @ 0x140341598
 * Callers:
 *     MiZeroFault @ 0x14020A440 (MiZeroFault.c)
 *     MiActOnPte @ 0x140228A50 (MiActOnPte.c)
 *     MiExpandSharedZeroCluster @ 0x140344B4C (MiExpandSharedZeroCluster.c)
 * Callees:
 *     MiGetUsedPtesHandle @ 0x14029EEF0 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402AF310 (MiIncreaseUsedPtesCount.c)
 */

__int64 __fastcall MiUpdatePageTableUseCount(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // r8
  unsigned int i; // r9d
  __int64 UsedPtesHandle; // rax
  __int64 v6; // r8
  __int64 v7; // r9

  v3 = a1;
  for ( i = 0; i < 3; ++i )
  {
    if ( v3 <= 0x7FFFFFFEFFFFLL )
    {
      UsedPtesHandle = MiGetUsedPtesHandle(a1);
      MiIncreaseUsedPtesCount(UsedPtesHandle, a2, v6, v7);
      return 1LL;
    }
    v3 = (__int64)(v3 << 25) >> 16;
  }
  return 0LL;
}
