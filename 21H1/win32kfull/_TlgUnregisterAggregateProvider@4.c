/*
 * XREFs of _TlgUnregisterAggregateProvider@4 @ 0x27A48A
 * Callers:
 *     _DisableUserkTraceLogging@0 @ 0xD3B7C (_DisableUserkTraceLogging@0.c)
 * Callees:
 *     DestroyAggregateSession @ 0x27A55C (DestroyAggregateSession.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x27A584 (CancelTimerCallbacksAndDeleteTimer.c)
 *     LookUpTableFlushComplete @ 0x27A994 (LookUpTableFlushComplete.c)
 */

NTSTATUS TlgUnregisterAggregateProvider()
{
  void *v0; // edi
  int v1; // ecx
  int *v2; // edx
  int *v3; // eax
  REGHANDLE v5; // [esp-8h] [ebp-10h]
  REGHANDLE v6; // [esp-8h] [ebp-10h]
  REGHANDLE v7; // [esp-8h] [ebp-10h]

  if ( (void (__stdcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))dword_266278 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0;
    ExAcquirePushLockExclusiveEx(&unk_274B44, 0);
    v1 = dword_275590;
    v2 = &dword_275590;
    while ( v1 )
    {
      v3 = (int *)(v1 + 204);
      if ( *(int **)(v1 + 200) == &dword_266258 )
      {
        v0 = (void *)v1;
        *v2 = *v3;
        LookUpTableFlushComplete();
        if ( !dword_275590 )
        {
          v5 = qword_266338;
          dword_266320 = 0;
          qword_266338 = 0LL;
          EtwUnregister(v5);
        }
        break;
      }
      v2 = (int *)(v1 + 204);
      v1 = *v3;
    }
    ExReleasePushLockExclusiveEx(&unk_274B44, 0);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer(v0);
    v6 = qword_266270;
    dword_266258 = 0;
    qword_266270 = 0LL;
    EtwUnregister(v6);
    return DestroyAggregateSession(v0);
  }
  else
  {
    v7 = qword_266270;
    dword_266258 = 0;
    qword_266270 = 0LL;
    return EtwUnregister(v7);
  }
}
