/*
 * XREFs of IsMFMWFPWindow @ 0x1C023742C
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0234958 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C0237458 (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C023797C (UnlockMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02390A0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C023A0CC (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C024AC44 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C024AEB4 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C024B1A0 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMFMWFPWindow(__int64 a1)
{
  return a1 && a1 != 4294967291LL && a1 != 0xFFFFFFFFLL;
}
