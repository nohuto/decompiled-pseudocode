/*
 * XREFs of ?xxxWindowHitTestWithoutTargeting@@YGPAUHWND__@@PAUtagTHREADINFO@@PAUtagWND@@IIJUtagPOINT@@PAHKPBUtagPOINTEREVENTINT@@PAU4@@Z @ 0x17B79F
 * Callers:
 *     _xxxPointerWindowHitTest@48 @ 0x17C5CD (_xxxPointerWindowHitTest@48.c)
 * Callees:
 *     _IsThreadDesktopComposed@4 @ 0x303CC (_IsThreadDesktopComposed@4.c)
 *     _xxxWindowHitTest@20 @ 0x7D14C (_xxxWindowHitTest@20.c)
 *     _xxxDCEWindowHitTest@32 @ 0x9AED8 (_xxxDCEWindowHitTest@32.c)
 */

HWND __userpurge xxxWindowHitTestWithoutTargeting@<eax>(
        ULONG_PTR a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagTHREADINFO *a3,
        struct tagWND *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        struct tagPOINT a8,
        int *a9,
        LONG a10,
        const struct tagPOINTEREVENTINT *a11,
        struct tagPOINT *a12)
{
  if ( IsThreadDesktopComposed(a2) )
    return xxxDCEWindowHitTest(a1, (int)a3, (int)a4, a5, a6, a7, (struct tagWND *)a9, a10);
  else
    return (HWND)xxxWindowHitTest(a1, a7, (int)a9, a10);
}
