/*
 * XREFs of VidSchiDecrementContextReference @ 0x1C00105B0
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00083C0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C0013430 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C0013BC0 (VidSchiSetTransferContextRunningTime.c)
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C00332A0 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 *     VidSchiReportHwHang @ 0x1C003CE54 (VidSchiReportHwHang.c)
 *     VidSchTerminateContext @ 0x1C0069190 (VidSchTerminateContext.c)
 *     VidSchiRun_PriorityTable @ 0x1C008D3D0 (VidSchiRun_PriorityTable.c)
 *     VidSchTerminateAdapter @ 0x1C00D3950 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0006950 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiDecrementDeviceReference @ 0x1C00104EC (VidSchiDecrementDeviceReference.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00112F8 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiDecrementContextReference(struct _VIDSCH_CONTEXT *a1, int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  struct _VIDSCH_CONTEXT **v7; // rdx
  __int64 v8; // rdx
  struct _VIDSCH_CONTEXT **v9; // rcx
  _QWORD *v10; // rax
  void *v11; // rcx
  _QWORD *v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1712), &LockHandle);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 18, 0xFFFFFFFF) == 1 )
  {
    v5 = *((_QWORD *)a1 + 12);
    if ( *(struct _VIDSCH_CONTEXT **)(v5 + 224) == a1 )
      *(_QWORD *)(v5 + 224) = 0LL;
    v6 = *((_QWORD *)a1 + 1);
    if ( *(struct _VIDSCH_CONTEXT **)(v6 + 8) != (struct _VIDSCH_CONTEXT *)((char *)a1 + 8)
      || (v7 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 2), *v7 != (struct _VIDSCH_CONTEXT *)((char *)a1 + 8))
      || (*v7 = (struct _VIDSCH_CONTEXT *)v6,
          *(_QWORD *)(v6 + 8) = v7,
          v8 = *((_QWORD *)a1 + 3),
          *(struct _VIDSCH_CONTEXT **)(v8 + 8) != (struct _VIDSCH_CONTEXT *)((char *)a1 + 24))
      || (v9 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 4), *v9 != (struct _VIDSCH_CONTEXT *)((char *)a1 + 24)) )
    {
      __fastfail(3u);
    }
    *v9 = (struct _VIDSCH_CONTEXT *)v8;
    *(_QWORD *)(v8 + 8) = v9;
    while ( 1 )
    {
      v10 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v4 + 1720), (_QWORD **)a1 + 89, (_DWORD *)a1 + 182);
      if ( !v10 )
        break;
      ExFreePoolWithTag(v10 - 1, 0);
    }
    if ( (*((_DWORD *)a1 + 28) & 0x100) != 0 )
    {
      while ( 1 )
      {
        v12 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v4 + 1720), (_QWORD **)a1 + 92, (_DWORD *)a1 + 188);
        if ( !v12 )
          break;
        ExFreePoolWithTag(v12 - 1, 0);
      }
    }
    if ( bTracingEnabled )
      VidSchiFlushGpuWorkEntries(a1);
    v11 = (void *)*((_QWORD *)a1 + 123);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    VidSchiDecrementDeviceReference(*((char **)a1 + 13), 1);
    ExFreePoolWithTag(a1, 0);
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
