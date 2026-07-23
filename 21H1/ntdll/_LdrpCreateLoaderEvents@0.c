/*
 * XREFs of _LdrpCreateLoaderEvents@0 @ 0x4B2DFE5B
 * Callers:
 *     _LdrpInitParallelLoadingSupport@0 @ 0x4B2DFB52 (_LdrpInitParallelLoadingSupport@0.c)
 *     _LdrpCompleteProcessCloning@4 @ 0x4B333C39 (_LdrpCompleteProcessCloning@4.c)
 * Callees:
 *     _NtCreateEvent@20 @ 0x4B2F2E00 (_NtCreateEvent@20.c)
 */

int __stdcall LdrpCreateLoaderEvents()
{
  int result; // eax

  result = NtCreateEvent(&LdrpLoadCompleteEvent, 0x1F0003u, 0, SynchronizationEvent, 0);
  if ( result >= 0 )
    return NtCreateEvent(&LdrpWorkCompleteEvent, 0x1F0003u, 0, SynchronizationEvent, 0);
  return result;
}
