/*
 * XREFs of ?HampActWaitForNoChangeInProgress@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180081624
 * Callers:
 *     ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x18007D214 (-HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STA.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x18001E5C0 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003423C (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall HampActWaitForNoChangeInProgress(struct _RM_HAM_ACTIVITY_HOST **a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int *v4; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v5; // rbx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  HampHostAcquireLockSharedEx(a1[10], 0);
  v4 = (int *)(a1 + 68);
  while ( 1 )
  {
    v5 = a1[10];
    if ( (*v4 & 1) == 0 )
      break;
    v6 = *v4;
    CempLockTrackerMarkReleased(v3, v2, 1u);
    RtlReleaseSRWLockShared(v5);
    RtlWaitOnAddress(a1 + 68, &v6, 4LL);
    HampHostAcquireLockSharedEx(a1[10], 0);
  }
  CempLockTrackerMarkReleased(v3, v2, 1u);
  RtlReleaseSRWLockShared(v5);
}
