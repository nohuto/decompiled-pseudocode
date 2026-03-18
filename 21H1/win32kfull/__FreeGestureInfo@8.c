/*
 * XREFs of __FreeGestureInfo@8 @ 0x188C90
 * Callers:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _UnlinkSendListSms@4 @ 0x439C4 (_UnlinkSendListSms@4.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _fnHkINLPMSG@28 @ 0x6B870 (_fnHkINLPMSG@28.c)
 *     ?CleanInputMessage@@YGXIPAUtagQMSG@@@Z @ 0xF0F02 (-CleanInputMessage@@YGXIPAUtagQMSG@@@Z.c)
 *     _NtUserGetGestureExtArgs@12 @ 0x162C2C (_NtUserGetGestureExtArgs@12.c)
 *     _NtUserGetGestureInfo@8 @ 0x162D25 (_NtUserGetGestureInfo@8.c)
 *     _NtUserInjectGesture@20 @ 0x16561B (_NtUserInjectGesture@20.c)
 *     _SendGestureMessage@28 @ 0x188A6B (_SendGestureMessage@28.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 */

int __stdcall _FreeGestureInfo(unsigned int a1, int a2)
{
  int v2; // eax
  int v3; // esi

  v2 = HMValidateHandleNoSecure(a1, 21);
  v3 = v2;
  if ( !v2 || *(_BYTE *)(_HMPheFromObject(v2) + 12) != 21 )
    return 0;
  HMDestroyObject(v3);
  return 1;
}
