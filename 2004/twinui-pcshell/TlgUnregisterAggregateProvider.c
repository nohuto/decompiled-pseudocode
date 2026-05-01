/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x18013EE14
 * Callers:
 *     DllMain @ 0x180092348 (DllMain.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x18013DE98 (CancelTimerCallbacksAndDeleteTimer.c)
 *     LookUpTableFlushComplete @ 0x18013E98C (LookUpTableFlushComplete.c)
 */

void TlgUnregisterAggregateProvider()
{
  REGHANDLE v0; // rcx
  void *v1; // rdi
  __int64 v2; // rcx
  __int64 *v3; // rdx
  __int64 *v4; // rax
  REGHANDLE v5; // rcx
  REGHANDLE v6; // rcx

  if ( (void (__fastcall *)(const struct _GUID *, __int64, char, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD *))qword_1805C47A8 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v1 = 0LL;
    AcquireSRWLockExclusive(&stru_1805CD040);
    v2 = qword_1805CE828;
    v3 = &qword_1805CE828;
    while ( v2 )
    {
      v4 = (__int64 *)(v2 + 336);
      if ( *(int **)(v2 + 328) == &dword_1805C4780 )
      {
        v1 = (void *)v2;
        *v3 = *v4;
        LookUpTableFlushComplete(v2);
        if ( !qword_1805CE828 )
        {
          v5 = qword_1805CAD28;
          qword_1805CAD28 = 0LL;
          dword_1805CAD08 = 0;
          EventUnregister(v5);
        }
        break;
      }
      v2 = *v4;
      v3 = v4;
    }
    ReleaseSRWLockExclusive(&stru_1805CD040);
    if ( v1 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v1);
    v6 = qword_1805C47A0;
    qword_1805C47A0 = 0LL;
    dword_1805C4780 = 0;
    EventUnregister(v6);
    DestroyAggregateSession(v1);
  }
  else
  {
    v0 = qword_1805C47A0;
    qword_1805C47A0 = 0LL;
    dword_1805C4780 = 0;
    EventUnregister(v0);
  }
}
