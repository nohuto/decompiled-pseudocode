/*
 * XREFs of ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C018D968
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0194A98 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00294B0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C018580C (-AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018C964 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0196650 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019A750 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C019C084 (WPP_RECORDER_SF_HL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateRoutedAwayMessages(
        PDEVICE_OBJECT a1,
        __int64 a2,
        CInputDest *a3,
        __int64 a4,
        int a5,
        int a6)
{
  unsigned int v6; // r15d
  unsigned __int64 v8; // rbx
  struct _KTHREAD **v9; // rbp
  PDEVICE_OBJECT v10; // rcx
  int v11; // r9d
  __int64 v12; // rcx
  const struct CPointerInputFrame *v13; // rsi
  __int64 v14; // rax
  _WORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  CInputDest *v23; // rax
  int v24; // [rsp+20h] [rbp-148h]
  _BYTE v25[113]; // [rsp+50h] [rbp-118h] BYREF
  int v26; // [rsp+C1h] [rbp-A7h]
  __int16 v27; // [rsp+C5h] [rbp-A3h]
  char v28; // [rsp+C7h] [rbp-A1h]
  _BYTE v29[120]; // [rsp+C8h] [rbp-A0h] BYREF

  v6 = a4;
  v8 = a2;
  v9 = (struct _KTHREAD **)a1;
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
        224,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
  }
  if ( v9[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( v8 )
  {
    v13 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)v9, *(_DWORD *)(v8 + 28));
    if ( v13 )
    {
      v14 = *(unsigned int *)(v8 + 32);
      if ( (unsigned int)v14 >= *((_DWORD *)v13 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, a2, a3, a4);
        v14 = *(unsigned int *)(v8 + 32);
      }
      v15 = (_WORD *)(*((_QWORD *)v13 + 17) + 480 * v14);
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v15) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18, v19);
      if ( v15[86] != *(_WORD *)(v8 + 16) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18, v19);
      v26 = 0;
      v27 = 0;
      v28 = 0;
      memset(v25, 0, sizeof(v25));
      if ( (unsigned int)CTouchProcessor::GenerateMessage(
                           (CTouchProcessor *)v9,
                           (__int64)v15,
                           v8,
                           v13,
                           0x252u,
                           v6,
                           a5,
                           a6,
                           (CInputDest *)v25) )
      {
        v23 = CInputDest::CInputDest((CInputDest *)v29, (const struct CInputDest *)(v15 + 176));
        CTouchProcessor::AddRoutedAwayTarget((CTouchProcessor *)v9, v15[86], v23);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_HL(v21, v20, v22, 229, v24, *(_WORD *)(v8 + 16), v15[80]);
      }
      CTouchProcessor::UnreferenceFrame((CTouchProcessor *)v9, v13);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v11 = 230;
          goto LABEL_29;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        7,
        227,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v11 = 228;
          goto LABEL_29;
        }
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      7,
      225,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 226;
LABEL_29:
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_(v10->DeviceExtension, a2, 7, v11, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      }
    }
  }
  CInputDest::SetEmpty(a3, a2, (__int64)a3, a4);
}
