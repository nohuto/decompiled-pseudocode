/*
 * XREFs of MmIsSessionLeaderProcess @ 0x1406E8FE0
 * Callers:
 *     MiInitializeSessionGlobals @ 0x1406E8EE8 (MiInitializeSessionGlobals.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 MmIsSessionLeaderProcess()
{
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v1; // r8

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return v1 == CurrentServerSiloGlobals[109];
}
