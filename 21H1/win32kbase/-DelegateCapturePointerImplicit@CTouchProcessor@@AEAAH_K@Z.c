/*
 * XREFs of ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C0192480
 * Callers:
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C0192810 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C0192070 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ApiSetEditionDelegateCapturePointers @ 0x1C01CD32C (ApiSetEditionDelegateCapturePointers.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCapturePointerImplicit(struct _KTHREAD **this, __int64 a2)
{
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rcx
  char v8; // di
  _OWORD v10[7]; // [rsp+40h] [rbp-198h] BYREF
  _DWORD v11[32]; // [rsp+B0h] [rbp-128h] BYREF
  _BYTE v12[128]; // [rsp+130h] [rbp-A8h] BYREF

  v4 = 0;
  memset(v11, 0, sizeof(v11));
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  CTouchProcessor::DelegateCapture((__int64)this, v10, a2, v6, (__int64)v11);
  if ( !LOWORD(v11[0])
    || !v11[1]
    || (v4 = 1, v8 = 0, !*(_DWORD *)CInputDest::CInputDest((CInputDest *)v12, (const struct tagINPUTDEST *)&v11[2])) )
  {
    v8 = 1;
  }
  if ( (v4 & 1) != 0 )
    CInputDest::SetEmpty((CInputDest *)v12);
  if ( v8 )
    return 0LL;
  else
    return ApiSetEditionDelegateCapturePointers(v7, v11);
}
