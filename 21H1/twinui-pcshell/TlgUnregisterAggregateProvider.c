/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x18011A7F4
 * Callers:
 *     DllMain @ 0x1800919E8 (DllMain.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x180119878 (CancelTimerCallbacksAndDeleteTimer.c)
 *     LookUpTableFlushComplete @ 0x18011A36C (LookUpTableFlushComplete.c)
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

  if ( (void (__fastcall *)(const struct _GUID *, __int64, char, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD *))qword_180597740 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v1 = 0LL;
    AcquireSRWLockExclusive(&stru_18059FD70);
    v2 = qword_1805A13E8;
    v3 = &qword_1805A13E8;
    while ( v2 )
    {
      v4 = (__int64 *)(v2 + 336);
      if ( *(int **)(v2 + 328) == &dword_180597718 )
      {
        v1 = (void *)v2;
        *v3 = *v4;
        LookUpTableFlushComplete(v2);
        if ( !qword_1805A13E8 )
        {
          v5 = qword_18059DB38;
          qword_18059DB38 = 0LL;
          dword_18059DB18 = 0;
          EventUnregister(v5);
        }
        break;
      }
      v2 = *v4;
      v3 = v4;
    }
    ReleaseSRWLockExclusive(&stru_18059FD70);
    if ( v1 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v1);
    v6 = qword_180597738;
    qword_180597738 = 0LL;
    dword_180597718 = 0;
    EventUnregister(v6);
    DestroyAggregateSession(v1);
  }
  else
  {
    v0 = qword_180597738;
    qword_180597738 = 0LL;
    dword_180597718 = 0;
    EventUnregister(v0);
  }
}
