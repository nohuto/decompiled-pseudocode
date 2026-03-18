/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x1403502F0
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x140231960 (CcCopyBytesToUserBuffer.c)
 *     CcPerformReadAhead @ 0x140264AD4 (CcPerformReadAhead.c)
 *     CcAsyncReadPrefetch @ 0x140265230 (CcAsyncReadPrefetch.c)
 *     CcGetVacbMiss @ 0x1402BE330 (CcGetVacbMiss.c)
 *     CcSetFileSizesEx @ 0x1402C0280 (CcSetFileSizesEx.c)
 *     CcInitializeCacheMapEx @ 0x1402C05C0 (CcInitializeCacheMapEx.c)
 *     CcAcquireByteRangeForWrite @ 0x1402C1790 (CcAcquireByteRangeForWrite.c)
 *     FsRtlCancelNotify @ 0x1403399D0 (FsRtlCancelNotify.c)
 *     CcMdlWriteComplete2 @ 0x14035DDD8 (CcMdlWriteComplete2.c)
 *     FsRtlNormalizeNtstatus @ 0x14036AB80 (FsRtlNormalizeNtstatus.c)
 *     CcLockSystemCacheBuffer @ 0x1404E5388 (CcLockSystemCacheBuffer.c)
 *     RawDispatch @ 0x1406BBD40 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406DFC20 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406E08E0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlCopyRead @ 0x140887520 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1408877A0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x140887F60 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1408881C0 (FsRtlPrepareMdlWriteDev.c)
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
