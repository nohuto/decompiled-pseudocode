/*
 * XREFs of ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0038174
 * Callers:
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1C003800C (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C00380E8 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C00370B4 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0037430 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00393B4 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003942C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C0045DC0 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0046BAC (-RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentActiveCBWorker(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  char v4; // di
  __int64 v5; // r12
  char v6; // bl
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // ecx
  char v13; // r13
  __int64 v14; // rbx
  _QWORD *v15; // r13
  __int64 v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 *v20; // rcx
  __int64 **v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned int v27; // ebx
  __int64 v28; // r9
  char v29; // [rsp+38h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+50h] [rbp-41h] BYREF
  char v31; // [rsp+68h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+70h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-9h] BYREF
  struct _KLOCK_QUEUE_HANDLE v34; // [rsp+A0h] [rbp+Fh] BYREF
  char v35; // [rsp+108h] [rbp+77h]

  v35 = a3;
  v4 = 0;
  v5 = a2;
  v6 = a3;
  if ( !*((_QWORD *)this + 351) )
    return;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0pq_EtwWriteTransfer(this, &Dxgk_SetPowerComponentActiveCB, a3, this, a2);
  v8 = *((_QWORD *)this + 350);
  v9 = 520 * v5;
  v10 = *(_QWORD *)(520 * v5 + v8 + 512);
  if ( v10 )
  {
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordActivity((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v10 + 136));
    if ( (*((_DWORD *)this + 642) & 0x10) != 0 )
    {
      v11 = *((_DWORD *)this + 362);
      v12 = 0;
      if ( v11 )
      {
        while ( *(_DWORD *)(*((_QWORD *)this + 486) + 4LL * v12) )
        {
          if ( ++v12 >= v11 )
            goto LABEL_12;
        }
        goto LABEL_15;
      }
    }
    else if ( !**((_DWORD **)this + 486) )
    {
      goto LABEL_15;
    }
LABEL_12:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 525, &LockHandle);
    *(_BYTE *)(*(_QWORD *)(v9 + v8 + 512) + 240LL) = 1;
    if ( !*((_BYTE *)this + 4208) )
    {
      *((_BYTE *)this + 4208) = 1;
      _InterlockedIncrement64((volatile signed __int64 *)this + 3);
      *((_QWORD *)this + 508) = -1LL;
      KeSetTimer((PKTIMER)((char *)this + 4072), (LARGE_INTEGER)-120000LL, (PKDPC)((char *)this + 4136));
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
LABEL_15:
  v29 = v6;
  v13 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + v8 + 504), &v34);
  if ( (int)++*(_DWORD *)(v9 + v8 + 352) <= 1 )
  {
    v14 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v9 + v8 + 480);
    if ( *(_BYTE *)(v9 + v8 + 360) )
    {
      v6 = 0;
      v4 = 1;
      goto LABEL_40;
    }
    v15 = (_QWORD *)(v9 + v8 + 400);
    if ( *v15 )
    {
      v31 = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 408, &v30);
      *((_QWORD *)this + 409) = KeGetCurrentThread();
      v4 = 0;
      v16 = *(_QWORD *)(v9 + v8 + 400);
      v31 = 1;
      if ( !v16 )
        goto LABEL_27;
      if ( *(_QWORD **)(v16 + 8) != v15 )
        goto LABEL_36;
      v17 = (_QWORD *)v15[1];
      if ( (_QWORD *)*v17 != v15 )
        goto LABEL_36;
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      *v15 = 0LL;
      if ( *((DXGADAPTER **)this + 406) == (DXGADAPTER *)((char *)this + 3248) && *((_BYTE *)this + 3236) )
      {
        v18 = *((_QWORD *)this + 338);
        *((_BYTE *)this + 3236) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v18 + 616) + 8LL) + 864LL))(
          *(_QWORD *)(v18 + 624),
          0LL);
      }
      if ( v31 )
      {
LABEL_27:
        v31 = 0;
        *((_QWORD *)this + 409) = 0LL;
        KeReleaseInStackQueuedSpinLock(&v30);
      }
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 417, &v32);
    v13 = 0;
    v19 = (__int64 *)(v9 + v8 + 440);
    v20 = (__int64 *)*v19;
    if ( !*v19 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v32);
      v22 = *(_QWORD *)(v9 + v8 + 496);
      if ( v14 < v22 )
        *(_QWORD *)(v9 + v8 + 472) = v22;
      v6 = 1;
      goto LABEL_40;
    }
    if ( (__int64 *)v20[1] == v19 )
    {
      v21 = (__int64 **)v19[1];
      if ( *v21 == v19 )
      {
        *v21 = v20;
        v20[1] = (__int64)v21;
        *v19 = 0LL;
        if ( *((DXGADAPTER **)this + 411) == (DXGADAPTER *)((char *)this + 3288) )
        {
          KeCancelTimer((PKTIMER)((char *)this + 3352));
          *((_BYTE *)this + 3237) = 0;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v32);
        if ( v14 > *(_QWORD *)(v9 + v8 + 496) )
          *(_QWORD *)(v9 + v8 + 472) = 0LL;
        v6 = v29;
        v13 = 1;
        goto LABEL_40;
      }
    }
LABEL_36:
    __fastfail(3u);
  }
  v13 = 1;
LABEL_40:
  KeReleaseInStackQueuedSpinLock(&v34);
  if ( *(_DWORD *)(v9 + v8 + 208) == 7 )
    DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v9 + v8 + 4), 0, 1);
  if ( v6 )
  {
    if ( v35 )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        v26 = WdLogNewEntry5_WdCriticalError(v24, v23);
        *(_QWORD *)(v26 + 24) = 275LL;
        *(_QWORD *)(v26 + 32) = 20LL;
        *(_QWORD *)(v26 + 40) = this;
        *(_OWORD *)(v26 + 48) = 0LL;
        WdLogEvent5_WdCriticalError(v26);
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v24, (unsigned int)&Dxgk_ReportPowerComponentState, v25, (_DWORD)this, v5, 1);
      PoFxActivateComponent(*((_QWORD *)this + 351), (unsigned int)v5, 1LL);
      v27 = a4;
    }
    else
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v24, (unsigned int)&Dxgk_ReportPowerComponentState, v25, (_DWORD)this, v5, 1);
      v27 = a4;
      PoFxActivateComponent(*((_QWORD *)this + 351), (unsigned int)v5, a4);
    }
    if ( v13 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v24, (unsigned int)&Dxgk_ReportPowerComponentState, v25, (_DWORD)this, v5, 0);
      v24 = *((_QWORD *)this + 351);
      if ( v24 )
        PoFxIdleComponent(v24, (unsigned int)v5, v27);
    }
  }
  if ( v4 )
  {
    DXGADAPTER::PowerRuntimeComponentIdleStateCallback(this, v5, 0, 1u);
    DXGADAPTER::PowerRuntimeComponentActiveCallback(this, v5, 1, v28);
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0pq_EtwWriteTransfer(v24, &Dxgk_SetPowerComponentActiveCBEnd, v25, this, v5);
  }
}
