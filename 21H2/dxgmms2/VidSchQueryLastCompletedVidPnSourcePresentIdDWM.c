/*
 * XREFs of VidSchQueryLastCompletedVidPnSourcePresentIdDWM @ 0x1C00351C0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C0032F50 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 */

__int64 __fastcall VidSchQueryLastCompletedVidPnSourcePresentIdDWM(
        KSPIN_LOCK *a1,
        __int64 a2,
        __int64 a3,
        struct _D3DKMT_PRESENT_STATS_DWM *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned int v7; // r15d
  __int64 v9; // rax
  __int64 v11; // rax
  struct _VIDSCH_DEVICE *v12; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  v7 = a3;
  if ( !a4 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v9);
    return 3221225485LL;
  }
  if ( (unsigned int)a2 >= *((_DWORD *)a1 + 10) )
  {
    v11 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v11 + 24) = v5;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v11);
    return 3221225485LL;
  }
  _mm_lfence();
  KeAcquireInStackQueuedSpinLock(a1 + 214, &LockHandle);
  v12 = *(struct _VIDSCH_DEVICE **)(a1[v5 + 388] + 16);
  if ( v12 )
    VidSchQueryLastCompletedPresentIdDWMInternal(a1, v12, v5, v7, a4);
  else
    v4 = -1073741811;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
