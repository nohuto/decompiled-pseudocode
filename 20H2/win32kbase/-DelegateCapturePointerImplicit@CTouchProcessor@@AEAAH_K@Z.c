/*
 * XREFs of ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C018A260
 * Callers:
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C018A5F0 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C0189E48 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ApiSetEditionDelegateCapturePointers @ 0x1C01C502C (ApiSetEditionDelegateCapturePointers.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCapturePointerImplicit(struct _KTHREAD **this, __int64 a2)
{
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // di
  _OWORD v15[7]; // [rsp+40h] [rbp-198h] BYREF
  _DWORD v16[32]; // [rsp+B0h] [rbp-128h] BYREF
  _BYTE v17[128]; // [rsp+130h] [rbp-A8h] BYREF

  v4 = 0;
  memset(v16, 0, sizeof(v16));
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7, v8);
  CTouchProcessor::DelegateCapture((__int64)this, v15, a2, v8, (__int64)v16);
  if ( !LOWORD(v16[0])
    || !v16[1]
    || (v4 = 1, v13 = 0, !*(_DWORD *)CInputDest::CInputDest((CInputDest *)v17, (const struct tagINPUTDEST *)&v16[2])) )
  {
    v13 = 1;
  }
  if ( (v4 & 1) != 0 )
    CInputDest::SetEmpty((CInputDest *)v17, v9, v11, v12);
  if ( v13 )
    return 0LL;
  else
    return ApiSetEditionDelegateCapturePointers(v10, v16);
}
