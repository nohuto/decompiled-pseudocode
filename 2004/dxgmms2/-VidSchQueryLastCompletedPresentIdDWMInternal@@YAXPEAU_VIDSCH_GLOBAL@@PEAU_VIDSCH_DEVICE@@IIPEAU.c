/*
 * XREFs of ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C0032FA0
 * Callers:
 *     VidSchQueryLastCompletedVidPnSourcePresentIdDWM @ 0x1C0035200 (VidSchQueryLastCompletedVidPnSourcePresentIdDWM.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchQueryLastCompletedPresentIdDWMInternal(
        KSPIN_LOCK *a1,
        struct _VIDSCH_DEVICE *a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DKMT_PRESENT_STATS_DWM *a5)
{
  __int64 v6; // rsi
  __int64 v8; // rbx
  UINT v9; // edx
  __int64 v10; // r8
  __int64 v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v6 = a4;
  v8 = a3;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(a1 + 215, &LockHandle);
  a5->PresentCount = *((_DWORD *)a2 + v8 + 127);
  a5->PresentRefreshCount = *((_DWORD *)a2 + 2 * v8 + 144);
  a5->PresentQPCTime.QuadPart = *((_QWORD *)a2 + v8 + 88);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v9 = 0;
  a5->SyncRefreshCount = *(_DWORD *)(a1[v8 + 388] + 33192);
  a5->SyncQPCTime.QuadPart = *(_QWORD *)(a1[v8 + 388] + 33200);
  v10 = *(int *)(216 * v6 + a1[v8 + 388] + 172);
  if ( (int)v10 <= -1 )
    v11 = 0LL;
  else
    v11 = a1[404] + 152 * v10;
  if ( v11 )
    v9 = *(_DWORD *)(v11 + 100);
  a5->CustomPresentDuration = v9;
}
