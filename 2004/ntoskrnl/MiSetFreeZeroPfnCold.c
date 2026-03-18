/*
 * XREFs of MiSetFreeZeroPfnCold @ 0x1403A8BA0
 * Callers:
 *     MiDemoteLocalLargePage @ 0x14023B280 (MiDemoteLocalLargePage.c)
 *     MiFreeLargePageMemory @ 0x140316778 (MiFreeLargePageMemory.c)
 *     MiInsertLargePageChain @ 0x1403168A8 (MiInsertLargePageChain.c)
 *     MiGetLargePage @ 0x140319D60 (MiGetLargePage.c)
 *     MiLargePageFreeToZero @ 0x14031A0B0 (MiLargePageFreeToZero.c)
 *     MiEnableNewPfns @ 0x140528B90 (MiEnableNewPfns.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x1402BB180 (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiSetFreeZeroPfnCold(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = MiUpdatePageFileHighInPte(*(_QWORD *)(a1 + 16), -(__int64)(a2 != 0) & 0xFFFFFFFDLL);
  *(_QWORD *)(v3 + 16) = result;
  return result;
}
