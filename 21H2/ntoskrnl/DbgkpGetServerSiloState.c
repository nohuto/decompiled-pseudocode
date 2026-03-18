/*
 * XREFs of DbgkpGetServerSiloState @ 0x14084F044
 * Callers:
 *     DbgkpInitializePhase0 @ 0x140B23400 (DbgkpInitializePhase0.c)
 *     DbgkpInitializePhase1 @ 0x140B23548 (DbgkpInitializePhase1.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 968;
}
