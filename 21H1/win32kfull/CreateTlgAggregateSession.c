/*
 * XREFs of CreateTlgAggregateSession @ 0x27A73A
 * Callers:
 *     _TlgRegisterAggregateProviderEx@16 @ 0x27A62E (_TlgRegisterAggregateProviderEx@16.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     DestroyAggregateSession @ 0x27A55C (DestroyAggregateSession.c)
 */

_DWORD *__fastcall CreateTlgAggregateSession(char a1, char a2)
{
  _DWORD *PoolWithTag; // eax
  _DWORD *v5; // esi
  struct _KEVENT *v7; // edx
  _DWORD *v8; // eax
  int Timer; // eax

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : 512), 0xE0u, 0x47417254u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_5;
  memset(PoolWithTag, 0, 0xE0u);
  v5[35] = 0;
  if ( a2 || !a1 )
  {
    v7 = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x24u, 0x47417254u);
    if ( v7 )
      memset(v7, 0, 0x24u);
    v5[34] = v7;
    if ( !v7 )
      goto LABEL_5;
    KeInitializeEvent(v7 + 1, NotificationEvent, 0);
    v8 = (_DWORD *)v5[34];
    *v8 = 0;
    v8[2] = TlgAggregateInternalFlushWorkItemRoutineKernelMode;
    v8[3] = v5;
    *(_WORD *)(v5[34] + 32) = 0;
    if ( a2 )
    {
      Timer = ExAllocateTimer(TlgAggregateInternalFlushTimerCallbackKernelMode, v5[34], 8);
      v5[52] = Timer;
      if ( !Timer )
      {
LABEL_5:
        DestroyAggregateSession(v5);
        return 0;
      }
    }
  }
  return v5;
}
