/*
 * XREFs of MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x140552D88
 * Callers:
 *     MiGetSlabStandbyListWorker @ 0x1405531A0 (MiGetSlabStandbyListWorker.c)
 * Callees:
 *     MiSetPfnNodeBlinkHigh @ 0x1402346F4 (MiSetPfnNodeBlinkHigh.c)
 */

__int64 __fastcall MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  *(_WORD *)(a1 + 36) = a2;
  MiSetPfnNodeBlinkHigh(a1, (a2 >> 16) & 0xFFFFF, 1);
  *(_BYTE *)(a1 + 39) = a2 >> 36;
  result = (a2 >> 8) ^ (*(_QWORD *)a1 ^ (a2 >> 8)) & 0xFFFFFFFFFLL;
  *(_QWORD *)a1 = result;
  return result;
}
