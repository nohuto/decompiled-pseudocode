/*
 * XREFs of MiSetFreeZeroPfnCold @ 0x1403B1490
 * Callers:
 *     MiDemoteLocalLargePage @ 0x140232110 (MiDemoteLocalLargePage.c)
 *     MiFreeLargePageMemory @ 0x1402FE654 (MiFreeLargePageMemory.c)
 *     MiInsertLargePageChain @ 0x1402FE784 (MiInsertLargePageChain.c)
 *     MiGetLargePage @ 0x140303A34 (MiGetLargePage.c)
 *     MiLargePageFreeToZero @ 0x140303D40 (MiLargePageFreeToZero.c)
 *     MiEnableNewPfns @ 0x14052E060 (MiEnableNewPfns.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14023DD80 (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiSetFreeZeroPfnCold(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = MiUpdatePageFileHighInPte(*(_QWORD *)(a1 + 16), -(__int64)(a2 != 0) & 0xFFFFFFFDLL);
  *(_QWORD *)(v3 + 16) = result;
  return result;
}
