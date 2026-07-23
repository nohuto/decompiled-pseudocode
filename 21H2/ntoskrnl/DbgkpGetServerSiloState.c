/*
 * XREFs of DbgkpGetServerSiloState @ 0x1407CAB0C
 * Callers:
 *     DbgkpInitializePhase0 @ 0x140A6E4E0 (DbgkpInitializePhase0.c)
 *     DbgkpInitializePhase1 @ 0x140A6E628 (DbgkpInitializePhase1.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 968;
}
