/*
 * XREFs of CmpTransMgrCommit @ 0x14074D24C
 * Callers:
 *     CmKtmNotification @ 0x140658680 (CmKtmNotification.c)
 *     CmpLazyCommitWorker @ 0x14086DBC0 (CmpLazyCommitWorker.c)
 *     CmpRmUnDoPhase @ 0x1408712D4 (CmpRmUnDoPhase.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmListGetNextElement @ 0x140658FC0 (CmListGetNextElement.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x14068E730 (UNLOCK_TRANSACTION_LIST.c)
 *     LOCK_TRANSACTION_LIST @ 0x14068E75C (LOCK_TRANSACTION_LIST.c)
 *     CmpGetNextActiveHive @ 0x140690FA0 (CmpGetNextActiveHive.c)
 *     CmpTransMgrCommitUoW @ 0x14074D43C (CmpTransMgrCommitUoW.c)
 *     CmpIsHiveBoundToTrans @ 0x14074DC18 (CmpIsHiveBoundToTrans.c)
 *     CmpTransMgrSyncHive @ 0x14074E110 (CmpTransMgrSyncHive.c)
 */

__int64 __fastcall CmpTransMgrCommit(__int64 a1, __int64 a2, int *a3, _DWORD *a4)
{
  int v4; // esi
  char v8; // cl
  char *NextElement; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  __int64 *i; // rbx
  int v15; // eax
  int v16; // [rsp+30h] [rbp-69h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-61h] BYREF
  __int64 v18; // [rsp+40h] [rbp-59h] BYREF
  _OWORD v19[3]; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+78h] [rbp-21h] BYREF
  int *v21; // [rsp+98h] [rbp-1h]
  int v22; // [rsp+A0h] [rbp+7h]
  int v23; // [rsp+A4h] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+A8h] [rbp+Fh] BYREF

  v17 = 0LL;
  v4 = 0;
  *a3 = 0;
  memset(v19, 0, sizeof(v19));
  if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)byte_1400228D7, 0LL, 0LL, 2u, &v24);
  v8 = dword_140CF4D04;
  if ( dword_140CF4D04 )
  {
    ++dword_140CF4D04;
    if ( (v8 & 3) != 0 )
      return 3221225626LL;
  }
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
    return 0LL;
  v18 = MEMORY[0xFFFFF78000000014];
  CmpAttachToRegistryProcess((__int64)v19, a2, (__int64)a3, a4);
  NextElement = CmListGetNextElement((_QWORD **)(a2 + 16), &v17, 0);
  if ( !NextElement )
    goto LABEL_14;
  do
  {
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NextElement + 6) + 32LL) + 4192LL) == a1
      && (*((_DWORD *)NextElement + 16) & 1) == 0 )
    {
      ++*a3;
      if ( v4 >= 0 )
      {
        v4 = CmpTransMgrCommitUoW(NextElement, &v18);
        if ( v4 >= 0 )
          *((_DWORD *)NextElement + 16) |= 1u;
      }
    }
    NextElement = CmListGetNextElement((_QWORD **)(a2 + 16), &v17, 0);
  }
  while ( NextElement );
  if ( v4 >= 0 )
  {
LABEL_14:
    CmpLockRegistry();
    for ( i = CmpGetNextActiveHive(0LL); i; i = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)i) )
    {
      if ( i[524] == a1 && (i[20] & 2) == 0 && (unsigned __int8)CmpIsHiveBoundToTrans(i, a2) == 1 )
      {
        CmpUnlockRegistry();
        if ( (int)CmpTransMgrSyncHive((ULONG_PTR)i) < 0 )
          v4 = -1073741670;
        CmpLockRegistry();
      }
    }
    CmpUnlockRegistry();
    LOCK_TRANSACTION_LIST();
    *(_DWORD *)(a2 + 48) |= 4u;
    UNLOCK_TRANSACTION_LIST();
  }
  CmpDetachFromRegistryProcess((__int64)v19, v10, v11, v12);
  if ( (unsigned int)dword_140C02130 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    {
      v15 = *a3;
      v23 = 0;
      v16 = v15;
      v22 = 4;
      v21 = &v16;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)byte_1400228F9,
        0LL,
        0LL,
        3u,
        &v20);
    }
  }
  return (unsigned int)v4;
}
