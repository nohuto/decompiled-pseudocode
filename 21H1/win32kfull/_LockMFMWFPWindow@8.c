/*
 * XREFs of _LockMFMWFPWindow@8 @ 0x197508
 * Callers:
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     _xxxMNUpdateDraggingInfo@12 @ 0x1A798E (_xxxMNUpdateDraggingInfo@12.c)
 * Callees:
 *     _IsMFMWFPWindow@4 @ 0x1974E8 (_IsMFMWFPWindow@4.c)
 *     _UnlockMFMWFPWindow@4 @ 0x19784F (_UnlockMFMWFPWindow@4.c)
 */

void __fastcall LockMFMWFPWindow(void **a1, void *a2)
{
  int v4; // edx
  int v5; // ecx

  if ( *a1 != a2 )
  {
    UnlockMFMWFPWindow(a1);
    if ( IsMFMWFPWindow(a2) )
      HMAssignmentLock(v5, v4);
    else
      *a1 = a2;
  }
}
