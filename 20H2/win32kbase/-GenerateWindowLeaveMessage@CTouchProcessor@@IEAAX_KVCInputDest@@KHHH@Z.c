/*
 * XREFs of ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C018DF78
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0194A98 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018C964 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0196650 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019A750 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C019C084 (WPP_RECORDER_SF_HL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateWindowLeaveMessage(
        PDEVICE_OBJECT a1,
        __int64 a2,
        CInputDest *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
{
  unsigned int v7; // r15d
  unsigned __int64 v9; // rbx
  struct _KTHREAD **v10; // rbp
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  __int64 v13; // rcx
  const struct CPointerInputFrame *v14; // rsi
  __int64 v15; // rax
  CPointerInfoNode *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // [rsp+20h] [rbp-D8h]
  _BYTE v25[113]; // [rsp+50h] [rbp-A8h] BYREF
  int v26; // [rsp+C1h] [rbp-37h]
  __int16 v27; // [rsp+C5h] [rbp-33h]
  char v28; // [rsp+C7h] [rbp-31h]

  v7 = a4;
  v9 = a2;
  v10 = (struct _KTHREAD **)a1;
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
        208,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
  }
  if ( v10[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( v9 )
  {
    v14 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)v10, *(_DWORD *)(v9 + 28));
    if ( v14 )
    {
      v15 = *(unsigned int *)(v9 + 32);
      if ( (unsigned int)v15 >= *((_DWORD *)v14 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, a2, a3, a4);
        v15 = *(unsigned int *)(v9 + 32);
      }
      v16 = (CPointerInfoNode *)(*((_QWORD *)v14 + 17) + 480 * v15);
      if ( !(unsigned int)CPointerInfoNode::IsValid(v16) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19, v20);
      if ( *((_WORD *)v16 + 86) != *(_WORD *)(v9 + 16) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19, v20);
      if ( !a5 )
      {
        v26 = 0;
        v27 = 0;
        v28 = 0;
        memset(v25, 0, sizeof(v25));
        if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                              (CTouchProcessor *)v10,
                              (__int64)v16,
                              v9,
                              v14,
                              0x24Au,
                              v7,
                              a6,
                              a7,
                              (CInputDest *)v25)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_HL(v22, v21, v23, 213, v24, *(_WORD *)(v9 + 16), *((_WORD *)v16 + 80));
        }
      }
      CTouchProcessor::UnreferenceFrame((CTouchProcessor *)v10, v14);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v12 = 214;
          goto LABEL_29;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        7,
        211,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v12 = 212;
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
      209,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 210;
LABEL_29:
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_(v11->DeviceExtension, a2, 7, v12, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      }
    }
  }
  CInputDest::SetEmpty(a3, a2, (__int64)a3, a4);
}
