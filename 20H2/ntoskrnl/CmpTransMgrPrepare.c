/*
 * XREFs of CmpTransMgrPrepare @ 0x14076032C
 * Callers:
 *     CmKtmNotification @ 0x1406A3E40 (CmKtmNotification.c)
 *     CmpRmUnDoPhase @ 0x140878104 (CmpRmUnDoPhase.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     HvUnlockHiveWriter @ 0x1405DE540 (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x1405DE570 (HvLockHiveWriter.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     HvLockHiveFlusherExclusive @ 0x14064CF38 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14064CF54 (HvUnlockHiveFlusherExclusive.c)
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x1406A1C74 (UNLOCK_TRANSACTION_LIST.c)
 *     LOCK_TRANSACTION_LIST @ 0x1406A1CA0 (LOCK_TRANSACTION_LIST.c)
 *     CmListGetNextElement @ 0x1406A42B0 (CmListGetNextElement.c)
 *     CmpGetNextActiveHive @ 0x140701140 (CmpGetNextActiveHive.c)
 *     CmpQuitNextActiveHive @ 0x140726820 (CmpQuitNextActiveHive.c)
 *     CmpIsHiveBoundToTrans @ 0x140760E88 (CmpIsHiveBoundToTrans.c)
 *     CmpTransMgrSyncHive @ 0x140761380 (CmpTransMgrSyncHive.c)
 *     HvMarkDirty @ 0x14087E378 (HvMarkDirty.c)
 */

__int64 __fastcall CmpTransMgrPrepare(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  char v8; // si
  char *NextElement; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v13; // rdi
  int v14; // ebx
  ULONG_PTR v15; // rdi
  int v17; // eax
  struct _EX_RUNDOWN_REF *v18; // rcx
  char v19; // bl
  _QWORD *v20; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v21[3]; // [rsp+28h] [rbp-70h] BYREF

  *a4 = 0;
  *a3 = 0;
  memset(v21, 0, sizeof(v21));
  LOCK_TRANSACTION_LIST();
  v8 = 1;
  *(_DWORD *)(a2 + 48) |= 1u;
  UNLOCK_TRANSACTION_LIST();
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
  {
    *a4 = 1;
    return 0;
  }
  CmpAttachToRegistryProcess((__int64)v21);
  CmpLockRegistry();
  v20 = 0LL;
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD **)(a2 + 16), &v20, 0);
    if ( !NextElement )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NextElement + 6) + 32LL) + 4192LL) == a1 )
      ++*a3;
  }
  v10 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
  if ( v10 )
  {
    if ( ExAcquireRundownProtection_0(v10 + 204) )
    {
      CmpUnlockRegistry();
      v17 = CmpTransMgrSyncHive((ULONG_PTR)v10);
      v18 = v10 + 204;
      v14 = v17;
      ExReleaseRundownProtection_0(v18);
      goto LABEL_18;
    }
    v14 = 0;
  }
  else
  {
    for ( i = 0LL; ; i = v13 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v13 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      if ( NextActiveHive[524] == a1
        && (NextActiveHive[20] & 2) == 0
        && (unsigned __int8)CmpIsHiveBoundToTrans(NextActiveHive, a2) )
      {
        CmpUnlockRegistry();
        v14 = CmpTransMgrSyncHive((ULONG_PTR)v13);
        if ( v14 < 0 )
        {
          CmpQuitNextActiveHive(v13);
          goto LABEL_18;
        }
        CmpLockRegistry();
      }
    }
    v15 = qword_140C01170;
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C01170 + 64) + 144LL) & 1) != 0 )
    {
LABEL_16:
      v14 = 0;
      if ( !v8 )
        goto LABEL_18;
      goto LABEL_17;
    }
    HvLockHiveFlusherExclusive(qword_140C01170);
    HvLockHiveWriter(v15);
    v19 = HvMarkDirty(v15, 0LL, 32LL);
    HvUnlockHiveWriter(v15);
    if ( v19 )
    {
      *(_DWORD *)(*(_QWORD *)(v15 + 64) + 144LL) |= 1u;
      HvUnlockHiveFlusherExclusive(v15);
      CmpUnlockRegistry();
      v8 = 0;
      if ( (int)CmpFlushHive(v15, 0) < 0 )
      {
        v14 = -1073741670;
        goto LABEL_18;
      }
      goto LABEL_16;
    }
    HvUnlockHiveFlusherExclusive(v15);
    v14 = -1073741670;
  }
LABEL_17:
  CmpUnlockRegistry();
LABEL_18:
  CmpDetachFromRegistryProcess((__int64)v21);
  return (unsigned int)v14;
}
