/*
 * XREFs of CmpDeleteKeyObject @ 0x1406675C0
 * Callers:
 *     <none>
 * Callees:
 *     CmpWaitForLateUnloadWorker @ 0x14027EEF8 (CmpWaitForLateUnloadWorker.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14034FE80 (ExIsResourceAcquiredSharedLite.c)
 *     CmpInitializeDelayDerefContext @ 0x1403510E8 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140351100 (CmpDrainDelayDerefContext.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405D6B4C (CmpFreeCallbackObjectContexts.c)
 *     CmpFireCleanupNotifications @ 0x1405D82F4 (CmpFireCleanupNotifications.c)
 *     CmpLockKcbExclusive @ 0x1405EC35C (CmpLockKcbExclusive.c)
 *     CmPostCallbackNotification @ 0x1406677D0 (CmPostCallbackNotification.c)
 *     CmpSignalDeferredPosts @ 0x140667890 (CmpSignalDeferredPosts.c)
 *     DelistKeyBodyFromKCB @ 0x140667930 (DelistKeyBodyFromKCB.c)
 *     CmpCallCallBacks @ 0x140667A2C (CmpCallCallBacks.c)
 *     CmpFlushNotify @ 0x14066AE8C (CmpFlushNotify.c)
 *     CmpTransDereferenceTransaction @ 0x1406A32E0 (CmpTransDereferenceTransaction.c)
 *     CmpUnlockKcb @ 0x1406F2B40 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406FB610 (CmpDereferenceKeyControlBlock.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x14087AB38 (CmpKeyEnumStackFreeResumeContext.c)
 */

void __fastcall CmpDeleteKeyObject(__int64 a1)
{
  char v2; // si
  struct _KTHREAD *CurrentThread; // rax
  int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // rcx
  ULONG_PTR v7; // rdi
  __int64 v8; // rcx
  struct _PRIVILEGE_SET *v9; // rcx
  __int64 v10; // rcx
  _QWORD v11[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v13; // [rsp+50h] [rbp-38h] BYREF
  _OWORD v14[2]; // [rsp+60h] [rbp-28h] BYREF

  v12[1] = v12;
  v2 = 0;
  v12[0] = v12;
  memset(v14, 0, sizeof(v14));
  v13 = 0LL;
  CmpInitializeDelayDerefContext(&v13);
  if ( (*(_DWORD *)(a1 + 48) & 4) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( CmpCallBackCount )
    {
      if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        *(_QWORD *)&v14[0] = a1;
        CmpCallCallBacks(14, (unsigned int)v14, v4, 25, a1, (__int64)v12);
        if ( *(_DWORD *)a1 == 1803104306 && *(_QWORD *)(a1 + 72) != a1 + 72 )
        {
          CmpFireCleanupNotifications(a1);
          CmpFreeCallbackObjectContexts(a1);
        }
      }
    }
    if ( *(_QWORD *)(a1 + 56) )
      CmpTransDereferenceTransaction(*(_QWORD *)(a1 + 56));
    v11[1] = v11;
    v11[0] = v11;
    CmpLockRegistry();
    v7 = *(_QWORD *)(a1 + 8);
    if ( v7 )
    {
      if ( *(_DWORD *)a1 == 1803104306 )
      {
        if ( *(_QWORD *)(a1 + 16) )
        {
          CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
          CmpFlushNotify(a1, 0LL, v11);
          CmpUnlockKcb(v7);
        }
        DelistKeyBodyFromKCB(a1, 0LL);
        v8 = *(_QWORD *)(v7 + 32);
        if ( *(_BYTE *)(v8 + 2936) == 1 )
        {
          v2 = 1;
          *(_DWORD *)(v8 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 4276), 1u) & 0x7F) + 4280) = 16;
        }
        v9 = *(struct _PRIVILEGE_SET **)(a1 + 88);
        if ( v9 )
        {
          CmpKeyEnumStackFreeResumeContext(v9);
          CmpDrainDelayDerefContext((_QWORD **)&v13);
        }
      }
      else
      {
        v10 = *(_QWORD *)(v7 + 32);
        if ( *(_BYTE *)(v10 + 2936) == 1 )
        {
          v2 = 1;
          *(_DWORD *)(v10 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 4276), 1u) & 0x7F) + 4280) = 17;
        }
      }
      CmpDereferenceKeyControlBlock(v7);
    }
    CmpUnlockRegistry(v6, v5);
    CmpSignalDeferredPosts(v11);
    CmPostCallbackNotification(25, 0, 0, (unsigned int)v14, (__int64)v12);
    if ( v2 )
    {
      if ( *(char *)(a1 - 21) < 0 )
        CmpWaitForLateUnloadWorker();
    }
    KeLeaveCriticalRegion();
  }
}
