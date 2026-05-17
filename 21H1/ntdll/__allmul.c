/*
 * XREFs of __allmul @ 0x4B2F6490
 * Callers:
 *     _RtlCreateTimer@28 @ 0x4B2AA4F0 (_RtlCreateTimer@28.c)
 *     _RtlRegisterWait@24 @ 0x4B2B2020 (_RtlRegisterWait@24.c)
 *     _RtlpLogCapabilityCheckLatency@24 @ 0x4B2EF4F3 (_RtlpLogCapabilityCheckLatency@24.c)
 *     _wcstoxq @ 0x4B2F7C71 (_wcstoxq.c)
 *     strtoxq @ 0x4B2FB4FC (strtoxq.c)
 *     _RtlWaitForWnfMetaNotification@24 @ 0x4B33C0B0 (_RtlWaitForWnfMetaNotification@24.c)
 *     _RtlpHpOverrideGCInterval@4 @ 0x4B358711 (_RtlpHpOverrideGCInterval@4.c)
 *     _EtwpUpdateUmLogger@16 @ 0x4B3819CB (_EtwpUpdateUmLogger@16.c)
 *     _RtlUpdateTimer@16 @ 0x4B385200 (_RtlUpdateTimer@16.c)
 *     _PssNtCaptureSnapshot@16 @ 0x4B386310 (_PssNtCaptureSnapshot@16.c)
 *     _RtlpQueryDiskSpacePolicyByHandle@8 @ 0x4B389D13 (_RtlpQueryDiskSpacePolicyByHandle@8.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2)
{
  if ( HIDWORD(a1) | HIDWORD(a2) )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}
