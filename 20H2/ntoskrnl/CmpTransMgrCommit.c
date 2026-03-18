/*
 * XREFs of CmpTransMgrCommit @ 0x1407604BC
 * Callers:
 *     CmKtmNotification @ 0x1406A3E40 (CmKtmNotification.c)
 *     CmpLazyCommitWorker @ 0x1408751D0 (CmpLazyCommitWorker.c)
 *     CmpRmUnDoPhase @ 0x140878104 (CmpRmUnDoPhase.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x1406A1C74 (UNLOCK_TRANSACTION_LIST.c)
 *     LOCK_TRANSACTION_LIST @ 0x1406A1CA0 (LOCK_TRANSACTION_LIST.c)
 *     CmListGetNextElement @ 0x1406A42B0 (CmListGetNextElement.c)
 *     CmpGetNextActiveHive @ 0x140701140 (CmpGetNextActiveHive.c)
 *     CmpTransMgrCommitUoW @ 0x1407606AC (CmpTransMgrCommitUoW.c)
 *     CmpIsHiveBoundToTrans @ 0x140760E88 (CmpIsHiveBoundToTrans.c)
 *     CmpTransMgrSyncHive @ 0x140761380 (CmpTransMgrSyncHive.c)
 */

__int64 __fastcall CmpTransMgrCommit(__int64 a1, __int64 a2, int *a3)
{
  int v3; // esi
  char v7; // cl
  char *NextElement; // rbx
  __int64 *i; // rbx
  int v11; // eax
  int v12; // [rsp+30h] [rbp-69h] BYREF
  _QWORD *v13; // [rsp+38h] [rbp-61h] BYREF
  __int64 v14; // [rsp+40h] [rbp-59h] BYREF
  _OWORD v15[3]; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+78h] [rbp-21h] BYREF
  int *v17; // [rsp+98h] [rbp-1h]
  int v18; // [rsp+A0h] [rbp+7h]
  int v19; // [rsp+A4h] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+A8h] [rbp+Fh] BYREF

  v13 = 0LL;
  v3 = 0;
  *a3 = 0;
  memset(v15, 0, sizeof(v15));
  if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02130,
      (unsigned __int8 *)&dword_140022B64,
      0LL,
      0LL,
      2u,
      &v20);
  v7 = dword_140CF4CA4;
  if ( dword_140CF4CA4 )
  {
    ++dword_140CF4CA4;
    if ( (v7 & 3) != 0 )
      return 3221225626LL;
  }
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
    return 0LL;
  v14 = MEMORY[0xFFFFF78000000014];
  CmpAttachToRegistryProcess((__int64)v15);
  NextElement = CmListGetNextElement((_QWORD **)(a2 + 16), &v13, 0);
  if ( !NextElement )
    goto LABEL_14;
  do
  {
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NextElement + 6) + 32LL) + 4192LL) == a1
      && (*((_DWORD *)NextElement + 16) & 1) == 0 )
    {
      ++*a3;
      if ( v3 >= 0 )
      {
        v3 = CmpTransMgrCommitUoW(NextElement, &v14);
        if ( v3 >= 0 )
          *((_DWORD *)NextElement + 16) |= 1u;
      }
    }
    NextElement = CmListGetNextElement((_QWORD **)(a2 + 16), &v13, 0);
  }
  while ( NextElement );
  if ( v3 >= 0 )
  {
LABEL_14:
    CmpLockRegistry();
    for ( i = CmpGetNextActiveHive(0LL); i; i = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)i) )
    {
      if ( i[524] == a1 && (i[20] & 2) == 0 && (unsigned __int8)CmpIsHiveBoundToTrans(i, a2) == 1 )
      {
        CmpUnlockRegistry();
        if ( (int)CmpTransMgrSyncHive((ULONG_PTR)i) < 0 )
          v3 = -1073741670;
        CmpLockRegistry();
      }
    }
    CmpUnlockRegistry();
    LOCK_TRANSACTION_LIST();
    *(_DWORD *)(a2 + 48) |= 4u;
    UNLOCK_TRANSACTION_LIST();
  }
  CmpDetachFromRegistryProcess((__int64)v15);
  if ( (unsigned int)dword_140C02130 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    {
      v11 = *a3;
      v19 = 0;
      v12 = v11;
      v18 = 4;
      v17 = &v12;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)byte_140022B37,
        0LL,
        0LL,
        3u,
        &v16);
    }
  }
  return (unsigned int)v3;
}
