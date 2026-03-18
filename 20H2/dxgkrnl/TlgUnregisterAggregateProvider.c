/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C02FFD20
 * Callers:
 *     ?DxgkCleanupTelemetry@@YAXXZ @ 0x1C004B9E0 (-DxgkCleanupTelemetry@@YAXXZ.c)
 * Callees:
 *     LookUpTableFlushComplete @ 0x1C019799C (LookUpTableFlushComplete.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C02FF9E0 (CancelTimerCallbacksAndDeleteTimer.c)
 *     DestroyAggregateSession @ 0x1C02FFA70 (DestroyAggregateSession.c)
 */

void __fastcall TlgUnregisterAggregateProvider(__int64 a1)
{
  REGHANDLE v2; // rcx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 *v5; // rdx
  __int64 *v6; // rax
  REGHANDLE v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  REGHANDLE v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8

  if ( *(void (__fastcall **)(const struct _GUID *, __int64, char, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD *))(a1 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v3 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C00B13C8, 0LL);
    v4 = qword_1C00B1FD8;
    v5 = &qword_1C00B1FD8;
    while ( v4 )
    {
      v6 = (__int64 *)(v4 + 352);
      if ( *(_QWORD *)(v4 + 344) == a1 )
      {
        v3 = (_QWORD *)v4;
        *v5 = *v6;
        LookUpTableFlushComplete(v4);
        if ( !qword_1C00B1FD8 )
        {
          v7 = qword_1C00AFB58;
          qword_1C00AFB58 = 0LL;
          dword_1C00AFB38 = 0;
          EtwUnregister(v7);
        }
        break;
      }
      v4 = *v6;
      v5 = v6;
    }
    ExReleasePushLockExclusiveEx(&unk_1C00B13C8, 0LL);
    if ( v3 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v3, v8, v9);
    v10 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)a1 = 0;
    EtwUnregister(v10);
    DestroyAggregateSession(v3, v11, v12);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)a1 = 0;
    EtwUnregister(v2);
  }
}
