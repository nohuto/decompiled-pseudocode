/*
 * XREFs of LockMFMWFPWindow @ 0x1C02365C8
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0233AC8 (xxxHandleMenuMessages.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0249B98 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C023659C (IsMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C0236AEC (UnlockMFMWFPWindow.c)
 */

void __fastcall LockMFMWFPWindow(__int64 *a1, __int64 a2)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *a1 != a2 )
  {
    UnlockMFMWFPWindow(a1);
    if ( IsMFMWFPWindow(a2) )
    {
      v4[0] = a1;
      v4[1] = a2;
      HMAssignmentLock(v4);
    }
    else
    {
      *a1 = a2;
    }
  }
}
