/*
 * XREFs of DitTakeOver @ 0x1C01039F0
 * Callers:
 *     EditionActivateMitInput @ 0x1C0103530 (EditionActivateMitInput.c)
 * Callees:
 *     <none>
 */

__int64 DitTakeOver()
{
  if ( (int)CBaseInput::InitializeSensor(gpHidInput) < 0
    || (int)CBaseInput::RegisterDispatcherObject(gpHidInput, gpIOCPDispatcher) < 0 )
  {
    return 0LL;
  }
  EtwTraceDitEngaged();
  return 1LL;
}
