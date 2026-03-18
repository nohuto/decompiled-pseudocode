/*
 * XREFs of _IsMFMWFPWindow@4 @ 0x1974E8
 * Callers:
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     _LockMFMWFPWindow@8 @ 0x197508 (_LockMFMWFPWindow@8.c)
 *     _UnlockMFMWFPWindow@4 @ 0x19784F (_UnlockMFMWFPWindow@4.c)
 *     _xxxMNFindWindowFromPoint@12 @ 0x198869 (_xxxMNFindWindowFromPoint@12.c)
 *     _xxxMNMouseMove@12 @ 0x199408 (_xxxMNMouseMove@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxMNDragOver@8 @ 0x1A7669 (_xxxMNDragOver@8.c)
 *     _xxxMNSetGapState@16 @ 0x1A77B8 (_xxxMNSetGapState@16.c)
 *     _xxxMNUpdateDraggingInfo@12 @ 0x1A798E (_xxxMNUpdateDraggingInfo@12.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsMFMWFPWindow(void *this)
{
  return this && this != (void *)-5 && this != (void *)-1;
}
