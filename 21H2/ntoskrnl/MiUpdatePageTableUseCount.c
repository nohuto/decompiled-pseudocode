/*
 * XREFs of MiUpdatePageTableUseCount @ 0x1402CF7F4
 * Callers:
 *     MiActOnPte @ 0x14023C5F0 (MiActOnPte.c)
 *     MiExpandSharedZeroCluster @ 0x140270F88 (MiExpandSharedZeroCluster.c)
 *     MiZeroFault @ 0x14034EE60 (MiZeroFault.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x1403097D4 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14030CA60 (MiGetUsedPtesHandle.c)
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
