/*
 * XREFs of _FreeTouchInputInfo @ 0x1C01DD0A0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     xxxInterSendMsgEx @ 0x1C0098820 (xxxInterSendMsgEx.c)
 *     fnHkINLPMSG @ 0x1C009B630 (fnHkINLPMSG.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C00BE760 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 *     UnlinkSendListSms @ 0x1C00BEB58 (UnlinkSendListSms.c)
 *     ForwardTouchMessage @ 0x1C01DCBBC (ForwardTouchMessage.c)
 *     NtUserGetTouchInputInfo @ 0x1C01FCC40 (NtUserGetTouchInputInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall FreeTouchInputInfo(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  v1 = HMValidateHandleNoSecure(a1, 20);
  v2 = v1;
  if ( !v1 || *(_BYTE *)(_HMPheFromObject(v1) + 24) != 20 )
    return 0LL;
  HMDestroyObject(v2);
  return 1LL;
}
