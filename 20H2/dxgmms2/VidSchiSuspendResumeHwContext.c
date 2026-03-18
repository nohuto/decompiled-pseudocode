/*
 * XREFs of VidSchiSuspendResumeHwContext @ 0x1C003BF78
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0011178 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0010CE0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00112BC (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0013818 (VidSchiSignalRegisteredEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     ?VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0037C00 (-VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0037CC0 (-VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchiEnsureRootPageTableUpdated @ 0x1C00D456C (VidSchiEnsureRootPageTableUpdated.c)
 */

__int64 __fastcall VidSchiSuspendResumeHwContext(__int64 a1, char a2)
{
  __int64 v2; // r13
  unsigned int v4; // r14d
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  _DWORD *v8; // r12
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rdx
  _QWORD **v12; // rdi
  _QWORD *i; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD **v16; // rdi
  _QWORD *j; // rbx
  _QWORD v19[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v20[4]; // [rsp+30h] [rbp-30h] BYREF
  __int16 v21; // [rsp+50h] [rbp-10h]
  __int64 v22; // [rsp+90h] [rbp+30h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v5 = *(_QWORD *)(v2 + 32);
  if ( a2 )
  {
    v21 = 0;
    v20[0] = v5 + 1712;
    AcquireSpinLock::Acquire((Acquire *)v20);
    v6 = *(_QWORD *)(a1 + 160);
    if ( v6 == *(_QWORD *)(a1 + 168) )
    {
      ++*(_DWORD *)(v5 + 64);
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
    AcquireSpinLock::Release((AcquireSpinLock *)v20);
    if ( *(_DWORD *)(v5 + 2468) == 2
      || (v9 = *(_QWORD *)(v5 + 8),
          v19[1] = *(_QWORD *)(a1 + 160),
          v19[0] = *(_QWORD *)(a1 + 48),
          v10 = ((__int64 (__fastcall *)(__int64, _QWORD *))DxgCoreInterface[42])(v9, v19),
          v8[10] = v10,
          v4 = v10,
          v10 != 259) )
    {
      v20[0] = v5 + 1712;
      v21 = 0;
      AcquireSpinLock::Acquire((Acquire *)v20);
      if ( *(_QWORD *)(a1 + 168) != *(_QWORD *)(a1 + 160) )
      {
        --*(_DWORD *)(v5 + 64);
        *(_QWORD *)(a1 + 168) = *(_QWORD *)(a1 + 160);
        VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v2 + 168));
      }
      AcquireSpinLock::Release((AcquireSpinLock *)v20);
    }
    v21 = 0;
    v20[0] = v5 + 1712;
    AcquireSpinLock::Acquire((Acquire *)v20);
    if ( !*(_BYTE *)(a1 + 92) )
    {
      *(_BYTE *)(a1 + 92) = 1;
      v12 = (_QWORD **)(a1 + 224);
      for ( i = *v12; i != v12; i = (_QWORD *)*i )
      {
        if ( *((_DWORD *)i + 29) == 1 )
          VidSchiNotifyReadyQueueRemoved((struct VIDSCH_HW_QUEUE *)(i - 1), v11);
      }
    }
  }
  else
  {
    if ( *(_DWORD *)(v5 + 2468) != 2 )
    {
      VidSchiEnsureRootPageTableUpdated((void *)a1);
      v14 = *(_QWORD *)(v5 + 8);
      v22 = *(_QWORD *)(a1 + 48);
      v4 = ((__int64 (__fastcall *)(__int64, __int64 *))DxgCoreInterface[43])(v14, &v22);
    }
    v21 = 0;
    v20[0] = v5 + 1712;
    AcquireSpinLock::Acquire((Acquire *)v20);
    if ( *(_BYTE *)(a1 + 92) )
    {
      *(_BYTE *)(a1 + 92) = 0;
      v16 = (_QWORD **)(a1 + 224);
      for ( j = *v16; j != v16; j = (_QWORD *)*j )
      {
        if ( *((_DWORD *)j + 29) == 1 )
          VidSchiNotifyReadyQueueAdded((struct VIDSCH_HW_QUEUE *)(j - 1), v15);
      }
    }
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v20);
  return v4;
}
