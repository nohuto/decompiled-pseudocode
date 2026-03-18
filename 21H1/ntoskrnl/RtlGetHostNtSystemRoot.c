/*
 * XREFs of RtlGetHostNtSystemRoot @ 0x1406EDD50
 * Callers:
 *     IoConfigureCrashDump @ 0x1403BBE10 (IoConfigureCrashDump.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x1402D53D0 (HalSystemVectorDispatchEntry.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 */

char *RtlGetHostNtSystemRoot()
{
  __int64 v0; // rax

  v0 = HalSystemVectorDispatchEntry();
  return (char *)PsGetServerSiloGlobals(v0) + 1056;
}
