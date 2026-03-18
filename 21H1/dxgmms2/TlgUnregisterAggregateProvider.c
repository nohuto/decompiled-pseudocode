/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C00D5E80
 * Callers:
 *     ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x1C00AF9CC (-DeInitGlobals@VIDMM_GLOBAL@@SAXXZ.c)
 * Callees:
 *     LookUpTableFlushComplete @ 0x1C00966E8 (LookUpTableFlushComplete.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C00D5B40 (CancelTimerCallbacksAndDeleteTimer.c)
 *     DestroyAggregateSession @ 0x1C00D5BD0 (DestroyAggregateSession.c)
 */

void TlgUnregisterAggregateProvider()
{
  REGHANDLE v0; // rcx
  _QWORD *v1; // rdi
  __int64 v2; // rcx
  __int64 *v3; // rdx
  __int64 *v4; // rax
  REGHANDLE v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  REGHANDLE v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8

  if ( (void (__fastcall *)(const struct _GUID *, __int64, char, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD *))qword_1C0051070 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v1 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C0051660, 0LL);
    v2 = qword_1C0051850;
    v3 = &qword_1C0051850;
    while ( v2 )
    {
      v4 = (__int64 *)(v2 + 352);
      if ( *(int **)(v2 + 344) == &dword_1C0051048 )
      {
        v1 = (_QWORD *)v2;
        *v3 = *v4;
        LookUpTableFlushComplete(v2);
        if ( !qword_1C0051850 )
        {
          v5 = qword_1C00510A0;
          qword_1C00510A0 = 0LL;
          dword_1C0051080 = 0;
          EtwUnregister(v5);
        }
        break;
      }
      v2 = *v4;
      v3 = v4;
    }
    ExReleasePushLockExclusiveEx(&unk_1C0051660, 0LL);
    if ( v1 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v1, v6, v7);
    v8 = RegHandle;
    RegHandle = 0LL;
    dword_1C0051048 = 0;
    EtwUnregister(v8);
    DestroyAggregateSession(v1, v9, v10);
  }
  else
  {
    v0 = RegHandle;
    RegHandle = 0LL;
    dword_1C0051048 = 0;
    EtwUnregister(v0);
  }
}
