/*
 * XREFs of RmCoreRpcSrvDisconnectFromRmServer @ 0x180069DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x18006A214 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 */

__int64 __fastcall RmCoreRpcSrvDisconnectFromRmServer(struct _RM_ACTIVATOR **a1)
{
  struct _RM_ACTIVATOR *v2; // rbx
  DWORD v3; // ebx
  _BYTE v5[144]; // [rsp+20h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v5);
  RmpAcquireGlobalLock();
  v2 = *a1;
  RmpActivatorCleanup(*a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  RmpReleaseGlobalLock();
  *a1 = 0LL;
  v3 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v3, 0LL);
  }
  return 0LL;
}
