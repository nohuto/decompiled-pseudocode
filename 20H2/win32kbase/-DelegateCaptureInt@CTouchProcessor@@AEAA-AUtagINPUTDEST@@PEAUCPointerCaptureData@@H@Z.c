/*
 * XREFs of ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C018A174
 * Callers:
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C0189E48 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C018A030 (-DelegateCapture@CTouchProcessor@@QEAA-AUtagINPUTDEST@@GKH@Z.c)
 * Callees:
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C019729C (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCaptureInt(__int64 a1, _OWORD *a2, __int64 a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0

  memset(a2, 0, 0x70uLL);
  if ( *(struct _KTHREAD **)(a1 + 72) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  v12 = *(unsigned int *)(a3 + 304);
  if ( (v12 & 4) != 0 || (v12 & 8) != 0 )
  {
    if ( a4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v12, v10, v11);
  }
  else
  {
    v13 = (-(__int64)(*(_DWORD *)(a3 + 40) != 0) & 0xFFFFFFFFFFFFFF78uLL) + 176;
    v14 = *(_OWORD *)(v13 + a3 + 16);
    *a2 = *(_OWORD *)(v13 + a3);
    v15 = *(_OWORD *)(v13 + a3 + 32);
    a2[1] = v14;
    v16 = *(_OWORD *)(v13 + a3 + 48);
    a2[2] = v15;
    v17 = *(_OWORD *)(v13 + a3 + 64);
    a2[3] = v16;
    v18 = *(_OWORD *)(v13 + a3 + 80);
    a2[4] = v17;
    v19 = *(_OWORD *)(v13 + a3 + 96);
    a2[5] = v18;
    a2[6] = v19;
    if ( a4 )
      CTouchProcessor::SetDelegateActionInt(v13, a3, 4LL);
    else
      *(_DWORD *)(a3 + 304) = v12 | 4;
  }
  return a2;
}
