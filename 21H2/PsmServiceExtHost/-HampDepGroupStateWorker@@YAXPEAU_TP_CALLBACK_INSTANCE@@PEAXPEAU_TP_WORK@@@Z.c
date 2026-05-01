/*
 * XREFs of ?HampDepGroupStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x180008E3C (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000E0D0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000E158 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017E70 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800285A8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

void __fastcall HampDepGroupStateWorker(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _HAM_DEPENDENCY_GROUP *a2,
        struct _TP_WORK *a3)
{
  __int64 v4; // rdi
  DWORD v5; // ebx
  int v6; // edx
  __int64 v7; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v8[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+D0h] [rbp-48h] BYREF
  __int64 *v10; // [rsp+F0h] [rbp-28h]
  int v11; // [rsp+F8h] [rbp-20h]
  int v12; // [rsp+FCh] [rbp-1Ch]

  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A15F4, 0, 0, 2u, &v9);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v8);
  while ( 1 )
  {
    HampDepGroupAcquireLockExclusive(a2);
    if ( *((_QWORD *)a2 + 14) == *((_QWORD *)a2 + 13) || !(unsigned int)HampDepGroupTryEnterStateChange(a2, 0LL) )
      break;
    HampDepGroupReleaseLockExclusive(a2);
    HampDepGroupRunStateChangeWorker(a2);
  }
  *((_DWORD *)a2 + 33) &= ~1u;
  HampDepGroupReleaseLockExclusive(a2);
  v4 = *(_QWORD *)a2;
  HampDepGroupDereference(a2);
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v5, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 8LL) )
    {
      v12 = 0;
      v10 = &v7;
      v11 = v6;
      v7 = v4;
      tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A15C9, 0, 0, 3u, &v9);
    }
  }
}
