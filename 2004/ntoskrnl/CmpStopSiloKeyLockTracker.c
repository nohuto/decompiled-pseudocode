/*
 * XREFs of CmpStopSiloKeyLockTracker @ 0x14086F578
 * Callers:
 *     CmCleanupServerSiloState @ 0x14086FFD8 (CmCleanupServerSiloState.c)
 *     CmpFreeSiloContextCallback @ 0x140870010 (CmpFreeSiloContextCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpFreeSiloKeyLockEntry @ 0x14086F414 (CmpFreeSiloKeyLockEntry.c)
 */

ULONG_PTR *__fastcall CmpStopSiloKeyLockTracker(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rdx
  ULONG_PTR **v4; // rax
  ULONG_PTR *result; // rax
  ULONG_PTR *v6; // rax
  ULONG_PTR v7; // rcx
  ULONG_PTR v8; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR *v9; // [rsp+28h] [rbp-8h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  *(_DWORD *)(BugCheckParameter2 + 8) = *(_DWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFFC | 2;
  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  v9 = &v8;
  v8 = (ULONG_PTR)&v8;
  if ( v3 != BugCheckParameter2 + 16 )
  {
    v4 = *(ULONG_PTR ***)(BugCheckParameter2 + 24);
    v8 = v3;
    v9 = (ULONG_PTR *)v4;
    *(_QWORD *)(v3 + 8) = &v8;
    *v4 = &v8;
    *(_QWORD *)(BugCheckParameter2 + 24) = BugCheckParameter2 + 16;
    *(_QWORD *)(BugCheckParameter2 + 16) = BugCheckParameter2 + 16;
  }
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  result = &v8;
  if ( (ULONG_PTR *)v8 != &v8 )
  {
    CmpLockRegistry();
    v6 = (ULONG_PTR *)v8;
    v7 = *(_QWORD *)v8;
    if ( *(ULONG_PTR **)(v8 + 8) != &v8 )
LABEL_5:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(ULONG_PTR **)(v7 + 8) != v6 )
        goto LABEL_5;
      v8 = v7;
      *(_QWORD *)(v7 + 8) = &v8;
      if ( v6 == &v8 )
        return (ULONG_PTR *)CmpUnlockRegistry();
      CmpFreeSiloKeyLockEntry(v6);
      v6 = (ULONG_PTR *)v8;
      if ( *(ULONG_PTR **)(v8 + 8) != &v8 )
        goto LABEL_5;
      v7 = *(_QWORD *)v8;
    }
  }
  return result;
}
