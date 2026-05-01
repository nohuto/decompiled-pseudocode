/*
 * XREFs of ?HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180002B24
 * Callers:
 *     ?HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z @ 0x180002AA0 (-HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x18001E5C0 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampHostIdStoreReleaseLockShared(struct _HAM_HOSTID_STORE *a1, __int64 a2)
{
  CempLockTrackerMarkReleased(a1, a2, 11LL);
  RtlReleaseSRWLockShared(a1);
}
