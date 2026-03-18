/*
 * XREFs of IsMFMWFPWindow @ 0x1C023659C
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0233AC8 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C02365C8 (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C0236AEC (UnlockMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0238210 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C023923C (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C024963C (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C02498AC (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0249B98 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMFMWFPWindow(__int64 a1)
{
  return a1 && a1 != 4294967291LL && a1 != 0xFFFFFFFFLL;
}
