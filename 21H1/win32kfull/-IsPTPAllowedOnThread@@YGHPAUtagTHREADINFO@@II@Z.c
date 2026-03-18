/*
 * XREFs of ?IsPTPAllowedOnThread@@YGHPAUtagTHREADINFO@@II@Z @ 0x15AE16
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     _IsTouchpadPointerInputMessage@4 @ 0x14E408 (_IsTouchpadPointerInputMessage@4.c)
 *     ?FindThreadPointerData@@YGPAUtagTHREADPOINTERDATA@@PAU_LIST_ENTRY@@G@Z @ 0x15AD87 (-FindThreadPointerData@@YGPAUtagTHREADPOINTERDATA@@PAU_LIST_ENTRY@@G@Z.c)
 *     _GetPTPShellListener@0 @ 0x178B6F (_GetPTPShellListener@0.c)
 */

BOOL __userpurge IsPTPAllowedOnThread@<eax>(
        void *a1@<edx>,
        int a2@<ecx>,
        struct tagTHREADINFO *a3,
        unsigned int a4,
        unsigned int a5)
{
  int v6; // esi
  int PTPShellListener; // eax
  int v8; // ecx

  v6 = *(_WORD *)(a2 + 690) & 1;
  if ( !v6
    && CTouchProcessor::IsPointerMessageTouchpad(_gpTouchProcessor, (struct tagTHREADINFO *)a2, 0, (unsigned __int16)a3)
    && IsTouchpadPointerInputMessage(a1) )
  {
    if ( !FindThreadPointerData((struct tagTHREADPOINTERDATA **)(a2 + 612), (__int16)a3) )
      return 0;
    PTPShellListener = GetPTPShellListener();
    if ( PTPShellListener )
      PTPShellListener = *(_DWORD *)GetPTPShellListener();
    return *(_DWORD *)(v8 + 24) == PTPShellListener;
  }
  return v6;
}
