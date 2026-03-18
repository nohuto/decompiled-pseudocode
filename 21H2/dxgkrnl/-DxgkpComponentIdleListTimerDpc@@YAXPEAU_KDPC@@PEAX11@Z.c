/*
 * XREFs of ?DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0017DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x1C00025E4 (-ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0044900 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0044D64 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall DxgkpComponentIdleListTimerDpc(
        struct _KDPC *Dpc,
        KSPIN_LOCK *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v5; // rbx
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  KSPIN_LOCK v8; // rcx
  int v9; // r8d
  _QWORD *i; // rsi
  _QWORD *v11; // rcx
  _QWORD *v12; // r8
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // r15d
  __int64 v18; // rdx
  _QWORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF

  if ( !*((_BYTE *)DeferredContext + 3334) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0_EtwWriteTransfer(Dpc, &Dxgk_ProcessComponentIdleList);
    v5 = MEMORY[0xFFFFF78000000014];
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLockAtDpcLevel(DeferredContext + 429, &LockHandle);
    v19[1] = v19;
    v6 = DeferredContext + 423;
    v19[0] = v19;
    v7 = (_QWORD *)DeferredContext[423];
    while ( v7 != v6 )
    {
      v12 = v7;
      v13 = v7;
      v7 = (_QWORD *)*v7;
      if ( v12[6] > v5 )
        break;
      if ( (_QWORD *)v7[1] != v13
        || (v14 = (_QWORD *)v13[1], (_QWORD *)*v14 != v13)
        || (*v14 = v7, v7[1] = v14, *v13 = 0LL, v15 = v12 + 2, v16 = v19[0], *(_QWORD **)(v19[0] + 8LL) != v19) )
      {
        __fastfail(3u);
      }
      *v15 = v19[0];
      v12[3] = v19;
      *(_QWORD *)(v16 + 8) = v15;
      v19[0] = v12 + 2;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    for ( i = (_QWORD *)v19[0]; i != v19; i = (_QWORD *)*i )
    {
      v17 = *((_DWORD *)i - 114);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(
          v8,
          (unsigned int)&Dxgk_ReportPowerComponentState,
          v9,
          (_DWORD)DeferredContext,
          v17,
          0);
      v8 = DeferredContext[363];
      if ( v8 )
        PoFxIdleComponent(v8, v17, 0LL);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel(DeferredContext + 429, &LockHandle);
    *((_BYTE *)DeferredContext + 3333) = 0;
    v11 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 != v6 )
    {
      if ( v11[5] > v5 )
      {
        v18 = v11[7];
        v11[5] = v5;
        v11[6] = v18 + v5;
      }
      else
      {
        v18 = v11[6] - v5;
      }
      DXGADAPTER::ScheduleComponentIdleListTimer((DXGADAPTER *)DeferredContext, v18);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
