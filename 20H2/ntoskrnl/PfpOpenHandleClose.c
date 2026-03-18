/*
 * XREFs of PfpOpenHandleClose @ 0x140634820
 * Callers:
 *     PfpPrefetchEntireDirectory @ 0x140633338 (PfpPrefetchEntireDirectory.c)
 *     PfpReadSupportCleanup @ 0x1406334AC (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x1406336AC (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x140634038 (PfSnGetSectionObject.c)
 *     PfSnCleanupPrefetchHeader @ 0x1406344A8 (PfSnCleanupPrefetchHeader.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1406345B4 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1406E7EB4 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x1406E8494 (PfSnQueryVolumeInfo.c)
 *     PfpPrefetchRequestPerform @ 0x1406F18F0 (PfpPrefetchRequestPerform.c)
 *     PfpVolumeOpenAndVerify @ 0x1406F1C64 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchDirectoryStream @ 0x1406F2380 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchVolumesCleanup @ 0x1406F2728 (PfpPrefetchVolumesCleanup.c)
 *     PfpQueryFileExtentsRequest @ 0x1408E254C (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
    (*(void (__fastcall **)(_QWORD *))(qword_140C50278 + 8))(v5);
    v2 = a1[3];
  }
  result = v2 | 0x800000000LL;
  a1[3] = result;
  return result;
}
