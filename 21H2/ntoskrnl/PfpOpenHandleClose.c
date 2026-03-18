/*
 * XREFs of PfpOpenHandleClose @ 0x1407DFFD8
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1406AE11C (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchVolumesCleanup @ 0x1406AE59C (PfpPrefetchVolumesCleanup.c)
 *     PfpPrefetchDirectoryStream @ 0x1406AEA14 (PfpPrefetchDirectoryStream.c)
 *     PfpVolumeOpenAndVerify @ 0x1406AECC0 (PfpVolumeOpenAndVerify.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1407DDABC (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x1407DE074 (PfSnQueryVolumeInfo.c)
 *     PfpPrefetchEntireDirectory @ 0x1407DE480 (PfpPrefetchEntireDirectory.c)
 *     PfpFileBuildReadSupport @ 0x1407DEE78 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x1407DF794 (PfSnGetSectionObject.c)
 *     PfSnCleanupPrefetchHeader @ 0x1407DFE00 (PfSnCleanupPrefetchHeader.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1407DFF0C (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpReadSupportCleanup @ 0x1407E08A0 (PfpReadSupportCleanup.c)
 *     PfpQueryFileExtentsRequest @ 0x1409876B8 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
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
    (*(void (__fastcall **)(_QWORD *))(qword_140C54638 + 8))(v5);
    v2 = a1[3];
  }
  result = v2 | 0x800000000LL;
  a1[3] = result;
  return result;
}
