/*
 * XREFs of ZwReleaseMutant @ 0x1403F8570
 * Callers:
 *     BiReleaseBcdSyncMutant @ 0x140780994 (BiReleaseBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseMutant(HANDLE MutantHandle, PLONG PreviousCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle);
}
