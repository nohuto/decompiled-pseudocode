/*
 * XREFs of CmpTransMgrPrepare @ 0x140768D04
 * Callers:
 *     CmKtmNotification @ 0x1406A36F0 (CmKtmNotification.c)
 *     CmpRmUnDoPhase @ 0x1408759F4 (CmpRmUnDoPhase.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpFlushHive @ 0x14062A0D8 (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x140672520 (CmpGetNextActiveHive.c)
 *     CmListGetNextElement @ 0x1406A3CF4 (CmListGetNextElement.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x14071D8F4 (UNLOCK_TRANSACTION_LIST.c)
 *     LOCK_TRANSACTION_LIST @ 0x14071D920 (LOCK_TRANSACTION_LIST.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14071E188 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x14071E1C0 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveWriter @ 0x140720A6C (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x140720A9C (HvLockHiveWriter.c)
 *     CmpQuitNextActiveHive @ 0x14072A36C (CmpQuitNextActiveHive.c)
 *     CmpTransMgrSyncHive @ 0x14076901C (CmpTransMgrSyncHive.c)
 *     HvMarkDirty @ 0x14087BD00 (HvMarkDirty.c)
 */

__int64 __fastcall CmpTransMgrPrepare(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  char v8; // si
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  char *NextElement; // rax
  struct _EX_RUNDOWN_REF *v13; // rbx
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v16; // rdi
  unsigned int v17; // edx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdi
  int v22; // eax
  struct _EX_RUNDOWN_REF *v23; // rcx
  char v24; // bl
  _QWORD *v25; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v26[3]; // [rsp+28h] [rbp-70h] BYREF

  *a4 = 0;
  *a3 = 0;
  memset(v26, 0, sizeof(v26));
  LOCK_TRANSACTION_LIST();
  v8 = 1;
  *(_DWORD *)(a2 + 48) |= 1u;
  UNLOCK_TRANSACTION_LIST();
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
  {
    *a4 = 1;
    return 0;
  }
  CmpAttachToRegistryProcess((__int64)v26, v9, v10, v11);
  CmpLockRegistry();
  v25 = 0LL;
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD **)(a2 + 16), &v25, 0);
    if ( !NextElement )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NextElement + 6) + 32LL) + 4192LL) == a1 )
      ++*a3;
  }
  v13 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
  if ( v13 )
  {
    if ( ExAcquireRundownProtection_0(v13 + 204) )
    {
      CmpUnlockRegistry();
      v22 = CmpTransMgrSyncHive(v13);
      v23 = v13 + 204;
      v19 = v22;
      ExReleaseRundownProtection_0(v23);
      goto LABEL_22;
    }
    v19 = 0;
  }
  else
  {
    for ( i = 0LL; ; i = v16 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v16 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      if ( NextActiveHive[524] == a1 && (NextActiveHive[20] & 2) == 0 )
      {
        v17 = *(_DWORD *)(a2 + 112);
        if ( v17 )
        {
          v18 = 0LL;
          while ( NextActiveHive != *(__int64 **)(a2 + 8 * v18 + 120) )
          {
            v18 = (unsigned int)(v18 + 1);
            if ( (unsigned int)v18 >= v17 )
              goto LABEL_10;
          }
        }
        CmpUnlockRegistry();
        v19 = CmpTransMgrSyncHive(v16);
        if ( v19 < 0 )
        {
          CmpQuitNextActiveHive(v16);
          goto LABEL_22;
        }
        CmpLockRegistry();
      }
LABEL_10:
      ;
    }
    v20 = qword_140C01170;
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C01170 + 64) + 144LL) & 1) != 0 )
    {
LABEL_20:
      v19 = 0;
      if ( !v8 )
        goto LABEL_22;
      goto LABEL_21;
    }
    HvLockHiveFlusherExclusive(qword_140C01170);
    HvLockHiveWriter(v20);
    v24 = HvMarkDirty(v20, 0LL, 32LL);
    HvUnlockHiveWriter(v20);
    if ( v24 )
    {
      *(_DWORD *)(*(_QWORD *)(v20 + 64) + 144LL) |= 1u;
      HvUnlockHiveFlusherExclusive(v20);
      CmpUnlockRegistry();
      v8 = 0;
      if ( (int)CmpFlushHive(v20, 0) < 0 )
      {
        v19 = -1073741670;
        goto LABEL_22;
      }
      goto LABEL_20;
    }
    HvUnlockHiveFlusherExclusive(v20);
    v19 = -1073741670;
  }
LABEL_21:
  CmpUnlockRegistry();
LABEL_22:
  CmpDetachFromRegistryProcess((__int64)v26);
  return (unsigned int)v19;
}
