/*
 * XREFs of VidSchTerminateHwQueue @ 0x1C003A9C0
 * Callers:
 *     VidSchCreateHwQueue @ 0x1C0039920 (VidSchCreateHwQueue.c)
 *     VidSchTerminateAdapter @ 0x1C00D3950 (VidSchTerminateAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     VidSchFlushHwQueue @ 0x1C0034B30 (VidSchFlushHwQueue.c)
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z @ 0x1C0037400 (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0038074 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

void __fastcall VidSchTerminateHwQueue(struct VIDSCH_HW_QUEUE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi

  v4 = *((_QWORD *)a1 + 5);
  VidSchFlushHwQueue((__int64)a1, a2, a3, a4);
  if ( (*(_DWORD *)(v4 + 56) & 1) != 0 && *((_QWORD *)a1 + 14) )
  {
    ((void (__fastcall *)(_QWORD))DxgCoreInterface[24])(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 24LL) + 8LL));
    *((_QWORD *)a1 + 14) = 0LL;
  }
  VidSchiRemoveHwQueueFromSyncPoints(a1);
  VidSchiDecrementHwQueueReference((char *)a1);
}
