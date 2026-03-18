/*
 * XREFs of ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x1C003BA50
 * Callers:
 *     VidSchQueryLastCompletedVidPnSourcePresentIdDWM @ 0x1C003DB80 (VidSchQueryLastCompletedVidPnSourcePresentIdDWM.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchQueryLastCompletedPresentIdDWMInternal(
        KSPIN_LOCK *a1,
        struct _VIDSCH_DEVICE *a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DKMT_PRESENT_STATS_DWM2 *a5)
{
  __int64 v6; // rsi
  __int64 v8; // rbx
  KSPIN_LOCK v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v6 = a4;
  v8 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel(a1 + 217, &LockHandle);
  *((_DWORD *)a5 + 1) = *((_DWORD *)a2 + v8 + 127);
  *((_DWORD *)a5 + 2) = *((_DWORD *)a2 + 2 * v8 + 144);
  *((_QWORD *)a5 + 2) = *((_QWORD *)a2 + v8 + 88);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v9 = a1[v8 + 400];
  *((_DWORD *)a5 + 6) = *(_DWORD *)(v9 + 44104);
  *((_QWORD *)a5 + 4) = *(_QWORD *)(v9 + 44120);
  *((_DWORD *)a5 + 11) = *(_DWORD *)(v9 + 44112);
  *((_QWORD *)a5 + 6) = *(_QWORD *)(v9 + 44128);
  v10 = *(int *)(280 * v6 + v9 + 180);
  if ( (int)v10 > -1 && (v11 = a1[416] + 160 * v10) != 0 )
    v12 = *(_DWORD *)(v11 + 100);
  else
    v12 = 0;
  *((_DWORD *)a5 + 10) = v12;
}
