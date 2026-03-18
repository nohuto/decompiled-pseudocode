/*
 * XREFs of MiUpdatePageTableUseCount @ 0x14023C700
 * Callers:
 *     MiZeroFault @ 0x140224FB0 (MiZeroFault.c)
 *     MiExpandSharedZeroCluster @ 0x1402394E4 (MiExpandSharedZeroCluster.c)
 *     MiActOnPte @ 0x1403476D0 (MiActOnPte.c)
 * Callees:
 *     MiGetUsedPtesHandle @ 0x1402CC840 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402CEA34 (MiIncreaseUsedPtesCount.c)
 */

__int64 __fastcall MiUpdatePageTableUseCount(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // r8
  unsigned int i; // r9d
  __int64 UsedPtesHandle; // rax

  v2 = a2;
  v3 = a1;
  for ( i = 0; i < 3; ++i )
  {
    if ( v3 <= 0x7FFFFFFEFFFFLL )
    {
      UsedPtesHandle = MiGetUsedPtesHandle(a1, a2);
      MiIncreaseUsedPtesCount(UsedPtesHandle, v2);
      return 1LL;
    }
    v3 = (__int64)(v3 << 25) >> 16;
  }
  return 0LL;
}
