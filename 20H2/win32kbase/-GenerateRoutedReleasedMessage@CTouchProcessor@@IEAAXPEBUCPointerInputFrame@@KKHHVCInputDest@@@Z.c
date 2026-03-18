/*
 * XREFs of ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C018DC38
 * Callers:
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0196168 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00294B0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018C964 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     WPP_RECORDER_SF_LL @ 0x1C019C350 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateRoutedReleasedMessage(
        PDEVICE_OBJECT a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        struct CInputDest *a7)
{
  unsigned int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // rsi
  CTouchProcessor *v10; // r14
  __int64 v11; // rbx
  _BOOL8 v12; // rdi
  CInputDest *v13; // rax
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+20h] [rbp-C8h]
  _BYTE v19[128]; // [rsp+50h] [rbp-98h] BYREF

  v7 = a4;
  v8 = (unsigned int)a3;
  v9 = a2;
  v10 = (CTouchProcessor *)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        7,
        231,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
  }
  v11 = *(_QWORD *)(v9 + 136) + 480 * v8;
  v12 = *(_DWORD *)(v11 + 168) != 5;
  if ( (*(_DWORD *)(v11 + 180) & 0x40000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v13 = CInputDest::CInputDest((CInputDest *)v19, a7);
  if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                        v10,
                        v11,
                        v12 - 1,
                        (const struct CPointerInputFrame *)v9,
                        0x253u,
                        v7,
                        a5,
                        a6,
                        v13) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_LL(v15, v14, v16, 232, v18, *(_DWORD *)(v11 + 172), *(_WORD *)(v11 + 160));
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      7,
      233,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
LABEL_12:
  CInputDest::SetEmpty(a7, v14, v16, v17);
}
