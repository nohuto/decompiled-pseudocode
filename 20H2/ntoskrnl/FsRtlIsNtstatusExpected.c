/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x140320A00
 * Callers:
 *     CcAsyncReadPrefetch @ 0x14024B6A8 (CcAsyncReadPrefetch.c)
 *     CcPerformReadAhead @ 0x14024B924 (CcPerformReadAhead.c)
 *     CcInitializeCacheMapEx @ 0x140291D10 (CcInitializeCacheMapEx.c)
 *     CcSetFileSizesEx @ 0x1402955E0 (CcSetFileSizesEx.c)
 *     CcAcquireByteRangeForWrite @ 0x140297520 (CcAcquireByteRangeForWrite.c)
 *     CcGetVacbMiss @ 0x140297FA0 (CcGetVacbMiss.c)
 *     CcCopyBytesToUserBuffer @ 0x1402A6C10 (CcCopyBytesToUserBuffer.c)
 *     CcMapAndCopyInToCache @ 0x1402B4EC0 (CcMapAndCopyInToCache.c)
 *     FsRtlCancelNotify @ 0x14030C1F0 (FsRtlCancelNotify.c)
 *     CcMdlWriteComplete2 @ 0x14032E894 (CcMdlWriteComplete2.c)
 *     FsRtlNormalizeNtstatus @ 0x14036CB60 (FsRtlNormalizeNtstatus.c)
 *     CcLockSystemCacheBuffer @ 0x1404E8918 (CcLockSystemCacheBuffer.c)
 *     RawDispatch @ 0x1405D8820 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406B7570 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406B8230 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlCopyRead @ 0x14088D070 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14088D2F0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14088DAB0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088DD10 (FsRtlPrepareMdlWriteDev.c)
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
