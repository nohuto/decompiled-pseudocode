/*
 * XREFs of CmpStopSiloKeyLockTracker @ 0x140872A78
 * Callers:
 *     CmCleanupServerSiloState @ 0x14087353C (CmCleanupServerSiloState.c)
 *     CmpFreeSiloContextCallback @ 0x140873580 (CmpFreeSiloContextCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpFreeSiloKeyLockEntry @ 0x140872914 (CmpFreeSiloKeyLockEntry.c)
 */

ULONG_PTR *__fastcall CmpStopSiloKeyLockTracker(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rdx
  ULONG_PTR **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  ULONG_PTR *result; // rax
  ULONG_PTR *v9; // rax
  ULONG_PTR v10; // rcx
  ULONG_PTR v11; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR *v12; // [rsp+28h] [rbp-8h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  *(_DWORD *)(BugCheckParameter2 + 8) = *(_DWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFFC | 2;
  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  v12 = &v11;
  v11 = (ULONG_PTR)&v11;
  if ( v3 != BugCheckParameter2 + 16 )
  {
    v4 = *(ULONG_PTR ***)(BugCheckParameter2 + 24);
    v11 = v3;
    v12 = (ULONG_PTR *)v4;
    *(_QWORD *)(v3 + 8) = &v11;
    *v4 = &v11;
    *(_QWORD *)(BugCheckParameter2 + 24) = BugCheckParameter2 + 16;
    *(_QWORD *)(BugCheckParameter2 + 16) = BugCheckParameter2 + 16;
  }
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  result = &v11;
  if ( (ULONG_PTR *)v11 != &v11 )
  {
    CmpLockRegistry();
    v9 = (ULONG_PTR *)v11;
    v10 = *(_QWORD *)v11;
    if ( *(ULONG_PTR **)(v11 + 8) != &v11 )
LABEL_5:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(ULONG_PTR **)(v10 + 8) != v9 )
        goto LABEL_5;
      v11 = v10;
      *(_QWORD *)(v10 + 8) = &v11;
      if ( v9 == &v11 )
        return (ULONG_PTR *)CmpUnlockRegistry();
      CmpFreeSiloKeyLockEntry(v9);
      v9 = (ULONG_PTR *)v11;
      if ( *(ULONG_PTR **)(v11 + 8) != &v11 )
        goto LABEL_5;
      v10 = *(_QWORD *)v11;
    }
  }
  return result;
}
