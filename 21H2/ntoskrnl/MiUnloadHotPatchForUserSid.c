/*
 * XREFs of MiUnloadHotPatchForUserSid @ 0x140977CBC
 * Callers:
 *     NtManageHotPatch @ 0x1406C9390 (NtManageHotPatch.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiDeleteHotPatchRecord @ 0x140972E78 (MiDeleteHotPatchRecord.c)
 *     MiFindUserSidHotPatchContext @ 0x14097339C (MiFindUserSidHotPatchContext.c)
 *     MiHotPatchAllProcesses @ 0x140973630 (MiHotPatchAllProcesses.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiUnloadHotPatchForUserSid(void *a1, int *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v3; // rbp
  unsigned __int64 *UserSidHotPatchContext; // rax
  unsigned __int64 *v7; // r15
  bool v8; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C533C0, 0LL);
  UserSidHotPatchContext = MiFindUserSidHotPatchContext(a1);
  v7 = UserSidHotPatchContext;
  if ( UserSidHotPatchContext )
  {
    MiDeleteHotPatchRecord(UserSidHotPatchContext + 3, 1uLL, *a2, a2[1]);
    if ( !v7[3] )
    {
      RtlAvlRemoveNode((unsigned __int64 *)&qword_140C533A8, v7);
      v3 = v7;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C533C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C533C0);
  KeAbPostRelease((ULONG_PTR)&qword_140C533C0);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  MiHotPatchAllProcesses(*a2, a2[1]);
  return 0LL;
}
