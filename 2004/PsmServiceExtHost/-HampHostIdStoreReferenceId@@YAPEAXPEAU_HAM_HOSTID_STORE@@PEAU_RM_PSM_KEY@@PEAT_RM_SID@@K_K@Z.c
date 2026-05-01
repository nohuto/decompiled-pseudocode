/*
 * XREFs of ?HampHostIdStoreReferenceId@@YAPEAXPEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PEAT_RM_SID@@K_K@Z @ 0x18000D384
 * Callers:
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000C8CC (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z5@Z @ 0x18000E398 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     CempLockTrackerMarkReleased @ 0x18001E5C0 (CempLockTrackerMarkReleased.c)
 */

__int64 __fastcall HampHostIdStoreReferenceId(
        struct _HAM_HOSTID_STORE *a1,
        struct _RM_PSM_KEY *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  DWORD v7; // edi
  _QWORD *Value; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  unsigned int v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = a4;
  v14 = 0LL;
  v7 = HampLockTrackerId;
  v13 = a5;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x800uLL;
    ++Value[12];
  }
  RtlAcquireSRWLockShared(a1);
  HampHostIdStoreEnumerateMatchingEntries(
    a1,
    &v15,
    a3,
    a2,
    (unsigned int (*)(struct _HAM_HOSTID_STORE_LEAF_ENTRY *, void *))HampHostIdStoreReferenceHostIdCallback,
    &v13);
  CempLockTrackerMarkReleased(v11, v10, 11LL);
  RtlReleaseSRWLockShared(a1);
  return v14;
}
