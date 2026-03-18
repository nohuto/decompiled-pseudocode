/*
 * XREFs of ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C0192394
 * Callers:
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C0192070 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C0192250 (-DelegateCapture@CTouchProcessor@@QEAA-AUtagINPUTDEST@@GKH@Z.c)
 * Callees:
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C019F4BC (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCaptureInt(__int64 a1, _OWORD *a2, __int64 a3, int a4)
{
  __int64 v8; // rcx
  int v9; // edx
  unsigned __int64 v10; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0

  memset(a2, 0, 0x70uLL);
  if ( *(struct _KTHREAD **)(a1 + 72) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  v9 = *(_DWORD *)(a3 + 304);
  if ( (v9 & 4) != 0 || (v9 & 8) != 0 )
  {
    if ( a4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  }
  else
  {
    v10 = (-(__int64)(*(_DWORD *)(a3 + 40) != 0) & 0xFFFFFFFFFFFFFF78uLL) + 176;
    v11 = *(_OWORD *)(v10 + a3 + 16);
    *a2 = *(_OWORD *)(v10 + a3);
    v12 = *(_OWORD *)(v10 + a3 + 32);
    a2[1] = v11;
    v13 = *(_OWORD *)(v10 + a3 + 48);
    a2[2] = v12;
    v14 = *(_OWORD *)(v10 + a3 + 64);
    a2[3] = v13;
    v15 = *(_OWORD *)(v10 + a3 + 80);
    a2[4] = v14;
    v16 = *(_OWORD *)(v10 + a3 + 96);
    a2[5] = v15;
    a2[6] = v16;
    if ( a4 )
      CTouchProcessor::SetDelegateActionInt(v10, a3, 4LL);
    else
      *(_DWORD *)(a3 + 304) = v9 | 4;
  }
  return a2;
}
