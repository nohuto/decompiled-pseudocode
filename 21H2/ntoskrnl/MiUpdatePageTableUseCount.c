/*
 * XREFs of MiUpdatePageTableUseCount @ 0x14024DB74
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x14025EF28 (MiExpandSharedZeroCluster.c)
 *     MiActOnPte @ 0x1402E0E40 (MiActOnPte.c)
 *     MiZeroFault @ 0x140359BB0 (MiZeroFault.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x140314524 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x1403177B0 (MiGetUsedPtesHandle.c)
 */

__int64 __fastcall MiUpdatePageTableUseCount(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // r8
  unsigned int i; // r9d
  __int64 UsedPtesHandle; // rax

  v3 = a1;
  for ( i = 0; i < 3; ++i )
  {
    if ( v3 <= 0x7FFFFFFEFFFFLL )
    {
      UsedPtesHandle = MiGetUsedPtesHandle(a1);
      MiIncreaseUsedPtesCount(UsedPtesHandle, a2);
      return 1LL;
    }
    v3 = (__int64)(v3 << 25) >> 16;
  }
  return 0LL;
}
