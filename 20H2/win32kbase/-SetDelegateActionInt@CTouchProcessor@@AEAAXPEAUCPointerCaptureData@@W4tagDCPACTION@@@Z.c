/*
 * XREFs of ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C019729C
 * Callers:
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C018A174 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C018A5F0 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C0193310 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 *     ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C0193460 (-NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C019C15C (WPP_RECORDER_SF_L.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::SetDelegateActionInt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax

  v4 = a2;
  switch ( (_DWORD)a3 )
  {
    case 1:
      *(_DWORD *)(a2 + 304) |= 1u;
      return;
    case 2:
      *(_DWORD *)(a2 + 304) |= 2u;
      return;
    case 3:
      *(_DWORD *)(a2 + 304) |= 4u;
      return;
  }
  v5 = (unsigned int)(a3 - 4);
  if ( (_DWORD)a3 == 4 )
  {
    v11 = *(_DWORD *)(a2 + 304);
    if ( (v11 & 4) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3, a4);
      v11 = *(_DWORD *)(v4 + 304);
    }
    if ( (v11 & 0x20) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3, a4);
      v11 = *(_DWORD *)(v4 + 304);
    }
    if ( (v11 & 8) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3, a4);
      v11 = *(_DWORD *)(v4 + 304);
    }
    v8 = v11 | 8;
    goto LABEL_23;
  }
  v6 = (unsigned int)(a3 - 5);
  if ( (_DWORD)a3 == 5 )
  {
    v9 = *(unsigned int *)(a2 + 304);
    v10 = v9;
    if ( (v9 & 4) == 0 && (v9 & 8) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, a2, a3, a4);
      v10 = *(_DWORD *)(v4 + 304);
    }
    v8 = v10 | 0x10;
    goto LABEL_23;
  }
  if ( (_DWORD)a3 == 6 )
  {
    v7 = *(_DWORD *)(a2 + 304);
    if ( (v7 & 0x20) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, a3, a4);
      v7 = *(_DWORD *)(v4 + 304);
    }
    v8 = v7 | 0x20;
LABEL_23:
    *(_DWORD *)(v4 + 304) = v8;
    return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_L(v6, a2, 7, 298, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids, a3);
  }
}
