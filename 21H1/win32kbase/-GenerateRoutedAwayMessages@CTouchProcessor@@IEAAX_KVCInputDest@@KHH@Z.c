/*
 * XREFs of ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C0195B88
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C019CCB8 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C005D3F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C018DA4C (-AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0194B84 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019E870 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01A29B0 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C01A42E4 (WPP_RECORDER_SF_HL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateRoutedAwayMessages(
        PDEVICE_OBJECT a1,
        unsigned __int64 a2,
        CInputDest *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  unsigned __int64 v8; // rbx
  struct _KTHREAD **v9; // rbp
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  int v13; // edx
  __int64 v14; // rcx
  const struct CPointerInputFrame *v15; // rsi
  __int64 v16; // rax
  _WORD *v17; // rdi
  __int64 v18; // rcx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  CInputDest *v22; // rax
  int v23; // [rsp+20h] [rbp-148h]
  _BYTE v24[113]; // [rsp+50h] [rbp-118h] BYREF
  int v25; // [rsp+C1h] [rbp-A7h]
  __int16 v26; // [rsp+C5h] [rbp-A3h]
  char v27; // [rsp+C7h] [rbp-A1h]
  _BYTE v28[120]; // [rsp+C8h] [rbp-A0h] BYREF

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
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
  }
  if ( v9[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( v8 )
  {
    v15 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)v9, *(_DWORD *)(v8 + 28));
    if ( v15 )
    {
      v16 = *(unsigned int *)(v8 + 32);
      if ( (unsigned int)v16 >= *((_DWORD *)v15 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
        v16 = *(unsigned int *)(v8 + 32);
      }
      v17 = (_WORD *)(*((_QWORD *)v15 + 17) + 480 * v16);
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v17) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
      if ( v17[86] != *(_WORD *)(v8 + 16) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
      v25 = 0;
      v26 = 0;
      v27 = 0;
      memset(v24, 0, sizeof(v24));
      if ( (unsigned int)CTouchProcessor::GenerateMessage(
                           (CTouchProcessor *)v9,
                           (__int64)v17,
                           v8,
                           v15,
                           0x252u,
                           a4,
                           a5,
                           a6,
                           (CInputDest *)v24) )
      {
        v22 = CInputDest::CInputDest((CInputDest *)v28, (const struct CInputDest *)(v17 + 176));
        CTouchProcessor::AddRoutedAwayTarget((CTouchProcessor *)v9, v17[86], v22);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_HL(v20, v19, v21, 229, v23, *(_WORD *)(v8 + 16), v17[80]);
      }
      CTouchProcessor::UnreferenceFrame((CTouchProcessor *)v9, v15);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v12 = 230;
          goto LABEL_29;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v13,
        7,
        227,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v12 = 228;
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
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 226;
LABEL_29:
        LOBYTE(v10) = 5;
        WPP_RECORDER_SF_(v11->DeviceExtension, v10, 7, v12, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      }
    }
  }
  CInputDest::SetEmpty(a3);
}
