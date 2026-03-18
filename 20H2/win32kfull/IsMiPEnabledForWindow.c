/*
 * XREFs of IsMiPEnabledForWindow @ 0x1C01E1718
 * Callers:
 *     xxxCapture @ 0x1C0039468 (xxxCapture.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C004F5A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E0410 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01E1930 (PostMousePointerLeaveAndCleanup.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMiPEnabledForWindow(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r8d
  _BOOL8 result; // rax
  int v4; // ecx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(v1 + 1232);
  result = (*(_BYTE *)(*(_QWORD *)(v1 + 424) + 820LL) & 4) != 0 || (v2 & 0x2000000) != 0;
  if ( (v2 & 0x4000000) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 324);
    if ( (v4 & 0x20) != 0 )
      return ((unsigned __int8)v4 >> 4) & 1;
  }
  return result;
}
