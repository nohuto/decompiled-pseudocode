/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x140312560
 * Callers:
 *     CcGetVacbMiss @ 0x14022B6B0 (CcGetVacbMiss.c)
 *     CcSetFileSizesEx @ 0x14022D450 (CcSetFileSizesEx.c)
 *     CcInitializeCacheMapEx @ 0x14022D790 (CcInitializeCacheMapEx.c)
 *     CcAcquireByteRangeForWrite @ 0x14022E960 (CcAcquireByteRangeForWrite.c)
 *     CcMapAndCopyInToCache @ 0x14027BC80 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x14028A9B0 (CcCopyBytesToUserBuffer.c)
 *     CcPerformReadAhead @ 0x1402BDB04 (CcPerformReadAhead.c)
 *     CcAsyncReadPrefetch @ 0x1402BE260 (CcAsyncReadPrefetch.c)
 *     FsRtlCancelNotify @ 0x1402FC690 (FsRtlCancelNotify.c)
 *     CcMdlWriteComplete2 @ 0x1403201B4 (CcMdlWriteComplete2.c)
 *     FsRtlNormalizeNtstatus @ 0x14036A1C0 (FsRtlNormalizeNtstatus.c)
 *     CcLockSystemCacheBuffer @ 0x1404E4DD8 (CcLockSystemCacheBuffer.c)
 *     RawDispatch @ 0x140652280 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406BF6A0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406C0360 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlCopyRead @ 0x140886200 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140886480 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x140886C40 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140886EA0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsNtstatusExpected(NTSTATUS Exception)
{
  bool v1; // zf

  if ( Exception > -1073741676 )
  {
    if ( Exception == -1073741674 || Exception == -1073741654 || Exception == -1073740791 )
      return 0;
    v1 = Exception == -1073740768;
    goto LABEL_6;
  }
  if ( Exception != -1073741676 )
  {
    if ( Exception == 0x80000000 )
      return 1;
    if ( Exception > -2147483645 && Exception != -1073741819 && Exception != -1073741795 )
    {
      if ( Exception <= -1073741755 )
        return 1;
      if ( Exception > -1073741753 )
      {
        v1 = Exception == -1073741684;
LABEL_6:
        if ( !v1 )
          return 1;
      }
    }
  }
  return 0;
}
