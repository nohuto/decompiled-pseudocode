/*
 * XREFs of ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C019BE20
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01998E4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0047438 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0049A20 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C0194C80 (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C0194CD0 (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0194F44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // rdx
  CTouchProcessor *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // edx
  PDEVICE_OBJECT v20; // rcx
  int v21; // r9d
  CInputDest *v23; // rax
  _BYTE v24[128]; // [rsp+40h] [rbp-98h] BYREF

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
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(a1, (const struct CPointerInputFrame *)v7, (__int64)a3, a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  if ( !*(_DWORD *)a5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  v12 = *(_DWORD *)(v7 + 48);
  v13 = 0;
  v14 = *(_QWORD *)(v7 + 144);
  if ( v12 )
  {
    while ( *(_DWORD *)v14 != -1 )
    {
      v14 += 160LL;
      if ( ++v13 >= v12 )
        goto LABEL_11;
    }
    v23 = CInputDest::CInputDest((CInputDest *)v24, a5);
    CTouchProcessor::InitializeQFrame(a6, v14, v13, 0LL, v23, a6);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v21 = 89;
        goto LABEL_16;
      }
    }
  }
  else
  {
LABEL_11:
    v14 = *a3;
    *a3 = 0LL;
    *(_QWORD *)(v14 + 8) = 0LL;
    CInputDest::operator=(v14 + 16, (__int64)a5);
    if ( *(_DWORD *)(v14 + 144) != 22 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17, v18);
    CTouchProcessor::InitializeQFrameCoalesceState(v16, (struct CPointerQFrame *)v14, a6);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v21 = 90;
LABEL_16:
        LOBYTE(v19) = 5;
        WPP_RECORDER_SF_(v20->DeviceExtension, v19, 7, v21, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      }
    }
  }
  CInputDest::SetEmpty(a5);
  return v14;
}
