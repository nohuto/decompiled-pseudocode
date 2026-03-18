/*
 * XREFs of ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C0197E28
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01973B4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0197FF8 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0198D34 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00553BC (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C0196B1C (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerCapture(
        PDEVICE_OBJECT a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v6; // esi
  __int64 v8; // rbx
  struct _KTHREAD **v9; // rdi
  __int64 v10; // rcx
  int v11; // edx
  __int64 v13; // rbx
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx

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
        91,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
  }
  if ( v9[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( !*a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( (unsigned int)(v6 - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( v9[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v10 = *(_QWORD *)(v8 + 40);
  if ( v10 )
  {
    v13 = v10 + (a6 != 0 ? 168LL : 32LL);
    if ( !CInputDest::operator==((unsigned int *)(v13 + 8), (__int64)a3, (__int64)a3, a4) )
    {
      if ( *(_DWORD *)(v13 + 100) )
      {
        CTouchProcessor::ReleasePointerCaptureInt(v9, (struct CPointerCaptureInfo *)v13, v15, v16);
        if ( *(_DWORD *)(v13 + 100) )
        {
          if ( v6 != 2 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v15, v16);
        }
      }
      CInputDest::operator=(v13 + 8, (__int64)a3, v15, v16);
    }
    *(_DWORD *)(v13 + 128) = a5;
    *(_DWORD *)v13 = v6;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v14) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        7,
        94,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
    return 1LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        7,
        92,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v11) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v11,
            7,
            93,
            (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
        }
      }
    }
    return 0LL;
  }
}
