/*
 * XREFs of MiSetFreeZeroPfnCold @ 0x1403AEFC0
 * Callers:
 *     MiDemoteLocalLargePage @ 0x1402942B0 (MiDemoteLocalLargePage.c)
 *     MiFreeLargePageMemory @ 0x140345AB8 (MiFreeLargePageMemory.c)
 *     MiInsertLargePageChain @ 0x140345BE8 (MiInsertLargePageChain.c)
 *     MiGetLargePage @ 0x1403490A0 (MiGetLargePage.c)
 *     MiLargePageFreeToZero @ 0x1403493F0 (MiLargePageFreeToZero.c)
 *     MiEnableNewPfns @ 0x140528540 (MiEnableNewPfns.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x140228500 (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiSetFreeZeroPfnCold(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = MiUpdatePageFileHighInPte(*(_QWORD *)(a1 + 16), -(__int64)(a2 != 0) & 0xFFFFFFFDLL);
  *(_QWORD *)(v3 + 16) = result;
  return result;
}
