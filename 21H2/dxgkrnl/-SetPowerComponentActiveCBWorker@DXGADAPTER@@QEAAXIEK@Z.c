/*
 * XREFs of ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0014D90
 * Callers:
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0014C64 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C0014CC0 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0025B90 (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0009F60 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C001A928 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0044D64 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C00540C8 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0056C84 (-RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentActiveCBWorker(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  char v4; // bl
  __int64 v5; // rbp
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  char v10; // r15
  char v11; // r13
  char v12; // r12
  __int64 v13; // rbx
  _QWORD *v14; // r13
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // r8
  unsigned int v23; // ebx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 **v26; // rdx
  int v27; // ecx
  int v28; // r8d
  unsigned int v29; // edx
  __int64 v30; // rcx
  struct _KLOCK_QUEUE_HANDLE v31; // [rsp+30h] [rbp-B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+48h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-88h] BYREF
  char *v34; // [rsp+80h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE v35; // [rsp+88h] [rbp-60h] BYREF
  char v36; // [rsp+A0h] [rbp-48h]
  char v38; // [rsp+100h] [rbp+18h]

  v38 = a3;
  v4 = a3;
  v5 = a2;
  if ( !*((_QWORD *)this + 363) )
    return;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_SetPowerComponentActiveCB, a3, this, a2);
  v7 = *((_QWORD *)this + 362);
  v8 = 520 * v5;
  v9 = *(_QWORD *)(520 * v5 + v7 + 512);
  if ( v9 )
  {
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordActivity((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v9 + 136));
    if ( (*((_DWORD *)this + 666) & 0x10) != 0 )
    {
      v29 = *((_DWORD *)this + 386);
      v30 = 0LL;
      if ( v29 )
      {
        while ( *(_DWORD *)(*((_QWORD *)this + 498) + 4 * v30) )
        {
          v30 = (unsigned int)(v30 + 1);
          if ( (unsigned int)v30 >= v29 )
            goto LABEL_63;
        }
        goto LABEL_6;
      }
    }
    else if ( !**((_DWORD **)this + 498) )
    {
      goto LABEL_6;
    }
LABEL_63:
    memset(&v32, 0, sizeof(v32));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 538, &v32);
    *(_BYTE *)(*(_QWORD *)(v8 + v7 + 512) + 240LL) = 1;
    if ( !*((_BYTE *)this + 4312) )
    {
      *((_BYTE *)this + 4312) = 1;
      _InterlockedIncrement64((volatile signed __int64 *)this + 3);
      *((_QWORD *)this + 521) = -1LL;
      KeSetTimer((PKTIMER)((char *)this + 4176), (LARGE_INTEGER)-120000LL, (PKDPC)((char *)this + 4240));
    }
    KeReleaseInStackQueuedSpinLock(&v32);
  }
LABEL_6:
  v10 = v4;
  v11 = 0;
  v12 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + v7 + 504), &LockHandle);
  if ( (int)++*(_DWORD *)(v8 + v7 + 352) > 1 )
  {
    v11 = 1;
    goto LABEL_23;
  }
  v13 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v8 + v7 + 480);
  if ( !*(_BYTE *)(v8 + v7 + 360) )
  {
    v14 = (_QWORD *)(v8 + v7 + 400);
    if ( *v14 )
    {
      v36 = 0;
      v34 = (char *)this + 3360;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 420, &v35);
      *((_QWORD *)this + 421) = KeGetCurrentThread();
      v15 = *(_QWORD *)(v8 + v7 + 400);
      v36 = 1;
      if ( !v15 )
        goto LABEL_16;
      if ( *(_QWORD **)(v15 + 8) != v14 )
        goto LABEL_67;
      v16 = (_QWORD *)v14[1];
      if ( (_QWORD *)*v16 != v14 )
        goto LABEL_67;
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = 0LL;
      if ( *((DXGADAPTER **)this + 418) == (DXGADAPTER *)((char *)this + 3344) && *((_BYTE *)this + 3332) )
      {
        v17 = *((_QWORD *)this + 350);
        *((_BYTE *)this + 3332) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v17 + 624) + 8LL) + 864LL))(
          *(_QWORD *)(v17 + 632),
          0LL);
      }
      if ( v36 )
      {
LABEL_16:
        v36 = 0;
        *((_QWORD *)v34 + 1) = 0LL;
        KeReleaseInStackQueuedSpinLock(&v35);
      }
      LODWORD(v5) = a2;
    }
    memset(&v31, 0, sizeof(v31));
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 429, &v31);
    v18 = (__int64 *)(v8 + v7 + 440);
    v19 = (__int64 *)*v18;
    if ( !*v18 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v31);
      v20 = *(_QWORD *)(v8 + v7 + 496);
      if ( v13 < v20 )
        *(_QWORD *)(v8 + v7 + 472) = v20;
      v10 = 1;
      v11 = 0;
      goto LABEL_22;
    }
    if ( (__int64 *)v19[1] == v18 )
    {
      v26 = (__int64 **)v18[1];
      if ( *v26 == v18 )
      {
        *v26 = v19;
        v19[1] = (__int64)v26;
        *v18 = 0LL;
        if ( *((DXGADAPTER **)this + 423) == (DXGADAPTER *)((char *)this + 3384) )
        {
          KeCancelTimer((PKTIMER)((char *)this + 3448));
          *((_BYTE *)this + 3333) = 0;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v31);
        if ( v13 > *(_QWORD *)(v8 + v7 + 496) )
          *(_QWORD *)(v8 + v7 + 472) = 0LL;
        v11 = 1;
        goto LABEL_22;
      }
    }
LABEL_67:
    __fastfail(3u);
  }
  v10 = 0;
  v12 = 1;
LABEL_22:
  v4 = v38;
LABEL_23:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( *(_DWORD *)(v8 + v7 + 208) == 7 )
    DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v8 + v7 + 4), 0, 1);
  if ( v10 )
  {
    if ( v4 )
    {
      if ( KeGetCurrentIrql() >= 2u )
        WdLogSingleEntry5(0LL, 275LL, 20LL, this, 0LL, 0LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v27, (unsigned int)&Dxgk_ReportPowerComponentState, v28, (_DWORD)this, v5, 1);
      PoFxActivateComponent(*((_QWORD *)this + 363), (unsigned int)v5, 1LL);
      v23 = a4;
    }
    else
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v21, (unsigned int)&Dxgk_ReportPowerComponentState, v22, (_DWORD)this, v5, 1);
      v23 = a4;
      PoFxActivateComponent(*((_QWORD *)this + 363), (unsigned int)v5, a4);
    }
    if ( v11 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v24, (unsigned int)&Dxgk_ReportPowerComponentState, v22, (_DWORD)this, v5, 0);
      v25 = *((_QWORD *)this + 363);
      if ( v25 )
        PoFxIdleComponent(v25, (unsigned int)v5, v23);
    }
  }
  if ( v12 )
  {
    DXGADAPTER::PowerRuntimeComponentIdleStateCallback(this, v5, 0, 1u);
    DXGADAPTER::PowerRuntimeComponentActiveCallback(this, v5, 1u);
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_SetPowerComponentActiveCBEnd, v22, this, v5);
  }
}
