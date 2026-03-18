/*
 * XREFs of DbgkpGetServerSiloState @ 0x1407C6588
 * Callers:
 *     DbgkpInitializePhase0 @ 0x140A70560 (DbgkpInitializePhase0.c)
 *     DbgkpInitializePhase1 @ 0x140A706A8 (DbgkpInitializePhase1.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 968;
}
