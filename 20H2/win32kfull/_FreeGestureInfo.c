/*
 * XREFs of _FreeGestureInfo @ 0x1C0227790
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     xxxInterSendMsgEx @ 0x1C0054500 (xxxInterSendMsgEx.c)
 *     fnHkINLPMSG @ 0x1C0057310 (fnHkINLPMSG.c)
 *     UnlinkSendListSms @ 0x1C00D705C (UnlinkSendListSms.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C0118CF0 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 *     NtUserGetGestureExtArgs @ 0x1C01F95E0 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01F9740 (NtUserGetGestureInfo.c)
 *     NtUserInjectGesture @ 0x1C01FD6D0 (NtUserInjectGesture.c)
 *     SendGestureMessage @ 0x1C022743C (SendGestureMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall FreeGestureInfo(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  v1 = HMValidateHandleNoSecure(a1, 21);
  v2 = v1;
  if ( !v1 || *(_BYTE *)(_HMPheFromObject(v1) + 24) != 21 )
    return 0LL;
  HMDestroyObject(v2);
  return 1LL;
}
