/*
 * XREFs of CmpTransMgrPrepare @ 0x1407424F0
 * Callers:
 *     CmKtmNotification @ 0x140741CF0 (CmKtmNotification.c)
 *     CmpRmUnDoPhase @ 0x14091C5C4 (CmpRmUnDoPhase.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x14071B350 (CmpGetNextActiveHive.c)
 *     HvpMarkDirty @ 0x14071F430 (HvpMarkDirty.c)
 *     CmpTransMgrSyncHive @ 0x140742834 (CmpTransMgrSyncHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AB41E0 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140AB41FC (HvLockHiveFlusherExclusive.c)
 *     CmListGetNextElement @ 0x140AB4218 (CmListGetNextElement.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpTransMgrPrepare(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v9; // bp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 NextElement; // rax
  struct _EX_RUNDOWN_REF *v14; // rdi
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _EX_RUNDOWN_REF *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // r8
  ULONG_PTR v27; // rsi
  __int64 v28; // rcx
  struct _EX_RUNDOWN_REF *v30; // rbx
  struct _EX_RUNDOWN_REF *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v37[3]; // [rsp+28h] [rbp-70h] BYREF

  *a4 = 0;
  *a3 = 0;
  memset(v37, 0, sizeof(v37));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v9 = 1;
  *(_DWORD *)(a2 + 48) |= 1u;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
  {
    *a4 = 1;
    return 0;
  }
  CmpAttachToRegistryProcess(v37);
  CmpLockRegistry(v11, v10, v12);
  v36 = 0LL;
  while ( 1 )
  {
    NextElement = CmListGetNextElement(a2 + 16, &v36, 0LL);
    if ( !NextElement )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(NextElement + 48) + 32LL) + 4152LL) == a1 )
      ++*a3;
  }
  v14 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
  if ( v14 )
  {
    v30 = v14 + 205;
    if ( ExAcquireRundownProtection(v14 + 205) )
    {
      CmpUnlockRegistry(v28, v17, v18, v19);
      v25 = CmpTransMgrSyncHive(v14);
      v31 = v30;
LABEL_26:
      ExReleaseRundownProtection(v31);
      goto LABEL_22;
    }
    v25 = 0;
    goto LABEL_21;
  }
  for ( i = 0LL; ; i = v20 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v20 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( NextActiveHive[519] == a1 )
    {
      v21 = *((unsigned int *)NextActiveHive + 40);
      if ( (v21 & 2) == 0 )
      {
        v22 = *(unsigned int *)(a2 + 112);
        if ( (_DWORD)v22 )
        {
          v21 = 0LL;
          while ( NextActiveHive != *(__int64 **)(a2 + 8 * v21 + 120) )
          {
            v21 = (unsigned int)(v21 + 1);
            if ( (unsigned int)v21 >= (unsigned int)v22 )
              goto LABEL_10;
          }
        }
        CmpUnlockRegistry(v21, v22, v18, v19);
        v25 = CmpTransMgrSyncHive(v20);
        if ( v25 < 0 )
        {
          v31 = v20 + 205;
          goto LABEL_26;
        }
        CmpLockRegistry(v24, v23, v26);
      }
    }
LABEL_10:
    ;
  }
  v27 = qword_140C02770;
  v28 = *(unsigned int *)(*(_QWORD *)(qword_140C02770 + 64) + 144LL);
  if ( (v28 & 1) != 0 )
    goto LABEL_20;
  HvLockHiveFlusherExclusive(qword_140C02770);
  ExAcquirePushLockExclusiveEx(v27 + 80, 0LL);
  v25 = HvpMarkDirty(v27, 0, 32, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v27 + 80);
  KeAbPostRelease(v27 + 80);
  if ( v25 >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)(v27 + 64) + 144LL) |= 1u;
    HvUnlockHiveFlusherExclusive(v27);
    CmpUnlockRegistry(v33, v32, v34, v35);
    v9 = 0;
    if ( (int)CmpFlushHive(v27, 0) < 0 )
    {
      v25 = -1073741670;
      goto LABEL_22;
    }
LABEL_20:
    v25 = 0;
    if ( !v9 )
      goto LABEL_22;
    goto LABEL_21;
  }
  HvUnlockHiveFlusherExclusive(v27);
LABEL_21:
  CmpUnlockRegistry(v28, v17, v18, v19);
LABEL_22:
  CmpDetachFromRegistryProcess(v37);
  return (unsigned int)v25;
}
