/*
 * XREFs of ?HampHostIdStoreInvalidateForUserSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_USER@@@Z @ 0x180081BF0
 * Callers:
 *     ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x1800817D0 (-HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z5@Z @ 0x18000E398 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180034ADC (-HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 */

void __fastcall HampHostIdStoreInvalidateForUserSession(struct _HAM_HOSTID_STORE *a1, struct _HAM_USER *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rdx

  v2 = *((_QWORD *)a2 + 20);
  HampHostIdStoreAcquireLockExclusive(a1, (__int64)a2);
  HampHostIdStoreEnumerateMatchingEntries(
    a1,
    (unsigned int *)(v2 + 88),
    (struct _HAM_USER *)((char *)a2 + 88),
    0LL,
    (unsigned int (*)(struct _HAM_HOSTID_STORE_LEAF_ENTRY *, void *))HampHostIdStoreInvalidateEntryCallback,
    0LL);
  HampHostIdStoreReleaseLockExclusive(a1, v5);
}
