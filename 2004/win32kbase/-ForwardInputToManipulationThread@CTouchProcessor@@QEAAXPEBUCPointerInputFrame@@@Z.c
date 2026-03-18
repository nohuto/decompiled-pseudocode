/*
 * XREFs of ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C018E100
 * Callers:
 *     ?ForwardPointerInputFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C018E1E0 (-ForwardPointerInputFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018F2D8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x1C01A6268 (-RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C006A794 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C0188860 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C0188B20 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C018BBBC (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1C019940C (-SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ForwardInputToManipulationThread(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rdx
  CTouchProcessor *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // r14
  __int64 v15; // rdx
  CTouchProcessor *v16; // rcx
  unsigned int v17; // ebp
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx

  v5 = CTouchProcessor::CountMTNodesReadyForRouting(this, a2);
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v6, v7);
  v8 = 240LL * (v5 - 1);
  if ( v8 > 0xFFFFFFFF || (v9 = v8 + 304, (unsigned int)(v8 + 304) < 0x130) )
  {
    v9 = 0;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFFFFFLL, 304LL, v6, v7);
  }
  v14 = (char *)Win32AllocPoolZInit(v9, 1835624789LL);
  if ( !v14 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
  *(_DWORD *)v14 = 0;
  v17 = CTouchProcessor::CalcManipulationInputInfoSize(v11, v5, v12, v13);
  if ( v9 <= v17 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v18, v19);
  CTouchProcessor::BuildManipulationInputInfo(v16, (struct tagMANIPULATION_INPUT_INFO *)(v14 + 8), v17, a2);
  InputTraceLogging::Pointer::SendFrameToUserMode(a2, v5, (const struct tagMANIPULATION_INPUT_INFO *)(v14 + 8));
  InputExtensibilityCallout::CoreMsgSendMessage(v20, 8);
  Win32FreePool((__int64)v14);
}
