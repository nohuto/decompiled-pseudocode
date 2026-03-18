/*
 * XREFs of ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0193E00
 * Callers:
 *     ?ForwardPointerInputFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0193EE0 (-ForwardPointerInputFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0194FD8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x1C01ABFC8 (-RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0061864 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C018E560 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C018E820 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C01918BC (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1C019F0FC (-SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ForwardInputToManipulationThread(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // esi
  unsigned __int64 v5; // rax
  unsigned int v6; // edi
  CTouchProcessor *v7; // rcx
  char *v8; // r14
  CTouchProcessor *v9; // rcx
  unsigned int v10; // ebp
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8

  v4 = CTouchProcessor::CountMTNodesReadyForRouting(this, a2);
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
  v5 = 240LL * (v4 - 1);
  if ( v5 > 0xFFFFFFFF || (v6 = v5 + 304, (unsigned int)(v5 + 304) < 0x130) )
  {
    v6 = 0;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFFFFFLL);
  }
  v8 = (char *)Win32AllocPoolZInit(v6, 0x6D696955u);
  if ( !v8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
  *(_DWORD *)v8 = 0;
  v10 = CTouchProcessor::CalcManipulationInputInfoSize(v7, v4);
  if ( v6 <= v10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
  CTouchProcessor::BuildManipulationInputInfo(v9, (struct tagMANIPULATION_INPUT_INFO *)(v8 + 8), v10, a2);
  InputTraceLogging::Pointer::SendFrameToUserMode(a2, v4, (const struct tagMANIPULATION_INPUT_INFO *)(v8 + 8));
  InputExtensibilityCallout::CoreMsgSendMessage(v11, 8);
  Win32FreePool((__int64)v8, v12, v13);
}
