/*
 * XREFs of ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x1800043C0
 * Callers:
 *     RmgrSrv_RmAccessCheck @ 0x180036390 (RmgrSrv_RmAccessCheck.c)
 *     RmgrSrv_RmAccessCheckOnCaller @ 0x180063670 (RmgrSrv_RmAccessCheckOnCaller.c)
 *     ?CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z @ 0x180074010 (-CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z.c)
 * Callees:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180004464 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheckEx(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // r9
  unsigned int v7; // edi
  DWORD v8; // ebx
  _BYTE v10[144]; // [rsp+20h] [rbp-B8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v10);
  RmpAcquireGlobalLock();
  LOBYTE(v6) = 1;
  v7 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(a1, a2, a3, v6);
  RmpReleaseGlobalLock();
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v8, 0LL);
  }
  return v7;
}
