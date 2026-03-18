/*
 * XREFs of ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C019DB1C
 * Callers:
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0193020 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C019D8A4 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0193188 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C019C474 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 */

void __fastcall CTouchProcessor::ProcessInputPostDelayZonePalmRejection(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        struct RIMCOMPLETEFRAME *a3)
{
  struct CPointerInputFrame *v3; // rbx
  __int64 v5; // rax
  struct RIMCOMPLETEFRAME *v6; // r9
  unsigned int v7; // r8d
  const struct CPointerInputFrame *v8; // rax
  const struct RIMCOMPLETEFRAME *v9; // rdx
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      40,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  v5 = HMValidateHandleNoSecure(*((_QWORD *)v3 + 8), 19);
  if ( v5 )
    v7 = *(_DWORD *)(v5 + 1324);
  else
    v7 = 0;
  v8 = CTouchProcessor::PopulateReferencedInputFrame(this, v3, v7, v6);
  if ( v8 )
  {
    CTouchProcessor::DoContactVisualizationAndGenerateMessages(
      (CTouchProcessor *)this,
      v9,
      v8,
      *((_QWORD *)v8 + 8),
      -__CFSHR__(*(_DWORD *)(*((_QWORD *)v8 + 19) + 312LL), 4),
      -__CFSHR__(*(_DWORD *)(*((_QWORD *)v8 + 19) + 312LL), 5),
      0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 43;
        goto LABEL_15;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)v9,
      7,
      41,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 42;
LABEL_15:
        LOBYTE(v10) = 5;
        WPP_RECORDER_SF_(v11->DeviceExtension, v10, 7, v12, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      }
    }
  }
}
