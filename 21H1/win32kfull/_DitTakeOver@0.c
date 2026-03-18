/*
 * XREFs of _DitTakeOver@0 @ 0xEAF2C
 * Callers:
 *     _WaitForRitDisEngagement@0 @ 0xEAEA6 (_WaitForRitDisEngagement@0.c)
 * Callees:
 *     <none>
 */

int __stdcall DitTakeOver()
{
  if ( (int)CBaseInput::InitializeSensor(_gpHidInput) < 0
    || (int)CBaseInput::RegisterDispatcherObject(_gpHidInput, _gpIOCPDispatcher) < 0 )
  {
    return 0;
  }
  EtwTraceDitEngaged();
  return 1;
}
