/*
 * XREFs of RtlGetHostNtSystemRoot @ 0x1406E4200
 * Callers:
 *     IoConfigureCrashDump @ 0x1403BF5B0 (IoConfigureCrashDump.c)
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     HalSystemVectorDispatchEntry @ 0x140245E60 (HalSystemVectorDispatchEntry.c)
 */

char *RtlGetHostNtSystemRoot()
{
  __int64 v0; // rax

  v0 = HalSystemVectorDispatchEntry();
  return (char *)PsGetServerSiloGlobals(v0) + 1072;
}
