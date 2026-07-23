/*
 * XREFs of MmIsSessionLeaderProcess @ 0x140781B00
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     MiInitializeSessionGlobals @ 0x140787660 (MiInitializeSessionGlobals.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 __fastcall MmIsSessionLeaderProcess(__int64 a1, __int64 a2)
{
  return a1 == *((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 109);
}
