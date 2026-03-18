/*
 * XREFs of DbgkpGetServerSiloState @ 0x1407B4B8C
 * Callers:
 *     DbgkpInitializePhase0 @ 0x140A697D4 (DbgkpInitializePhase0.c)
 *     DbgkpInitializePhase1 @ 0x140A6991C (DbgkpInitializePhase1.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 968;
}
