/*
 * XREFs of ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C0196198
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C019CCB8 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0194B84 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019E870 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01A29B0 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C01A42E4 (WPP_RECORDER_SF_HL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateWindowLeaveMessage(
        PDEVICE_OBJECT a1,
        unsigned __int64 a2,
        CInputDest *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7)
{
  unsigned __int64 v9; // rbx
  struct _KTHREAD **v10; // rbp
  int v11; // edx
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  int v14; // edx
  __int64 v15; // rcx
  const struct CPointerInputFrame *v16; // rsi
  __int64 v17; // rax
  CPointerInfoNode *v18; // rdi
  __int64 v19; // rcx
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // [rsp+20h] [rbp-D8h]
  _BYTE v24[113]; // [rsp+50h] [rbp-A8h] BYREF
  int v25; // [rsp+C1h] [rbp-37h]
  __int16 v26; // [rsp+C5h] [rbp-33h]
  char v27; // [rsp+C7h] [rbp-31h]

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
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
  }
  if ( v10[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( v9 )
  {
    v16 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)v10, *(_DWORD *)(v9 + 28));
    if ( v16 )
    {
      v17 = *(unsigned int *)(v9 + 32);
      if ( (unsigned int)v17 >= *((_DWORD *)v16 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
        v17 = *(unsigned int *)(v9 + 32);
      }
      v18 = (CPointerInfoNode *)(*((_QWORD *)v16 + 17) + 480 * v17);
      if ( !(unsigned int)CPointerInfoNode::IsValid(v18) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
      if ( *((_WORD *)v18 + 86) != *(_WORD *)(v9 + 16) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
      if ( !a5 )
      {
        v25 = 0;
        v26 = 0;
        v27 = 0;
        memset(v24, 0, sizeof(v24));
        if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                              (CTouchProcessor *)v10,
                              (__int64)v18,
                              v9,
                              v16,
                              0x24Au,
                              a4,
                              a6,
                              a7,
                              (CInputDest *)v24)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_HL(v21, v20, v22, 213, v23, *(_WORD *)(v9 + 16), *((_WORD *)v18 + 80));
        }
      }
      CTouchProcessor::UnreferenceFrame((CTouchProcessor *)v10, v16);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v13 = 214;
          goto LABEL_29;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v14,
        7,
        211,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v13 = 212;
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
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 210;
LABEL_29:
        LOBYTE(v11) = 5;
        WPP_RECORDER_SF_(v12->DeviceExtension, v11, 7, v13, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      }
    }
  }
  CInputDest::SetEmpty(a3);
}
