/*
 * XREFs of ?RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180001240
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x1800012E4 (-RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

void __fastcall RmpQoSWatchdogCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_QOS_CONTEXT *a2,
        struct _TP_TIMER *a3)
{
  DWORD v4; // ebx
  unsigned __int64 v5; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v6[144]; // [rsp+30h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v6);
  RmpAcquireGlobalLock();
  RtlQueryUnbiasedInterruptTime(&v5);
  RmpQoSCheckHostsSetTimer(a2, v5);
  RmpReleaseGlobalLock();
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v4, 0LL);
  }
}
