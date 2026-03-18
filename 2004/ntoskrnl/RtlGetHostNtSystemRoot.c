/*
 * XREFs of RtlGetHostNtSystemRoot @ 0x1407116E0
 * Callers:
 *     IoConfigureCrashDump @ 0x1403BD130 (IoConfigureCrashDump.c)
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x14026BA30 (HalSystemVectorDispatchEntry.c)
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 */

char *RtlGetHostNtSystemRoot()
{
  __int64 v0; // rax

  v0 = HalSystemVectorDispatchEntry();
  return (char *)PsGetServerSiloGlobals(v0) + 1064;
}
