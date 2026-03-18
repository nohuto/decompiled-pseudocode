/*
 * XREFs of MmIsSessionLeaderProcess @ 0x14077DB60
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     MiInitializeSessionGlobals @ 0x1407836C0 (MiInitializeSessionGlobals.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 __fastcall MmIsSessionLeaderProcess(__int64 a1)
{
  return a1 == *((_QWORD *)PsGetCurrentServerSiloGlobals() + 109);
}
