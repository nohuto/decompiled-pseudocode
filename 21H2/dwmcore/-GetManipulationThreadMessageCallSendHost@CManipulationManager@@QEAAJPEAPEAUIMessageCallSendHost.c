/*
 * XREFs of ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x1801F21B0
 * Callers:
 *     ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x1801F2960 (-Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801F5400 (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?SendUpdateToRenderThread@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJXZ @ 0x180275400 (-SendUpdateToRenderThread@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800D5E60 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CManipulationManager::GetManipulationThreadMessageCallSendHost(
        CManipulationManager *this,
        struct IMessageCallSendHost **a2)
{
  struct IMessageCallSendHost **v2; // rbx
  struct IMessageCallSendHost *v3; // rax

  *a2 = 0LL;
  v2 = (struct IMessageCallSendHost **)((char *)this + 40);
  v3 = (struct IMessageCallSendHost *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 5);
    *a2 = *v2;
    v3 = *v2;
  }
  return v3 == 0LL ? 0x80004005 : 0;
}
