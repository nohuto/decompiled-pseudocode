/*
 * XREFs of PspSetEnergyTrackingStateJobTree @ 0x1406E2038
 * Callers:
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612238 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspIsContextAdmin @ 0x1406E20D8 (PspIsContextAdmin.c)
 */

__int64 __fastcall PspSetEnergyTrackingStateJobTree(char *Object, _DWORD *a2)
{
  if ( (*a2 & 0xFFFFFFF3) != 0 || (~*a2 & a2[1]) != 0 )
    return 3221225485LL;
  if ( !(unsigned __int8)PspIsContextAdmin() )
    return 3221225506LL;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  *((_QWORD *)Object + 197) = *(_QWORD *)a2;
  PspEnumJobsAndProcessesInJobHierarchy(
    Object,
    (int)PspSetJobEnergyTrackingStateCallback,
    0,
    (int)PspSetProcessEnergyTrackingStateCallback,
    (__int64)a2,
    5);
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
  return 0LL;
}
