/*
 * XREFs of ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C01A1B80
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019F5D4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C005D1E8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C005D3F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C019A980 (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C019A9D0 (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019AC44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetupNewQFrame(
        CTouchProcessor *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        struct CInputDest *a5,
        unsigned int a6)
{
  __int64 v7; // rbp
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v10; // esi
  __int64 v11; // rbx
  CTouchProcessor *v12; // rcx
  int v13; // edx
  PDEVICE_OBJECT v14; // rcx
  int v15; // r9d
  CInputDest *v17; // rax
  _BYTE v18[128]; // [rsp+40h] [rbp-98h] BYREF

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = (CTouchProcessor *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        7,
        88,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(a1, (const struct CPointerInputFrame *)v7) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( !*(_DWORD *)a5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  v9 = *(_DWORD *)(v7 + 48);
  v10 = 0;
  v11 = *(_QWORD *)(v7 + 144);
  if ( v9 )
  {
    while ( *(_DWORD *)v11 != -1 )
    {
      v11 += 160LL;
      if ( ++v10 >= v9 )
        goto LABEL_11;
    }
    v17 = CInputDest::CInputDest((CInputDest *)v18, a5);
    CTouchProcessor::InitializeQFrame(a6, v11, v10, 0LL, v17, a6);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v15 = 89;
        goto LABEL_16;
      }
    }
  }
  else
  {
LABEL_11:
    v11 = *a3;
    *a3 = 0LL;
    *(_QWORD *)(v11 + 8) = 0LL;
    CInputDest::operator=(v11 + 16, (__int64)a5);
    if ( *(_DWORD *)(v11 + 144) != 22 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    CTouchProcessor::InitializeQFrameCoalesceState(v12, (struct CPointerQFrame *)v11, a6);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v15 = 90;
LABEL_16:
        LOBYTE(v13) = 5;
        WPP_RECORDER_SF_(v14->DeviceExtension, v13, 7, v15, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      }
    }
  }
  CInputDest::SetEmpty(a5);
  return v11;
}
