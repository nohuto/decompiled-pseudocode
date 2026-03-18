/*
 * XREFs of VidSchCreatePeriodicFrameNotification @ 0x1C0033CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E80 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x1C0032CFC (-VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z.c)
 *     McTemplateK0pqxxqpp_EtwWriteTransfer @ 0x1C00338AC (McTemplateK0pqxxqpp_EtwWriteTransfer.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C0034160 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchControlVSyncAdapter @ 0x1C0087C50 (VidSchControlVSyncAdapter.c)
 *     VidSchIsVSyncAvailable @ 0x1C00D2F90 (VidSchIsVSyncAvailable.c)
 */

__int64 __fastcall VidSchCreatePeriodicFrameNotification(
        struct _VIDSCH_GLOBAL *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v6; // r14
  __int64 v9; // r13
  _QWORD *PoolWithTag; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // rdx
  PVOID v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // eax
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 Timer; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-19h] BYREF
  __int128 v40; // [rsp+70h] [rbp-1h] BYREF
  __int128 v41; // [rsp+80h] [rbp+Fh]
  __int64 v42; // [rsp+90h] [rbp+1Fh]

  v6 = a4;
  v42 = 0LL;
  v9 = *((_QWORD *)a1 + a4 + 388);
  v40 = 0LL;
  v41 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (unsigned __int8)VidSchIsVSyncAvailable(a1, a4) && (int)VidSchControlVSyncAdapter(a1) >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x48uLL, 0x62616956u);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      _InterlockedIncrement(&dword_1C00517B8);
      v13 = WdLogNewEntry5_WdLowResource(v11);
      *(_QWORD *)(v13 + 24) = 13454LL;
      WdLogEvent5_WdLowResource(v13);
      v14 = -1073741801;
      VidSchControlVSyncAdapter(a1);
LABEL_34:
      *a6 = 0LL;
      return (unsigned int)v14;
    }
    memset(PoolWithTag, 0, 0x48uLL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 214, &LockHandle);
    *((_BYTE *)v12 + 25) = *(_BYTE *)(v9 + 70576) + 1;
    v15 = *(_QWORD *)(v9 + 66448);
    if ( v15 )
    {
      v19 = 0LL;
      while ( *(_QWORD *)(v15 + 8 * v19) )
      {
        v19 = (unsigned int)(v19 + 1);
        if ( (unsigned int)v19 >= 8 )
        {
          _InterlockedIncrement(&dword_1C00517B8);
          v18 = WdLogNewEntry5_WdLowResource(v19);
          *(_QWORD *)(v18 + 24) = 13500LL;
          goto LABEL_15;
        }
      }
    }
    else
    {
      v16 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x40uLL, 0x62616956u);
      *(_QWORD *)(v9 + 66448) = v16;
      if ( !v16 )
      {
        _InterlockedIncrement(&dword_1C00517B8);
        v18 = WdLogNewEntry5_WdLowResource(v17);
        *(_QWORD *)(v18 + 24) = 13474LL;
LABEL_15:
        WdLogEvent5_WdLowResource(v18);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        VidSchControlVSyncAdapter(a1);
        ExFreePoolWithTag(v12, 0x62616956u);
        v14 = -1073741801;
        goto LABEL_34;
      }
      memset(v16, 0, 0x40uLL);
      LOBYTE(v19) = 0;
    }
    *((_BYTE *)v12 + 24) = v19;
    *(_QWORD *)(*(_QWORD *)(v9 + 66448) + 8LL * (unsigned __int8)*((_DWORD *)v12 + 6)) = v12;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
    *v12 = a2;
    v12[8] = *((_QWORD *)a1 + 2);
    v12[2] = *(_QWORD *)(a5 + 16);
    v12[6] = a3;
    *((_DWORD *)v12 + 2) = v6;
    if ( *((_DWORD *)a1 + 56) == 1 )
    {
      v14 = -1073741822;
    }
    else
    {
      v22 = *((_QWORD *)a1 + 2);
      v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 2672) + 112LL) + 3968 * v6 + 1068);
      *(_QWORD *)&v41 = *(_QWORD *)(a5 + 16);
      DWORD2(v40) = v23;
      DWORD2(v41) = *((_DWORD *)v12 + 6);
      v24 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[65])(*(_QWORD *)(v22 + 2672), &v40);
      v14 = v24;
      if ( v24 >= 0 )
      {
        v21 = v42;
        v12[4] = v42;
        goto LABEL_30;
      }
      if ( (unsigned int)(v24 + 0x3FFFFFFF) > 1 )
      {
LABEL_30:
        *a6 = v12;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
          McTemplateK0pqxxqpp_EtwWriteTransfer(
            v21,
            &EventCreatePeriodicFrameNotification,
            v25,
            *v12,
            *((_DWORD *)v12 + 2),
            v12[2],
            v12[6],
            *((_DWORD *)v12 + 6),
            v12[4],
            v12[5],
            LockHandle.LockQueue.Next,
            LockHandle.LockQueue.Lock,
            *(_QWORD *)&LockHandle.OldIrql);
        if ( v14 >= 0 )
          return (unsigned int)v14;
        goto LABEL_33;
      }
    }
    v26 = *((_DWORD *)a1 + 56);
    if ( v26 == 2 )
    {
      v27 = WdLogNewEntry5_WdWarning(v21, v20);
      *(_QWORD *)(v27 + 24) = v14;
      WdLogEvent5_WdWarning(v27);
      v14 = -1073741822;
LABEL_33:
      VidSchDestroyPeriodicFrameNotification(*(PVOID *)(*(_QWORD *)(v9 + 66448)
                                                      + 8LL * (unsigned __int8)*((_DWORD *)v12 + 6)));
      goto LABEL_34;
    }
    if ( v26 != 1 )
    {
      v28 = WdLogNewEntry5_WdWarning(v21, v20);
      *(_QWORD *)(v28 + 24) = v14;
      WdLogEvent5_WdWarning(v28);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v29, &EventPerformanceWarning, v30, 25);
      }
    }
    v31 = VidSchCalculatePeriodicMonitoredFenceTimerDueTime(*(_QWORD *)(v9 + 33200), v12[6], v12[2], -1);
    Timer = ExAllocateTimer(VidSchPeriodicMonitoredFenceTimerCallback, v12, 4LL);
    v12[5] = Timer;
    if ( !Timer )
    {
      v36 = WdLogNewEntry5_WdAssertion(v34, v33, v35);
      WdLogEvent5_WdAssertion(v36);
      v14 = -1073741801;
      goto LABEL_33;
    }
    v37 = 0LL;
    if ( v31 <= 0 )
      v37 = v31;
    ExSetTimer(Timer, v37, 0LL, 0LL);
    v14 = 0;
    goto LABEL_30;
  }
  return 3223191558LL;
}
