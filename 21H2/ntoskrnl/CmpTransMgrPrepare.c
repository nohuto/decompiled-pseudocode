/*
 * XREFs of CmpTransMgrPrepare @ 0x140768EC4
 * Callers:
 *     CmKtmNotification @ 0x1405E11C0 (CmKtmNotification.c)
 *     CmpRmUnDoPhase @ 0x140875B54 (CmpRmUnDoPhase.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmListGetNextElement @ 0x1405E17C4 (CmListGetNextElement.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x140664390 (UNLOCK_TRANSACTION_LIST.c)
 *     LOCK_TRANSACTION_LIST @ 0x1406643BC (LOCK_TRANSACTION_LIST.c)
 *     CmpGetNextActiveHive @ 0x140667750 (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     HvUnlockHiveWriter @ 0x1406F7EE0 (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x1406F7F10 (HvLockHiveWriter.c)
 *     HvUnlockHiveFlusherExclusive @ 0x1406F97EC (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x1406F9824 (HvLockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpQuitNextActiveHive @ 0x14072A81C (CmpQuitNextActiveHive.c)
 *     CmpTransMgrSyncHive @ 0x1407691DC (CmpTransMgrSyncHive.c)
 *     HvMarkDirty @ 0x14087BE60 (HvMarkDirty.c)
 */

__int64 __fastcall CmpTransMgrPrepare(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  char v8; // si
  char *NextElement; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v13; // rdi
  unsigned int v14; // edx
  __int64 v15; // rcx
  int v16; // ebx
  ULONG_PTR v17; // rdi
  int v19; // eax
  struct _EX_RUNDOWN_REF *v20; // rcx
  char v21; // bl
  _QWORD *v22; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v23[3]; // [rsp+28h] [rbp-70h] BYREF

  *a4 = 0;
  *a3 = 0;
  memset(v23, 0, sizeof(v23));
  LOCK_TRANSACTION_LIST();
  v8 = 1;
  *(_DWORD *)(a2 + 48) |= 1u;
  UNLOCK_TRANSACTION_LIST();
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
  {
    *a4 = 1;
    return 0;
  }
  CmpAttachToRegistryProcess((__int64)v23);
  CmpLockRegistry();
  v22 = 0LL;
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD **)(a2 + 16), &v22, 0);
    if ( !NextElement )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NextElement + 6) + 32LL) + 4192LL) == a1 )
      ++*a3;
  }
  v10 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
  if ( v10 )
  {
    if ( ExAcquireRundownProtection(v10 + 204) )
    {
      CmpUnlockRegistry();
      v19 = CmpTransMgrSyncHive((ULONG_PTR)v10);
      v20 = v10 + 204;
      v16 = v19;
      ExReleaseRundownProtection(v20);
      goto LABEL_22;
    }
    v16 = 0;
  }
  else
  {
    for ( i = 0LL; ; i = v13 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v13 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      if ( NextActiveHive[524] == a1 && (NextActiveHive[20] & 2) == 0 )
      {
        v14 = *(_DWORD *)(a2 + 112);
        if ( v14 )
        {
          v15 = 0LL;
          while ( NextActiveHive != *(__int64 **)(a2 + 8 * v15 + 120) )
          {
            v15 = (unsigned int)(v15 + 1);
            if ( (unsigned int)v15 >= v14 )
              goto LABEL_10;
          }
        }
        CmpUnlockRegistry();
        v16 = CmpTransMgrSyncHive((ULONG_PTR)v13);
        if ( v16 < 0 )
        {
          CmpQuitNextActiveHive(v13);
          goto LABEL_22;
        }
        CmpLockRegistry();
      }
LABEL_10:
      ;
    }
    v17 = qword_140C01170;
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C01170 + 64) + 144LL) & 1) != 0 )
    {
LABEL_20:
      v16 = 0;
      if ( !v8 )
        goto LABEL_22;
      goto LABEL_21;
    }
    HvLockHiveFlusherExclusive(qword_140C01170);
    HvLockHiveWriter(v17);
    v21 = HvMarkDirty(v17, 0LL, 32LL);
    HvUnlockHiveWriter(v17);
    if ( v21 )
    {
      *(_DWORD *)(*(_QWORD *)(v17 + 64) + 144LL) |= 1u;
      HvUnlockHiveFlusherExclusive(v17);
      CmpUnlockRegistry();
      v8 = 0;
      if ( (int)CmpFlushHive(v17, 0) < 0 )
      {
        v16 = -1073741670;
        goto LABEL_22;
      }
      goto LABEL_20;
    }
    HvUnlockHiveFlusherExclusive(v17);
    v16 = -1073741670;
  }
LABEL_21:
  CmpUnlockRegistry();
LABEL_22:
  CmpDetachFromRegistryProcess((__int64)v23);
  return (unsigned int)v16;
}
