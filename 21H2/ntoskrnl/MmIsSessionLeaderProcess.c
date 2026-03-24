/*
 * XREFs of MmIsSessionLeaderProcess @ 0x140781940
 * Callers:
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     MiInitializeSessionGlobals @ 0x1407874A0 (MiInitializeSessionGlobals.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 __fastcall MmIsSessionLeaderProcess(__int64 a1, __int64 a2)
{
  return a1 == *((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 109);
}
