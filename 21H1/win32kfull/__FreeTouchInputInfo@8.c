/*
 * XREFs of __FreeTouchInputInfo@8 @ 0x149EED
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _UnlinkSendListSms@4 @ 0x439C4 (_UnlinkSendListSms@4.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _fnHkINLPMSG@28 @ 0x6B870 (_fnHkINLPMSG@28.c)
 *     ?CleanInputMessage@@YGXIPAUtagQMSG@@@Z @ 0xF0F02 (-CleanInputMessage@@YGXIPAUtagQMSG@@@Z.c)
 *     _ForwardTouchMessage@36 @ 0x149C25 (_ForwardTouchMessage@36.c)
 *     _NtUserGetTouchInputInfo@16 @ 0x16483D (_NtUserGetTouchInputInfo@16.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 */

int __stdcall _FreeTouchInputInfo(unsigned int a1, int a2)
{
  int v2; // eax
  int v3; // esi

  v2 = HMValidateHandleNoSecure(a1, 20);
  v3 = v2;
  if ( !v2 || *(_BYTE *)(_HMPheFromObject(v2) + 12) != 20 )
    return 0;
  HMDestroyObject(v3);
  return 1;
}
