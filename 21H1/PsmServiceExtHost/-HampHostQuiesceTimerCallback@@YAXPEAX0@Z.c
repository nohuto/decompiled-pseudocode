/*
 * XREFs of ?HampHostQuiesceTimerCallback@@YAXPEAX0@Z @ 0x18007DB80
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

void __fastcall HampHostQuiesceTimerCallback(void *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  DWORD v3; // ebx
  _BYTE v4[144]; // [rsp+20h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v4);
  HampHostAcquireLockExclusiveEx(a2, 0);
  if ( (*((_DWORD *)a2 + 162) & 0xE0000000) == 0xA0000000LL )
  {
    HampHostReleaseLockExclusiveEx(a2);
  }
  else
  {
    HampHostReleaseLockExclusiveEx(a2);
    RtlWakeAllConditionVariable((char *)a2 + 680);
  }
  v3 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v3, 0LL);
  }
}
