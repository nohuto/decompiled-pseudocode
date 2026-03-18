/*
 * XREFs of CmpDeleteKeyObject @ 0x14061C620
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140225FD0 (ExIsResourceAcquiredSharedLite.c)
 *     CmpInitializeDelayDerefContext @ 0x140227238 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140227250 (CmpDrainDelayDerefContext.c)
 *     CmpWaitForLateUnloadWorker @ 0x1402F37AC (CmpWaitForLateUnloadWorker.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405D3B6C (CmpFreeCallbackObjectContexts.c)
 *     CmpFireCleanupNotifications @ 0x1405D5368 (CmpFireCleanupNotifications.c)
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
 *     CmPostCallbackNotification @ 0x14061C830 (CmPostCallbackNotification.c)
 *     CmpSignalDeferredPosts @ 0x14061C8F0 (CmpSignalDeferredPosts.c)
 *     DelistKeyBodyFromKCB @ 0x14061C990 (DelistKeyBodyFromKCB.c)
 *     CmpCallCallBacks @ 0x14061CA8C (CmpCallCallBacks.c)
 *     CmpLockKcbExclusive @ 0x140670B6C (CmpLockKcbExclusive.c)
 *     CmpTransDereferenceTransaction @ 0x1406A16E0 (CmpTransDereferenceTransaction.c)
 *     CmpFlushNotify @ 0x1406A3528 (CmpFlushNotify.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x14087D1BC (CmpKeyEnumStackFreeResumeContext.c)
 */

void __fastcall CmpDeleteKeyObject(__int64 a1)
{
  char v2; // si
  struct _KTHREAD *CurrentThread; // rax
  int v4; // r8d
  ULONG_PTR v5; // rdi
  __int64 v6; // rcx
  struct _PRIVILEGE_SET *v7; // rcx
  __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v11; // [rsp+50h] [rbp-38h] BYREF
  _OWORD v12[2]; // [rsp+60h] [rbp-28h] BYREF

  v10[1] = v10;
  v2 = 0;
  v10[0] = v10;
  memset(v12, 0, sizeof(v12));
  v11 = 0LL;
  CmpInitializeDelayDerefContext(&v11);
  if ( (*(_DWORD *)(a1 + 48) & 4) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( CmpCallBackCount )
    {
      if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        *(_QWORD *)&v12[0] = a1;
        CmpCallCallBacks(14, (unsigned int)v12, v4, 25, a1, (__int64)v10);
        if ( *(_DWORD *)a1 == 1803104306 && *(_QWORD *)(a1 + 72) != a1 + 72 )
        {
          CmpFireCleanupNotifications(a1);
          CmpFreeCallbackObjectContexts(a1);
        }
      }
    }
    if ( *(_QWORD *)(a1 + 56) )
      CmpTransDereferenceTransaction(*(_QWORD *)(a1 + 56));
    v9[1] = v9;
    v9[0] = v9;
    CmpLockRegistry();
    v5 = *(_QWORD *)(a1 + 8);
    if ( v5 )
    {
      if ( *(_DWORD *)a1 == 1803104306 )
      {
        if ( *(_QWORD *)(a1 + 16) )
        {
          CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
          CmpFlushNotify(a1, 0LL, v9);
          CmpUnlockKcb(v5);
        }
        DelistKeyBodyFromKCB(a1, 0LL);
        v6 = *(_QWORD *)(v5 + 32);
        if ( *(_BYTE *)(v6 + 2936) == 1 )
        {
          v2 = 1;
          *(_DWORD *)(v6 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 4276), 1u) & 0x7F) + 4280) = 16;
        }
        v7 = *(struct _PRIVILEGE_SET **)(a1 + 88);
        if ( v7 )
        {
          CmpKeyEnumStackFreeResumeContext(v7);
          CmpDrainDelayDerefContext((_QWORD **)&v11);
        }
      }
      else
      {
        v8 = *(_QWORD *)(v5 + 32);
        if ( *(_BYTE *)(v8 + 2936) == 1 )
        {
          v2 = 1;
          *(_DWORD *)(v8 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 4276), 1u) & 0x7F) + 4280) = 17;
        }
      }
      CmpDereferenceKeyControlBlock(v5);
    }
    CmpUnlockRegistry();
    CmpSignalDeferredPosts(v9);
    CmPostCallbackNotification(25, 0, 0, (unsigned int)v12, (__int64)v10);
    if ( v2 )
    {
      if ( *(char *)(a1 - 21) < 0 )
        CmpWaitForLateUnloadWorker();
    }
    KeLeaveCriticalRegion();
  }
}
