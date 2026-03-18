/*
 * XREFs of VidSchCreatePeriodicFrameNotification @ 0x1C003C910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x1C003B70C (-VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z.c)
 *     McTemplateK0pqxxqpp_EtwWriteTransfer @ 0x1C003C2F0 (McTemplateK0pqxxqpp_EtwWriteTransfer.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C003CE00 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchControlVSyncAdapter @ 0x1C00A3620 (VidSchControlVSyncAdapter.c)
 *     VidSchIsVSyncAvailable @ 0x1C00AA260 (VidSchIsVSyncAvailable.c)
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
  _QWORD *Pool2; // rbx
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  const wchar_t *v15; // r9
  unsigned int v16; // ecx
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdi
  __int64 Timer; // rax
  __int64 v29; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-19h] BYREF
  __int128 v32; // [rsp+70h] [rbp-1h] BYREF
  __int128 v33; // [rsp+80h] [rbp+Fh]
  __int64 v34; // [rsp+90h] [rbp+1Fh]

  v6 = a4;
  v34 = 0LL;
  v9 = *((_QWORD *)a1 + a4 + 400);
  v32 = 0LL;
  v33 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (unsigned __int8)VidSchIsVSyncAvailable(a1, a4) && (int)VidSchControlVSyncAdapter(a1) >= 0 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 72LL, 1650551126LL);
    if ( !Pool2 )
    {
      _InterlockedIncrement(&dword_1C006E868);
      WdLogSingleEntry1(6LL, 13847LL);
      DxgCoreInterface[85](
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"ExAllocatePool for VIDSCH_PERIODIC_FRAME_NOTIFICATION_STORAGE failed, returning STATUS_NO_MEMORY.",
        13847LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v11 = -1073741801;
      VidSchControlVSyncAdapter(a1);
LABEL_34:
      *a6 = 0LL;
      return (unsigned int)v11;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &LockHandle);
    v12 = *(_QWORD *)(v9 + 78592);
    *((_BYTE *)Pool2 + 25) = *(_BYTE *)(v9 + 82720) + 1;
    if ( v12 )
    {
      v16 = 0;
      while ( *(_QWORD *)(v12 + 8LL * v16) )
      {
        if ( ++v16 >= 8 )
        {
          _InterlockedIncrement(&dword_1C006E868);
          v14 = 13889LL;
          WdLogSingleEntry1(6LL, 13889LL);
          v15 = L"Cap for ppPeriodicFrameNotificationStorageArray reached, returning STATUS_NO_MEMORY.";
          goto LABEL_15;
        }
      }
    }
    else
    {
      v13 = ExAllocatePool2(64LL, 64LL, 1650551126LL);
      *(_QWORD *)(v9 + 78592) = v13;
      if ( !v13 )
      {
        _InterlockedIncrement(&dword_1C006E868);
        v14 = 13865LL;
        WdLogSingleEntry1(6LL, 13865LL);
        v15 = L"ExAllocatePool for ppPeriodicFrameNotificationStorageArray failed, returning STATUS_NO_MEMORY.";
LABEL_15:
        DxgCoreInterface[85](0LL, 262145LL, 0xFFFFFFFFLL, v15, v14, 0LL, 0LL, 0LL, 0LL);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        VidSchControlVSyncAdapter(a1);
        ExFreePoolWithTag(Pool2, 0x62616956u);
        v11 = -1073741801;
        goto LABEL_34;
      }
      LOBYTE(v16) = 0;
    }
    *((_BYTE *)Pool2 + 24) = v16;
    *(_QWORD *)(*(_QWORD *)(v9 + 78592) + 8LL * (unsigned __int8)*((_DWORD *)Pool2 + 6)) = Pool2;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 36));
    v17 = *((_DWORD *)a1 + 58) == 1;
    v18 = *((_QWORD *)a1 + 2);
    *Pool2 = a2;
    Pool2[8] = v18;
    v19 = *(_QWORD *)(a5 + 16);
    Pool2[6] = a3;
    Pool2[2] = v19;
    *((_DWORD *)Pool2 + 2) = v6;
    if ( v17 )
    {
      v11 = -1073741822;
    }
    else
    {
      v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 2792) + 128LL) + 4000 * v6 + 1088);
      DWORD2(v33) = *((_DWORD *)Pool2 + 6);
      DWORD2(v32) = v20;
      *(_QWORD *)&v33 = v19;
      v21 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[70])(*(_QWORD *)(v18 + 2792), &v32);
      v11 = v21;
      if ( v21 >= 0 )
      {
        v22 = v34;
        Pool2[4] = v34;
        goto LABEL_30;
      }
      if ( (unsigned int)(v21 + 0x3FFFFFFF) > 1 )
      {
LABEL_30:
        *a6 = Pool2;
        if ( (byte_1C006E941 & 2) != 0 )
          McTemplateK0pqxxqpp_EtwWriteTransfer(
            v22,
            &EventCreatePeriodicFrameNotification,
            v23,
            *Pool2,
            *((_DWORD *)Pool2 + 2),
            Pool2[2],
            Pool2[6],
            *((_DWORD *)Pool2 + 6),
            Pool2[4],
            Pool2[5],
            LockHandle.LockQueue.Next,
            LockHandle.LockQueue.Lock,
            *(_QWORD *)&LockHandle.OldIrql);
        if ( v11 >= 0 )
          return (unsigned int)v11;
        goto LABEL_33;
      }
    }
    v24 = *((_DWORD *)a1 + 58);
    if ( v24 == 2 )
    {
      WdLogSingleEntry1(3LL, v11);
      v11 = -1073741822;
LABEL_33:
      VidSchDestroyPeriodicFrameNotification(*(PVOID *)(*(_QWORD *)(v9 + 78592)
                                                      + 8LL * (unsigned __int8)*((_DWORD *)Pool2 + 6)));
      goto LABEL_34;
    }
    if ( v24 != 1 )
    {
      WdLogSingleEntry1(3LL, v11);
      if ( bTracingEnabled )
      {
        if ( (byte_1C006E941 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventPerformanceWarning, v26, 25);
      }
    }
    v27 = VidSchCalculatePeriodicMonitoredFenceTimerDueTime(*(_QWORD *)(v9 + 44120), Pool2[6], Pool2[2], -1);
    Timer = ExAllocateTimer(VidSchPeriodicMonitoredFenceTimerCallback, Pool2, 4LL);
    Pool2[5] = Timer;
    if ( !Timer )
    {
      WdLogSingleEntry0(1LL);
      DxgCoreInterface[85](
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"ExAllocateTimer for VIDSCH_PERIODIC_FRAME_NOTIFICATION_STORAGE failed, returning STATUS_NO_MEMORY.",
        13952LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v11 = -1073741801;
      goto LABEL_33;
    }
    v29 = 0LL;
    if ( v27 <= 0 )
      v29 = v27;
    ExSetTimer(Timer, v29, 0LL, 0LL);
    v11 = 0;
    goto LABEL_30;
  }
  return 3223191558LL;
}
