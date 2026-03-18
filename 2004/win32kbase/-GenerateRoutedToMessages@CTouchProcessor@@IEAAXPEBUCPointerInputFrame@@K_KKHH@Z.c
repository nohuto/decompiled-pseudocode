/*
 * XREFs of ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01902E0
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018F2D8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0049A20 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018EE84 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C01990CC (-RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C019E850 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateRoutedToMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        int a7)
{
  __int64 v8; // rbx
  const struct CPointerInputFrame *v9; // rdi
  CTouchProcessor *v10; // rsi
  __int64 v11; // rbx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  CInputDest *v15; // rax
  int v16; // [rsp+20h] [rbp-C8h]
  _BYTE v17[113]; // [rsp+50h] [rbp-98h] BYREF
  int v18; // [rsp+C1h] [rbp-27h]
  __int16 v19; // [rsp+C5h] [rbp-23h]
  char v20; // [rsp+C7h] [rbp-21h]

  v8 = (unsigned int)a3;
  v9 = a2;
  v10 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    this = (CTouchProcessor *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        7,
        222,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
  }
  v11 = *((_QWORD *)v9 + 17) + 480 * v8;
  if ( (*(_DWORD *)v11 & 0x40) != 0 )
  {
    if ( (*(_DWORD *)(v11 + 180) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
    v18 = 0;
    v19 = 0;
    v20 = 0;
    memset(v17, 0, sizeof(v17));
    if ( !(unsigned int)CTouchProcessor::GenerateMessage(v10, v11, a4, v9, 0x251u, a5, a6, a7, (CInputDest *)v17)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_LL(v13, v12, v14, 223, v16, *(_DWORD *)(v11 + 172), *(_WORD *)(v11 + 160));
    }
    v15 = CInputDest::CInputDest((CInputDest *)v17, (const struct CInputDest *)(v11 + 352));
    CTouchProcessor::RemoveRoutedAwayTarget(v10, *(unsigned __int16 *)(v11 + 172), v15);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        7,
        224,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
  }
}
