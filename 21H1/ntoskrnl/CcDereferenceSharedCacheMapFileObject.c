/*
 * XREFs of CcDereferenceSharedCacheMapFileObject @ 0x140232608
 * Callers:
 *     CcWriteBehindInternal @ 0x14022CE40 (CcWriteBehindInternal.c)
 *     CcGetDirtyPagesHelper @ 0x1402301A0 (CcGetDirtyPagesHelper.c)
 *     CcDeleteSharedCacheMap @ 0x14023372C (CcDeleteSharedCacheMap.c)
 *     CcUnmapAndPurge @ 0x1402339C0 (CcUnmapAndPurge.c)
 *     CcPurgeAndClearCacheSection @ 0x1402CDFA8 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x140312254 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x1403B8D98 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1403B8E9C (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403B92AC (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x1404E5090 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x1405EDEFC (CcUnmapVacb.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14024CFC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall CcDereferenceSharedCacheMapFileObject(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 96));
  v2 = *(_QWORD *)(a1 + 96);
  if ( (a2 ^ v2) >= 0xF )
  {
LABEL_4:
    ObDereferenceObjectDeferDeleteWithTag((PVOID)a2, 0x746C6644u);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( (a2 ^ v2) >= 0xF )
        goto LABEL_4;
    }
  }
}
