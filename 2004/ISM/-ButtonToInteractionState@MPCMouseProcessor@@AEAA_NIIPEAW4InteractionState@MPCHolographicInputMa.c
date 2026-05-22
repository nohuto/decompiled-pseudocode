/*
 * XREFs of ?ButtonToInteractionState@MPCMouseProcessor@@AEAA_NIIPEAW4InteractionState@MPCHolographicInputManager@@@Z @ 0x180194CFC
 * Callers:
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180195218 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall MPCMouseProcessor::ButtonToInteractionState(
        MPCMouseProcessor *this,
        int a2,
        int a3,
        enum MPCHolographicInputManager::InteractionState *a4)
{
  int v4; // eax

  v4 = a3 & *((_DWORD *)this + 1566);
  if ( (a3 & a2) == a3 )
  {
    if ( v4 != a3 )
    {
      *(_DWORD *)a4 = 1;
      return 1;
    }
  }
  else if ( v4 == a3 )
  {
    *(_DWORD *)a4 = 0;
    return 1;
  }
  return 0;
}
