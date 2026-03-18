/*
 * XREFs of PpmEventInitialize @ 0x140A70EBC
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     EtwRegister @ 0x14074F8E0 (EtwRegister.c)
 */

NTSTATUS PpmEventInitialize()
{
  NTSTATUS result; // eax

  result = EtwRegister(&PPM_ETW_PROVIDER, (PETWENABLECALLBACK)PpmEventTraceControlCallback, 0LL, &PpmEtwHandle);
  if ( result >= 0 )
  {
    PpmEtwRegistered = 1;
    return 0;
  }
  return result;
}
