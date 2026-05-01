/*
 * XREFs of RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x180069D40
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x18006A214 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 */

void __fastcall RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown(struct _RM_ACTIVATOR *a1)
{
  DWORD v2; // ebx
  _BYTE v3[144]; // [rsp+20h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v3);
  RmpAcquireGlobalLock();
  RmpActivatorCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  RmpReleaseGlobalLock();
  v2 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v2, 0LL);
  }
}
