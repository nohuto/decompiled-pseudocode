/*
 * XREFs of ?GetThreadPointerData@@YGKPAUtagTHREADINPUTPOINTERLIST@@GPAKPAHPAPAUHWND__@@@Z @ 0x15ADC8
 * Callers:
 *     ?PointerMsgIdFromHookCall@@YGKPAUtagTHREADINFO@@IJ@Z @ 0x159F54 (-PointerMsgIdFromHookCall@@YGKPAUtagTHREADINFO@@IJ@Z.c)
 *     _xxxDiscardPointerFrameMessagesInternal@4 @ 0x15A623 (_xxxDiscardPointerFrameMessagesInternal@4.c)
 *     _xxxPromotePointerToMouse@8 @ 0x15A76D (_xxxPromotePointerToMouse@8.c)
 *     _xxxSendPointerMessage@28 @ 0x15AB89 (_xxxSendPointerMessage@28.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YGJIPAPBUtagPOINTER_INFO@@@Z @ 0x1A15D9 (-GetPointerInfoByPointerId@Pointer@@YGJIPAPBUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     ?FindThreadPointerData@@YGPAUtagTHREADPOINTERDATA@@PAU_LIST_ENTRY@@G@Z @ 0x15AD87 (-FindThreadPointerData@@YGPAUtagTHREADPOINTERDATA@@PAU_LIST_ENTRY@@G@Z.c)
 */

unsigned int __userpurge GetThreadPointerData@<eax>(
        __int16 a1@<dx>,
        struct tagTHREADPOINTERDATA **a2@<ecx>,
        struct tagTHREADINPUTPOINTERLIST *a3,
        int *a4,
        unsigned int *a5,
        int *a6,
        HWND *a7)
{
  struct tagTHREADPOINTERDATA *ThreadPointerData; // esi

  ThreadPointerData = a2[3];
  if ( ThreadPointerData )
  {
    if ( *((_WORD *)ThreadPointerData + 4) != a1 )
      return 0;
  }
  else
  {
    ThreadPointerData = FindThreadPointerData(a2, a1);
  }
  if ( !ThreadPointerData || (*((_BYTE *)ThreadPointerData + 28) & 8) != 0 )
    return 0;
  if ( a3 )
    *(_DWORD *)a3 = *((_DWORD *)ThreadPointerData + 3);
  if ( a4 )
    *a4 = (int)(*((_DWORD *)ThreadPointerData + 7) << 31) >> 31;
  return *((_DWORD *)ThreadPointerData + 4);
}
