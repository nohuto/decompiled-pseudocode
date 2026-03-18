/*
 * XREFs of MiSetFreeZeroPfnCold @ 0x1403AB590
 * Callers:
 *     MiDemoteLocalLargePage @ 0x1402C0930 (MiDemoteLocalLargePage.c)
 *     MiFreeLargePageMemory @ 0x1402F19BC (MiFreeLargePageMemory.c)
 *     MiInsertLargePageChain @ 0x1402F1AEC (MiInsertLargePageChain.c)
 *     MiGetLargePage @ 0x14034D8FC (MiGetLargePage.c)
 *     MiLargePageFreeToZero @ 0x14034DC00 (MiLargePageFreeToZero.c)
 *     MiEnableNewPfns @ 0x14052C560 (MiEnableNewPfns.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x140348DE0 (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiSetFreeZeroPfnCold(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = MiUpdatePageFileHighInPte(*(_QWORD *)(a1 + 16), -(__int64)(a2 != 0) & 0xFFFFFFFDLL);
  *(_QWORD *)(v3 + 16) = result;
  return result;
}
