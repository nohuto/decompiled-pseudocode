/*
 * XREFs of _IsHiddenByInputService@4 @ 0xAAB8E
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _MergeDeferredMessagesOfThreadOnQueue@4 @ 0xAAAC0 (_MergeDeferredMessagesOfThreadOnQueue@4.c)
 *     _DeferMessagesOnQueue@8 @ 0xC2828 (_DeferMessagesOnQueue@8.c)
 *     ?RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z @ 0xC7FE4 (-RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsHiddenByInputService(_DWORD *this)
{
  return (((unsigned int)&loc_AFFFF + 1) & this[16]) != 0;
}
