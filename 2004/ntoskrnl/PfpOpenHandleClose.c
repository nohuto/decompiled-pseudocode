/*
 * XREFs of PfpOpenHandleClose @ 0x140605A14
 * Callers:
 *     PfSnGetSectionObject @ 0x140604F18 (PfSnGetSectionObject.c)
 *     PfSnCleanupPrefetchHeader @ 0x140605468 (PfSnCleanupPrefetchHeader.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x140605574 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpReadSupportCleanup @ 0x14060B8A4 (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x14060B900 (PfpFileBuildReadSupport.c)
 *     PfpPrefetchEntireDirectory @ 0x1406BD15C (PfpPrefetchEntireDirectory.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1406BD56C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x1406BDB4C (PfSnQueryVolumeInfo.c)
 *     PfpPrefetchRequestPerform @ 0x1406D0DA8 (PfpPrefetchRequestPerform.c)
 *     PfpVolumeOpenAndVerify @ 0x1406D111C (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchDirectoryStream @ 0x1406D1838 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchVolumesCleanup @ 0x1406D1BE0 (PfpPrefetchVolumesCleanup.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DC70C (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
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
    (*(void (__fastcall **)(_QWORD *))(qword_140C501F8 + 8))(v5);
    v2 = a1[3];
  }
  result = v2 | 0x800000000LL;
  a1[3] = result;
  return result;
}
