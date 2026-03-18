/*
 * XREFs of MiInsertHotPatchRecord @ 0x1408CD1E0
 * Callers:
 *     MiLoadHotPatch @ 0x1408CD410 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1408CD770 (MiLoadHotPatchForUserSid.c)
 *     MmRegisterHotPatch @ 0x140A954CC (MmRegisterHotPatch.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlAvlInsertNodeEx @ 0x14022E170 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     RtlAvlRemoveNode @ 0x1402C3340 (RtlAvlRemoveNode.c)
 *     MiCompareHotPatchNodes @ 0x1408CC070 (MiCompareHotPatchNodes.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiInsertHotPatchRecord(unsigned __int64 *a1, _QWORD *a2, int a3)
{
  unsigned __int64 *v3; // rbp
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rsi
  bool v8; // r14
  unsigned __int64 *v9; // rdi
  int v10; // r15d
  int v11; // eax
  unsigned __int64 v12; // rax

  v3 = 0LL;
  v5 = (__int64)a2;
  if ( a3 )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&MiHotPatchListLock, 0LL);
    v5 = (__int64)a2;
  }
  v8 = 0;
LABEL_5:
  v9 = (unsigned __int64 *)*a1;
  v10 = 1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v11 = MiCompareHotPatchNodes(v5, (__int64)v9);
      if ( v11 <= 0 )
      {
        if ( v11 >= 0 )
        {
          v3 = v9;
          RtlAvlRemoveNode(a1, v9);
          v5 = (__int64)a2;
          goto LABEL_5;
        }
        v12 = *v9;
        if ( !*v9 )
          break;
      }
      else
      {
        v12 = v9[1];
        if ( !v12 )
        {
          v8 = 1;
          break;
        }
      }
      v9 = (unsigned __int64 *)v12;
      v5 = (__int64)a2;
    }
  }
  RtlAvlInsertNodeEx(a1, (unsigned __int64)v9, v8, a2);
  if ( MiHotPatchGeneration != -1 )
    v10 = MiHotPatchGeneration + 1;
  MiHotPatchGeneration = v10;
  if ( !a3 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&MiHotPatchListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&MiHotPatchListLock);
    KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
