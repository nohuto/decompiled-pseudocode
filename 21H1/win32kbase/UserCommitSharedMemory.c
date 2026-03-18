/*
 * XREFs of UserCommitSharedMemory @ 0x1C0051A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserCommitSharedMemory(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  return MmCommitSessionMappedView(*a2, *a3);
}
