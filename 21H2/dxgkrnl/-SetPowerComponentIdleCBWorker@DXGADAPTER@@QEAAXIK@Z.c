/*
 * XREFs of ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C00170F0
 * Callers:
 *     DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x1C0017080 (DxgSetPowerComponentIdleForceAsyncCBInternal.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C0024620 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0025C78 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0009F60 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C001A928 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0044D64 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C00540C8 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?RecordIdle@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0056D48 (-RecordIdle@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentIdleCBWorker(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r14d
  __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  bool v8; // zf
  DXGADAPTER *v9; // rcx
  DXGADAPTER *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+48h] [rbp-20h] BYREF

  v3 = a3;
  v4 = a2;
  if ( !*((_QWORD *)this + 363) )
    return;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_SetPowerComponentIdleCB, a3, this, a2);
  v6 = *((_QWORD *)this + 362) + 520 * v4;
  v7 = *(_QWORD *)(v6 + 512);
  if ( v7 )
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordIdle((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v7 + 136));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 504), &LockHandle);
  if ( (int)--*(_DWORD *)(v6 + 352) <= 0 )
  {
    if ( *(_BYTE *)(v6 + 360) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( *(_DWORD *)(v6 + 208) == 7 )
        DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v6 + 4), 1u, 1);
      DXGADAPTER::PowerRuntimeComponentActiveCallback(this, v4, 0);
      DXGADAPTER::PowerRuntimeComponentIdleStateCallback(this, v4, 1u, 1u);
      goto LABEL_17;
    }
    v8 = *(_QWORD *)(v6 + 472) == 0LL;
    *(_QWORD *)(v6 + 480) = MEMORY[0xFFFFF78000000014];
    if ( v8 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( *(_DWORD *)(v6 + 208) == 7 )
        DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v6 + 4), 1u, 1);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v15, (unsigned int)&Dxgk_ReportPowerComponentState, v14, (_DWORD)this, v4, 0);
      v16 = *((_QWORD *)this + 363);
      if ( v16 )
        PoFxIdleComponent(v16, (unsigned int)v4, v3);
      goto LABEL_17;
    }
    if ( *(_DWORD *)(v6 + 208) != 7
      || (KeReleaseInStackQueuedSpinLock(&LockHandle),
          DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v6 + 4), 1u, 1),
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 504), &LockHandle),
          *(int *)(v6 + 352) <= 0) )
    {
      *(_QWORD *)(v6 + 488) = *(_QWORD *)(v6 + 480) + *(_QWORD *)(v6 + 472);
      memset(&v20, 0, sizeof(v20));
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 429, &v20);
      v9 = (DXGADAPTER *)*((_QWORD *)this + 424);
      v10 = (DXGADAPTER *)((char *)this + 3384);
      if ( v9 != (DXGADAPTER *)((char *)this + 3384) )
      {
        while ( *(_QWORD *)(v6 + 488) < *((_QWORD *)v9 + 6) )
        {
          v9 = (DXGADAPTER *)*((_QWORD *)v9 + 1);
          if ( v9 == v10 )
            goto LABEL_12;
        }
        v17 = *(_QWORD *)v9;
        v18 = (_QWORD *)(v6 + 440);
        if ( *(DXGADAPTER **)(*(_QWORD *)v9 + 8LL) != v9 )
          goto LABEL_39;
        *v18 = v17;
        *(_QWORD *)(v6 + 448) = v9;
        *(_QWORD *)(v17 + 8) = v18;
        *(_QWORD *)v9 = v18;
        if ( v9 != v10 )
        {
LABEL_15:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v20);
          goto LABEL_16;
        }
      }
LABEL_12:
      v11 = *(_QWORD *)v10;
      v12 = (_QWORD *)(v6 + 440);
      if ( *(DXGADAPTER **)(*(_QWORD *)v10 + 8LL) == v10 )
      {
        *v12 = v11;
        *(_QWORD *)(v6 + 448) = v10;
        *(_QWORD *)(v11 + 8) = v12;
        *(_QWORD *)v10 = v12;
        v13 = *(_QWORD *)(v6 + 472);
        if ( !*((_BYTE *)this + 3333) )
        {
          *((_BYTE *)this + 3333) = 1;
          KeSetTimer((PKTIMER)((char *)this + 3448), (LARGE_INTEGER)-v13, (PKDPC)((char *)this + 3512));
        }
        goto LABEL_15;
      }
LABEL_39:
      __fastfail(3u);
    }
  }
LABEL_16:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_17:
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_SetPowerComponentIdleCBEnd, v14, this, v4);
  }
}
