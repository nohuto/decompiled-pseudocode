/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C037CBB8
 * Callers:
 *     DisableUserkTraceLogging @ 0x1C0128410 (DisableUserkTraceLogging.c)
 * Callees:
 *     DestroyAggregateSession @ 0x1C037CCAC (DestroyAggregateSession.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C037CCEC (CancelTimerCallbacksAndDeleteTimer.c)
 *     LookUpTableFlushComplete @ 0x1C037CD10 (LookUpTableFlushComplete.c)
 */

NTSTATUS TlgUnregisterAggregateProvider()
{
  void *v0; // rdi
  __int64 v1; // rcx
  __int64 *v2; // rdx
  __int64 *v3; // rax
  REGHANDLE v4; // rcx
  REGHANDLE v5; // rcx
  REGHANDLE v7; // rcx

  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C032B268 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C033C6D8, 0LL);
    v1 = qword_1C033C6E0;
    v2 = &qword_1C033C6E0;
    while ( v1 )
    {
      v3 = (__int64 *)(v1 + 352);
      if ( *(int **)(v1 + 344) == &dword_1C032B240 )
      {
        v0 = (void *)v1;
        *v2 = *v3;
        LookUpTableFlushComplete();
        if ( !qword_1C033C6E0 )
        {
          v4 = qword_1C032B350;
          qword_1C032B350 = 0LL;
          dword_1C032B330 = 0;
          EtwUnregister(v4);
        }
        break;
      }
      v1 = *v3;
      v2 = v3;
    }
    ExReleasePushLockExclusiveEx(&unk_1C033C6D8, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer(v0);
    v5 = qword_1C032B260;
    qword_1C032B260 = 0LL;
    dword_1C032B240 = 0;
    EtwUnregister(v5);
    return DestroyAggregateSession(v0);
  }
  else
  {
    v7 = qword_1C032B260;
    qword_1C032B260 = 0LL;
    dword_1C032B240 = 0;
    return EtwUnregister(v7);
  }
}
