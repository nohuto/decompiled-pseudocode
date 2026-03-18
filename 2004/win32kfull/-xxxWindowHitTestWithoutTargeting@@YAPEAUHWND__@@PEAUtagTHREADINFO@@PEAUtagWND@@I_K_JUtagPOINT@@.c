/*
 * XREFs of ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C0217A6C
 * Callers:
 *     xxxPointerWindowHitTest @ 0x1C0218754 (xxxPointerWindowHitTest.c)
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C0069C78 (IsThreadDesktopComposed.c)
 *     xxxDCEWindowHitTest @ 0x1C00B09BC (xxxDCEWindowHitTest.c)
 *     xxxWindowHitTest @ 0x1C010B314 (xxxWindowHitTest.c)
 */

__int64 __fastcall xxxWindowHitTestWithoutTargeting(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct tagPOINT a6,
        int *a7)
{
  struct tagWND *v7; // r10

  if ( (unsigned int)IsThreadDesktopComposed((__int64)a1) )
    return xxxDCEWindowHitTest(v7);
  else
    return xxxWindowHitTest((__int64)v7, *(_QWORD *)&a6, (__int64)a7);
}
