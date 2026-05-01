/*
 * XREFs of ?HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z @ 0x180002C40
 * Callers:
 *     ?HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z @ 0x180002AFC (-HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z.c)
 * Callees:
 *     ?HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180002CC4 (-HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x18000D5F4 (-HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z5@Z @ 0x18000E628 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 */

__int64 __fastcall HampHostIdStoreRetrieveDynamicId(
        struct _HAM_HOSTID_STORE *a1,
        union _RM_SID *a2,
        unsigned int a3,
        __int64 a4,
        struct _GUID *a5)
{
  _QWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  unsigned int v10; // [rsp+70h] [rbp+18h] BYREF

  v10 = a3;
  v9 = 0LL;
  v8[1] = a5;
  v8[0] = a4;
  HampHostIdStoreAcquireLockShared(a1);
  HampHostIdStoreEnumerateMatchingEntries(
    a1,
    &v10,
    a2,
    0LL,
    (unsigned int (*)(struct _HAM_HOSTID_STORE_LEAF_ENTRY *, void *))HampHostIdStoreRetrieveDynamicIdCallback,
    v8);
  HampHostIdStoreReleaseLockShared(a1);
  return (_DWORD)v9 == 0 ? 0xC0000225 : 0;
}
