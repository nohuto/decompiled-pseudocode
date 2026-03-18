/*
 * XREFs of ?s_EndpointProc@CManipulationManager@@KAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z @ 0x1800F3228
 * Callers:
 *     ?s_RenderThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z @ 0x1800F31B0 (-s_RenderThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z.c)
 *     ?s_ManipulationThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z @ 0x180180B00 (-s_ManipulationThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z.c)
 *     ?s_RenderThreadTelemetryEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z @ 0x180180B80 (-s_RenderThreadTelemetryEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CManipulationManager::s_EndpointProc(
        const struct CManipulationManager::MessageCallThreadInfo *a1,
        const struct MsgCallTypeDefinition *a2,
        void *a3,
        const void *a4)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v4 = CoreUICallReceive(
         *((_QWORD *)a1 + 2),
         a2,
         &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_xfzN1g4V75qd4Cs8kloSCpvtObo,
         219LL);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0x1E9u);
  return v6;
}
