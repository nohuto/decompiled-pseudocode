/*
 * XREFs of MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x1405B0AC0
 * Callers:
 *     MiGetSlabStandbyListWorker @ 0x1405B11A0 (MiGetSlabStandbyListWorker.c)
 * Callees:
 *     MiSetPfnNodeBlinkLow @ 0x1402393AC (MiSetPfnNodeBlinkLow.c)
 *     MiSetNextStandbyPageSameNodeNoLockAsserts @ 0x1403385E0 (MiSetNextStandbyPageSameNodeNoLockAsserts.c)
 */

signed __int64 __fastcall MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2 & 0xFFFFFFFFFFLL;
  MiSetPfnNodeBlinkLow(a1, a2);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 36) & 0xFFE00000 | (v2 >> 19);
  return MiSetNextStandbyPageSameNodeNoLockAsserts(a1, a2 >> 40);
}
