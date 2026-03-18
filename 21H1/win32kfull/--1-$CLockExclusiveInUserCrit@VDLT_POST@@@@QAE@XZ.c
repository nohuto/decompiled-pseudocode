/*
 * XREFs of ??1?$CLockExclusiveInUserCrit@VDLT_POST@@@@QAE@XZ @ 0x6D242
 * Callers:
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     <none>
 */

void CLockExclusiveInUserCrit<DLT_POST>::~CLockExclusiveInUserCrit<DLT_POST>()
{
  tagObjLock::UnLockExclusive();
  tagDomLock::UnLockShared();
}
