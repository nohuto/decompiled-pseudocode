/*
 * XREFs of LdrpWorkCallback @ 0x18005EBA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpProcessWork @ 0x18005EC2C (LdrpProcessWork.c)
 *     LdrpUpdateStatistics @ 0x18005EE24 (LdrpUpdateStatistics.c)
 */

void LdrpWorkCallback()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 *v2; // rbx
  __int64 v3; // rax

  if ( !LdrpDetourExist )
  {
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v2 = (__int64 *)LdrpWorkQueue;
    v3 = *(_QWORD *)LdrpWorkQueue;
    if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue || *(_QWORD *)(v3 + 8) != LdrpWorkQueue )
      __fastfail(3u);
    LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
    *(_QWORD *)(v3 + 8) = &LdrpWorkQueue;
    if ( &LdrpWorkQueue != v2 )
    {
      ++LdrpWorkInProgress;
      LdrpUpdateStatistics();
    }
    RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock, v0, v1);
    if ( &LdrpWorkQueue != v2 )
      LdrpProcessWork(v2 - 8, 0LL);
  }
}
