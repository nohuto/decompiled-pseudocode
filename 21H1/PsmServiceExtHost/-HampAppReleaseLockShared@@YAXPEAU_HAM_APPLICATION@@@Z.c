/*
 * XREFs of ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180036BBC
 * Callers:
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019550 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x18001E5C0 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampAppReleaseLockShared(struct _HAM_APPLICATION *a1, __int64 a2)
{
  CempLockTrackerMarkReleased((__int64)a1, a2, 5u);
  RtlReleaseSRWLockShared((char *)a1 + 576);
}
