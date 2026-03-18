/*
 * XREFs of ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0032A70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024BB4 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqqiix_EtwWriteTransfer @ 0x1C002D99C (McTemplateK0pqqiix_EtwWriteTransfer.c)
 *     VidSchiCalculatePeriodicTargetFrameNumber @ 0x1C002EE38 (VidSchiCalculatePeriodicTargetFrameNumber.c)
 *     ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x1C00329D0 (-VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0035530 (VidSchSignalSyncObjectsFromCpu.c)
 */

void __fastcall VidSchPeriodicMonitoredFenceTimerCallback(struct _EX_TIMER *a1, struct _VIDSCH_SYNC_OBJECT **a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // [rsp+20h] [rbp-58h]
  int v16; // [rsp+28h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF
  int v18; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v19; // [rsp+90h] [rbp+18h] BYREF

  v3 = *((_QWORD *)*a2 + 1);
  v4 = *(_QWORD *)(v3 + 8LL * *((unsigned int *)a2 + 2) + 3104);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 1712), &LockHandle);
  v5 = *(_QWORD *)(v4 + 33200);
  v6 = *(_QWORD *)(v4 + 33192);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v18 = 0;
  v19 = VidSchiCalculatePeriodicTargetFrameNumber((__int64)a2, v5, v6, &v18);
  if ( (unsigned __int64)a2[7] < v19 )
  {
    if ( (int)VidSchSignalSyncObjectsFromCpu(1u, a2, 0, &v19) >= 0 )
      a2[7] = (struct _VIDSCH_SYNC_OBJECT *)v19;
    v10 = VidSchCalculatePeriodicMonitoredFenceTimerDueTime(v5, (__int64)a2[6], (__int64)a2[2], v18);
    if ( v10 > 0 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, &EventPerformanceWarning, v11, 25);
      v10 = -(__int64)a2[6];
    }
    ExSetTimer(a2[5], v10, 0LL, 0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      v16 = *((_DWORD *)a2 + 6);
      v15 = *((_DWORD *)a2 + 2);
      McTemplateK0pqqiix_EtwWriteTransfer(v13, v12, v14, *a2, v15, v16, v5, v10, v19);
    }
  }
  else
  {
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, &EventPerformanceWarning, v8, 25);
    }
    ExSetTimer(a2[5], -(__int64)a2[6], 0LL, 0LL);
  }
}
