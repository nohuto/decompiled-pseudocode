/*
 * XREFs of MiUpdatePageTableUseCount @ 0x140312260
 * Callers:
 *     MiZeroFault @ 0x14029CF50 (MiZeroFault.c)
 *     MiActOnPte @ 0x1402BB6D0 (MiActOnPte.c)
 *     MiExpandSharedZeroCluster @ 0x14031580C (MiExpandSharedZeroCluster.c)
 * Callees:
 *     MiGetUsedPtesHandle @ 0x140245EC0 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402562E0 (MiIncreaseUsedPtesCount.c)
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
