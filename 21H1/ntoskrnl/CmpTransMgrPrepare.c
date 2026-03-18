/*
 * XREFs of CmpTransMgrPrepare @ 0x14074D0BC
 * Callers:
 *     CmKtmNotification @ 0x140658680 (CmKtmNotification.c)
 *     CmpRmUnDoPhase @ 0x1408712D4 (CmpRmUnDoPhase.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmListGetNextElement @ 0x140658FC0 (CmListGetNextElement.c)
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14068847C (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x1406884B4 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveWriter @ 0x140688EB8 (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x140688EE8 (HvLockHiveWriter.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x14068E730 (UNLOCK_TRANSACTION_LIST.c)
 *     LOCK_TRANSACTION_LIST @ 0x14068E75C (LOCK_TRANSACTION_LIST.c)
 *     CmpGetNextActiveHive @ 0x140690FA0 (CmpGetNextActiveHive.c)
 *     CmpQuitNextActiveHive @ 0x1407164D0 (CmpQuitNextActiveHive.c)
 *     CmpIsHiveBoundToTrans @ 0x14074DC18 (CmpIsHiveBoundToTrans.c)
 *     CmpTransMgrSyncHive @ 0x14074E110 (CmpTransMgrSyncHive.c)
 *     HvMarkDirty @ 0x140877518 (HvMarkDirty.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  struct _EX_RUNDOWN_REF *v19; // rdi
  int v20; // ebx
  __int64 v21; // rdi
  int v23; // eax
  struct _EX_RUNDOWN_REF *v24; // rcx
  char v25; // bl
  _QWORD *v26; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v27[3]; // [rsp+28h] [rbp-70h] BYREF

  *a4 = 0;
  *a3 = 0;
  memset(v27, 0, sizeof(v27));
  LOCK_TRANSACTION_LIST();
  v8 = 1;
  *(_DWORD *)(a2 + 48) |= 1u;
  UNLOCK_TRANSACTION_LIST();
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
  {
    *a4 = 1;
    return 0;
  }
  CmpAttachToRegistryProcess((__int64)v27, v9, v10, v11);
  CmpLockRegistry();
  v26 = 0LL;
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD **)(a2 + 16), &v26, 0);
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
      v23 = CmpTransMgrSyncHive((ULONG_PTR)v13);
      v24 = v13 + 204;
      v20 = v23;
      ExReleaseRundownProtection_0(v24);
      goto LABEL_18;
    }
    v20 = 0;
  }
  else
  {
    for ( i = 0LL; ; i = v19 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v19 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      if ( NextActiveHive[524] == a1
        && (NextActiveHive[20] & 2) == 0
        && (unsigned __int8)CmpIsHiveBoundToTrans(NextActiveHive, a2) )
      {
        CmpUnlockRegistry();
        v20 = CmpTransMgrSyncHive((ULONG_PTR)v19);
        if ( v20 < 0 )
        {
          CmpQuitNextActiveHive(v19);
          goto LABEL_18;
        }
        CmpLockRegistry();
      }
    }
    v21 = qword_140C01170;
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C01170 + 64) + 144LL) & 1) != 0 )
    {
LABEL_16:
      v20 = 0;
      if ( !v8 )
        goto LABEL_18;
      goto LABEL_17;
    }
    HvLockHiveFlusherExclusive(qword_140C01170);
    HvLockHiveWriter(v21);
    v25 = HvMarkDirty(v21, 0LL, 32LL);
    HvUnlockHiveWriter(v21);
    if ( v25 )
    {
      *(_DWORD *)(*(_QWORD *)(v21 + 64) + 144LL) |= 1u;
      HvUnlockHiveFlusherExclusive(v21);
      CmpUnlockRegistry();
      v8 = 0;
      if ( (int)CmpFlushHive(v21, 0) < 0 )
      {
        v20 = -1073741670;
        goto LABEL_18;
      }
      goto LABEL_16;
    }
    HvUnlockHiveFlusherExclusive(v21);
    v20 = -1073741670;
  }
LABEL_17:
  CmpUnlockRegistry();
LABEL_18:
  CmpDetachFromRegistryProcess((__int64)v27, v16, v17, v18);
  return (unsigned int)v20;
}
