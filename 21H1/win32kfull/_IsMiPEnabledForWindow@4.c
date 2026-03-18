/*
 * XREFs of _IsMiPEnabledForWindow@4 @ 0x14E372
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 *     ?MiPIdleTimerFunc@@YGXPAUtagWND@@IIJ@Z @ 0x14D4A0 (-MiPIdleTimerFunc@@YGXPAUtagWND@@IIJ@Z.c)
 *     _PostMousePointerLeaveAndCleanup@8 @ 0x14E54F (_PostMousePointerLeaveAndCleanup@8.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsMiPEnabledForWindow(_DWORD *this)
{
  int v1; // eax
  int v2; // esi
  BOOL result; // eax
  int v4; // ecx

  v1 = this[2];
  v2 = *(_DWORD *)(v1 + 688);
  result = (*(_BYTE *)(*(_DWORD *)(v1 + 232) + 464) & 4) != 0 || (v2 & 0x2000000) != 0;
  if ( (v2 & 0x4000000) != 0 )
  {
    v4 = this[49];
    if ( (v4 & 0x20) != 0 )
      return ((unsigned __int8)v4 >> 4) & 1;
  }
  return result;
}
