/*
 * XREFs of _FreeTouchInputInfo @ 0x1C01DC3E0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     xxxInterSendMsgEx @ 0x1C0054500 (xxxInterSendMsgEx.c)
 *     fnHkINLPMSG @ 0x1C0057310 (fnHkINLPMSG.c)
 *     UnlinkSendListSms @ 0x1C00D705C (UnlinkSendListSms.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C0118CF0 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 *     ForwardTouchMessage @ 0x1C01DBEFC (ForwardTouchMessage.c)
 *     NtUserGetTouchInputInfo @ 0x1C01FBDD0 (NtUserGetTouchInputInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
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
