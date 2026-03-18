/*
 * XREFs of ?IsPointerMessageTouchpad@@YGHPAUtagTHREADINFO@@KG@Z @ 0x15AE8D
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     <none>
 */

int __userpurge IsPointerMessageTouchpad@<eax>(
        unsigned int a1@<edx>,
        struct tagTHREADINFO *a2@<ecx>,
        struct tagTHREADINFO *a3,
        unsigned int a4,
        unsigned __int16 a5)
{
  return CTouchProcessor::IsPointerMessageTouchpad(_gpTouchProcessor, a2, a1, (unsigned __int16)a3);
}
