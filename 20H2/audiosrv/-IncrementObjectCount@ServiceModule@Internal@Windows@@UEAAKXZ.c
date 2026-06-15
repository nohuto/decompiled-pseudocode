/*
 * XREFs of ?IncrementObjectCount@ServiceModule@Internal@Windows@@UEAAKXZ @ 0x1800B8FD0
 * Callers:
 *     ?IncrementObjectCount@ServiceModule@Internal@Windows@@WCI@EAAKXZ @ 0x180074220 (-IncrementObjectCount@ServiceModule@Internal@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall Windows::Internal::ServiceModule::IncrementObjectCount()
{
  return CoAddRefServerProcess();
}
