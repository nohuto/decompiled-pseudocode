/*
 * XREFs of ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C0190498
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0196FC8 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018EE84 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0198B80 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019CC50 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C019E584 (WPP_RECORDER_SF_HL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateWindowLeaveMessage(
        PDEVICE_OBJECT a1,
        unsigned __int64 a2,
        CInputDest *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
{
  unsigned int v7; // r15d
  unsigned __int64 v9; // rbx
  struct _KTHREAD **v10; // rbp
  int v11; // edx
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rcx
  const struct CPointerInputFrame *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  CPointerInfoNode *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  int v28; // [rsp+20h] [rbp-D8h]
  _BYTE v29[113]; // [rsp+50h] [rbp-A8h] BYREF
  int v30; // [rsp+C1h] [rbp-37h]
  __int16 v31; // [rsp+C5h] [rbp-33h]
  char v32; // [rsp+C7h] [rbp-31h]

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
        209,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
  }
  if ( v10[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( v9 )
  {
    v16 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)v10, *(_DWORD *)(v9 + 28));
    if ( v16 )
    {
      v19 = *(unsigned int *)(v9 + 32);
      if ( (unsigned int)v19 >= *((_DWORD *)v16 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v17, v18);
        v19 = *(unsigned int *)(v9 + 32);
      }
      v20 = (CPointerInfoNode *)(*((_QWORD *)v16 + 17) + 480 * v19);
      if ( !(unsigned int)CPointerInfoNode::IsValid(v20) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23, v24);
      if ( *((_WORD *)v20 + 86) != *(_WORD *)(v9 + 16) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23, v24);
      if ( !a5 )
      {
        v30 = 0;
        v31 = 0;
        v32 = 0;
        memset(v29, 0, sizeof(v29));
        if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                              (CTouchProcessor *)v10,
                              (__int64)v20,
                              v9,
                              v16,
                              0x24Au,
                              v7,
                              a6,
                              a7,
                              (CInputDest *)v29)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_HL(v26, v25, v27, 214, v28, *(_WORD *)(v9 + 16), *((_WORD *)v20 + 80));
        }
      }
      CTouchProcessor::UnreferenceFrame((CTouchProcessor *)v10, v16);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v13 = 215;
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
        212,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v13 = 213;
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
      210,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 211;
LABEL_29:
        LOBYTE(v11) = 5;
        WPP_RECORDER_SF_(v12->DeviceExtension, v11, 7, v13, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      }
    }
  }
  CInputDest::SetEmpty(a3);
}
