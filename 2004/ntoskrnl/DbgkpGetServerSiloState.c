/*
 * XREFs of DbgkpGetServerSiloState @ 0x1407B7CFC
 * Callers:
 *     DbgkpInitializePhase0 @ 0x140A69C54 (DbgkpInitializePhase0.c)
 *     DbgkpInitializePhase1 @ 0x140A69D9C (DbgkpInitializePhase1.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 968;
}
