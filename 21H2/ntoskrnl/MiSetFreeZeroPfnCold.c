/*
 * XREFs of MiSetFreeZeroPfnCold @ 0x1403B1600
 * Callers:
 *     MiDemoteLocalLargePage @ 0x1402D6960 (MiDemoteLocalLargePage.c)
 *     MiFreeLargePageMemory @ 0x1403093A4 (MiFreeLargePageMemory.c)
 *     MiInsertLargePageChain @ 0x1403094D4 (MiInsertLargePageChain.c)
 *     MiGetLargePage @ 0x14030E784 (MiGetLargePage.c)
 *     MiLargePageFreeToZero @ 0x14030EA90 (MiLargePageFreeToZero.c)
 *     MiEnableNewPfns @ 0x14052E2A0 (MiEnableNewPfns.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiSetFreeZeroPfnCold(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = MiUpdatePageFileHighInPte(*(_QWORD *)(a1 + 16), -(__int64)(a2 != 0) & 0xFFFFFFFDLL);
  *(_QWORD *)(v3 + 16) = result;
  return result;
}
