/*
 * XREFs of PfpOpenHandleClose @ 0x14063AA54
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1405D2440 (PfpPrefetchRequestPerform.c)
 *     PfpVolumeOpenAndVerify @ 0x1405D27B4 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchDirectoryStream @ 0x1405D2ED0 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchVolumesCleanup @ 0x1405D3278 (PfpPrefetchVolumesCleanup.c)
 *     PfSnGetSectionObject @ 0x140639F58 (PfSnGetSectionObject.c)
 *     PfSnCleanupPrefetchHeader @ 0x14063A4A8 (PfSnCleanupPrefetchHeader.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x14063A5B4 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpReadSupportCleanup @ 0x1406409F4 (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x140640A50 (PfpFileBuildReadSupport.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140670968 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x140670F48 (PfSnQueryVolumeInfo.c)
 *     PfpPrefetchEntireDirectory @ 0x1406C3C78 (PfpPrefetchEntireDirectory.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DB39C (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PfpOpenHandleClose(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1[3];
  if ( (v2 & 0x1000000000LL) == 0 )
  {
    v5[1] = *a1;
    v5[2] = a1[1];
    v5[3] = a1[2];
    v5[0] = a2 + 40;
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 84));
    (*(void (__fastcall **)(_QWORD *))(qword_140C50338 + 8))(v5);
    v2 = a1[3];
  }
  result = v2 | 0x800000000LL;
  a1[3] = result;
  return result;
}
