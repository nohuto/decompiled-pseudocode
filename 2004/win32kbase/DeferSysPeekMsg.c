/*
 * XREFs of DeferSysPeekMsg @ 0x1C0001160
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qiqdd @ 0x1C00015A0 (WPP_RECORDER_SF_qiqdd.c)
 *     ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0001684 (-UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C0001970 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 */

void __fastcall DeferSysPeekMsg(__int64 a1, int a2)
{
  __int64 v3; // rbx
  int v4; // r8d
  int v5; // eax
  unsigned int ThreadId; // eax
  KeyboardInputTelemetry *v7; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 80LL);
  if ( a2 != 1 )
  {
    if ( a2 != 3 )
      goto LABEL_3;
    if ( (unsigned int)(*(_DWORD *)(v3 + 24) - 256) > 9 )
      goto LABEL_15;
  }
  *(_DWORD *)(a1 + 1224) |= 0x20000000u;
LABEL_3:
  switch ( a2 )
  {
    case 1:
      *(_DWORD *)(v3 + 100) |= 0x10000u;
      break;
    case 3:
LABEL_15:
      *(_DWORD *)(v3 + 100) |= 0x80000u;
      break;
    case 2:
      *(_DWORD *)(v3 + 100) |= 0x20000u;
      break;
  }
  InputTraceLogging::Delivery::UpdateISODState((const struct tagQMSG *)v3);
  *(_QWORD *)(v3 + 104) = a1;
  --*(_DWORD *)(*(_QWORD *)(a1 + 424) + 40LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qiqdd(*(_QWORD *)(a1 + 424), *(_QWORD *)(a1 + 424) + 24, v4, 10);
  if ( (*(_DWORD *)(a1 + 1224) & 0x1000000) == 0 )
  {
    v5 = *(_DWORD *)(v3 + 100);
    if ( (v5 & 0x10000) != 0 || (v5 & 0x20000) != 0 )
    {
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)a1);
      KeyboardInputTelemetry::BeginKeyboardEventProcessingByInputService(v7, ThreadId);
    }
  }
}
