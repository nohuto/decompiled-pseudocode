/*
 * XREFs of ?HamSrvAddDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z @ 0x180028A24
 * Callers:
 *     HamRpcSrvAddDependency @ 0x180028D80 (HamRpcSrvAddDependency.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x180028620 (-HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180063440 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

void __fastcall __noreturn HamSrvAddDependency(struct _HOST_ACTIVITY_MANAGER **a1, void *a2, void *a3)
{
  _BYTE v6[144]; // [rsp+50h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+E0h] [rbp-58h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
      tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_18009F0C8, 0, 0, 2u, &v7);
  }
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v6);
  HampDepGroupAddProcessDependency(*a1, a2, a3);
}
