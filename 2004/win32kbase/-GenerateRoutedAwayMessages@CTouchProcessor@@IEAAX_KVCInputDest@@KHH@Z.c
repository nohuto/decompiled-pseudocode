/*
 * XREFs of ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C018FE88
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0196FC8 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0049A20 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C0187D4C (-AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018EE84 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0198B80 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019CC50 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C019E584 (WPP_RECORDER_SF_HL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateRoutedAwayMessages(
        PDEVICE_OBJECT a1,
        unsigned __int64 a2,
        CInputDest *a3,
        __int64 a4,
        int a5,
        int a6)
{
  unsigned int v6; // r15d
  unsigned __int64 v8; // rbx
  struct _KTHREAD **v9; // rbp
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rcx
  const struct CPointerInputFrame *v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _WORD *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  CInputDest *v27; // rax
  int v28; // [rsp+20h] [rbp-148h]
  _BYTE v29[113]; // [rsp+50h] [rbp-118h] BYREF
  int v30; // [rsp+C1h] [rbp-A7h]
  __int16 v31; // [rsp+C5h] [rbp-A3h]
  char v32; // [rsp+C7h] [rbp-A1h]
  _BYTE v33[120]; // [rsp+C8h] [rbp-A0h] BYREF

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
        225,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
  }
  if ( v9[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( v8 )
  {
    v15 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)v9, *(_DWORD *)(v8 + 28));
    if ( v15 )
    {
      v18 = *(unsigned int *)(v8 + 32);
      if ( (unsigned int)v18 >= *((_DWORD *)v15 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v16, v17);
        v18 = *(unsigned int *)(v8 + 32);
      }
      v19 = (_WORD *)(*((_QWORD *)v15 + 17) + 480 * v18);
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v19) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22, v23);
      if ( v19[86] != *(_WORD *)(v8 + 16) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22, v23);
      v30 = 0;
      v31 = 0;
      v32 = 0;
      memset(v29, 0, sizeof(v29));
      if ( (unsigned int)CTouchProcessor::GenerateMessage(
                           (CTouchProcessor *)v9,
                           (__int64)v19,
                           v8,
                           v15,
                           0x252u,
                           v6,
                           a5,
                           a6,
                           (CInputDest *)v29) )
      {
        v27 = CInputDest::CInputDest((CInputDest *)v33, (const struct CInputDest *)(v19 + 176));
        CTouchProcessor::AddRoutedAwayTarget((CTouchProcessor *)v9, v19[86], v27);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_HL(v25, v24, v26, 230, v28, *(_WORD *)(v8 + 16), v19[80]);
      }
      CTouchProcessor::UnreferenceFrame((CTouchProcessor *)v9, v15);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v12 = 231;
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
        228,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v12 = 229;
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
      226,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 227;
LABEL_29:
        LOBYTE(v10) = 5;
        WPP_RECORDER_SF_(v11->DeviceExtension, v10, 7, v12, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      }
    }
  }
  CInputDest::SetEmpty(a3);
}
