/*
 * XREFs of PfpOpenHandleClose @ 0x1406C9690
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1406C5978 (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchVolumesCleanup @ 0x1406C5D4C (PfpPrefetchVolumesCleanup.c)
 *     PfpVolumeOpenAndVerify @ 0x1406C5DFC (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchDirectoryStream @ 0x1406C7550 (PfpPrefetchDirectoryStream.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1406C7A68 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x1406C8048 (PfSnQueryVolumeInfo.c)
 *     PfpPrefetchEntireDirectory @ 0x1406C846C (PfpPrefetchEntireDirectory.c)
 *     PfpFileBuildReadSupport @ 0x1406C85E0 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x1406C8EA8 (PfSnGetSectionObject.c)
 *     PfSnCleanupPrefetchHeader @ 0x1406C9318 (PfSnCleanupPrefetchHeader.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1406C9424 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpReadSupportCleanup @ 0x1406C9DB4 (PfpReadSupportCleanup.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DFD0C (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
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
    (*(void (__fastcall **)(_QWORD *))(qword_140C503F8 + 8))(v5);
    v2 = a1[3];
  }
  result = v2 | 0x800000000LL;
  a1[3] = result;
  return result;
}
