/*
 * XREFs of ?HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z @ 0x180034A30
 * Callers:
 *     ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800348C8 (-HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z5@Z @ 0x18000E398 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180034ADC (-HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 */

void __fastcall HampHostIdStoreInvalidateForApplication(struct _HAM_HOSTID_STORE *a1, struct _HAM_APPLICATION *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 11) + 88LL);
  v5 = *(_QWORD *)(v4 + 160);
  HampHostIdStoreAcquireLockExclusive(a1);
  HampHostIdStoreEnumerateMatchingEntries(
    a1,
    (unsigned int *)(v5 + 88),
    (union _RM_SID *)(v4 + 88),
    (struct _HAM_APPLICATION *)((char *)a2 + 96),
    (unsigned int (*)(struct _HAM_HOSTID_STORE_LEAF_ENTRY *, void *))HampHostIdStoreInvalidateEntryCallback,
    0LL);
  HampHostIdStoreReleaseLockExclusive(a1);
}
