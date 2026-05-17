/*
 * XREFs of TppDestroyTimer @ 0x18000F1E8
 * Callers:
 *     TppFreeWait @ 0x18000C220 (TppFreeWait.c)
 *     TppTimerpFree @ 0x18000C5A0 (TppTimerpFree.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x180010A00 (TpAdjustBindingCount.c)
 */

__int64 __fastcall TppDestroyTimer(__int64 a1)
{
  TpAdjustBindingCount(*(_QWORD *)(a1 + 144), 0xFFFFFFFFLL);
  return TppCleanupGroupMemberDestroy(a1);
}
