/*
 * XREFs of VidSchiSuspendResumeHwContext @ 0x1C0043E14
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0013D94 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1C0010BF0 (VidSchiSignalRegisteredEvent.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0014924 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001EF2A (-VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001F010 (-VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z @ 0x1C003ED08 (-VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z.c)
 *     VidSchiEnsureRootPageTableUpdated @ 0x1C00B8EE8 (VidSchiEnsureRootPageTableUpdated.c)
 */

__int64 __fastcall VidSchiSuspendResumeHwContext(__int64 a1, char a2)
{
  __int64 v2; // r13
  unsigned int v4; // r15d
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  _DWORD *v8; // r12
  __int64 v9; // rcx
  unsigned int v10; // eax
  struct _VIDSCH_NODE *v11; // rcx
  _QWORD **v12; // rdi
  _QWORD *i; // rbx
  __int64 v14; // rcx
  _QWORD **v15; // rdi
  _QWORD *j; // rbx
  _QWORD v18[4]; // [rsp+28h] [rbp-59h] BYREF
  __int16 v19; // [rsp+48h] [rbp-39h]
  _QWORD v20[2]; // [rsp+50h] [rbp-31h] BYREF
  _QWORD v21[4]; // [rsp+60h] [rbp-21h] BYREF
  __int16 v22; // [rsp+80h] [rbp-1h]
  _QWORD v23[4]; // [rsp+88h] [rbp+7h] BYREF
  __int16 v24; // [rsp+A8h] [rbp+27h]
  __int64 v25; // [rsp+E8h] [rbp+67h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v5 = *(_QWORD *)(v2 + 32);
  if ( a2 )
  {
    v22 = 0;
    v21[0] = v5 + 1728;
    AcquireSpinLock::Acquire((Acquire *)v21);
    v6 = *(_QWORD *)(a1 + 160);
    if ( v6 == *(_QWORD *)(a1 + 168) )
    {
      ++*(_DWORD *)(v5 + 72);
      ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 1720LL);
      v6 = *(_QWORD *)(a1 + 160);
    }
    v7 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 160) = v6 + 1;
    v8 = (_DWORD *)(*(_QWORD *)(v7 + 184) + 112LL * *(unsigned int *)(v7 + 196));
    memset(v8, 0, 0x70uLL);
    *(_DWORD *)(v7 + 196) = (*(_DWORD *)(v7 + 196) + 1) & (*(_DWORD *)(v7 + 192) - 1);
    *v8 = 11;
    *((_QWORD *)v8 + 2) = a1;
    *((_QWORD *)v8 + 3) = *(_QWORD *)(a1 + 160);
    AcquireSpinLock::Release((AcquireSpinLock *)v21);
    if ( *(_DWORD *)(v5 + 2556) == 2
      || (_InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 16) + 488LL), 1),
          v9 = *(_QWORD *)(v5 + 8),
          v20[1] = *(_QWORD *)(a1 + 160),
          v20[0] = *(_QWORD *)(a1 + 48),
          v10 = ((__int64 (__fastcall *)(__int64, _QWORD *))DxgCoreInterface[43])(v9, v20),
          v8[10] = v10,
          v4 = v10,
          v10 != 259) )
    {
      v23[0] = v5 + 1728;
      v24 = 0;
      AcquireSpinLock::Acquire((Acquire *)v23);
      if ( *(_QWORD *)(a1 + 168) != *(_QWORD *)(a1 + 160) )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 16) + 1728LL));
        --*(_DWORD *)(v5 + 72);
        --*(_DWORD *)(*(_QWORD *)(a1 + 16) + 1720LL);
        v11 = *(struct _VIDSCH_NODE **)(a1 + 16);
        *(_QWORD *)(a1 + 168) = *(_QWORD *)(a1 + 160);
        VidSchiCheckHwSchNodeProgress(v11, 0);
        VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v2 + 168));
      }
      AcquireSpinLock::Release((AcquireSpinLock *)v23);
    }
    v19 = 0;
    v18[0] = v5 + 1728;
    AcquireSpinLock::Acquire((Acquire *)v18);
    if ( !*(_BYTE *)(a1 + 92) )
    {
      *(_BYTE *)(a1 + 92) = 1;
      v12 = (_QWORD **)(a1 + 224);
      for ( i = *v12; i != v12; i = (_QWORD *)*i )
      {
        if ( *((_DWORD *)i + 29) == 1 )
          VidSchiNotifyReadyQueueRemoved((struct VIDSCH_HW_QUEUE *)(i - 1));
      }
    }
  }
  else
  {
    if ( *(_DWORD *)(v5 + 2556) != 2 )
    {
      VidSchiEnsureRootPageTableUpdated((void *)a1);
      v14 = *(_QWORD *)(v5 + 8);
      v25 = *(_QWORD *)(a1 + 48);
      v4 = ((__int64 (__fastcall *)(__int64, __int64 *))DxgCoreInterface[44])(v14, &v25);
    }
    v19 = 0;
    v18[0] = v5 + 1728;
    AcquireSpinLock::Acquire((Acquire *)v18);
    if ( *(_BYTE *)(a1 + 92) )
    {
      *(_BYTE *)(a1 + 92) = 0;
      v15 = (_QWORD **)(a1 + 224);
      for ( j = *v15; j != v15; j = (_QWORD *)*j )
      {
        if ( *((_DWORD *)j + 29) == 1 )
          VidSchiNotifyReadyQueueAdded((struct VIDSCH_HW_QUEUE *)(j - 1));
      }
    }
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v18);
  return v4;
}
