/*
 * XREFs of ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x1801F59AC
 * Callers:
 *     ?CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z @ 0x1801F3C30 (-CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z.c)
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipulationTelemetryData@InteractionLatencyTelemetry@@@Z @ 0x1801F4CB0 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipul.c)
 *     ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x1801F4FE0 (-UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithou.c)
 *     ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x1801F5390 (-_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CManipulation::_UpdateCaptureState(CManipulation *this, unsigned __int8 a2)
{
  if ( *((_DWORD *)this + 113) != 2 )
    *((_DWORD *)this + 113) = a2;
}
