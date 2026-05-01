/*
 * XREFs of ?HampPkgFindInUser@@YAPEAU_HAM_PACKAGE@@PEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180026758
 * Callers:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x18002667C (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 * Callees:
 *     CemRcTableFind @ 0x18000EBC0 (CemRcTableFind.c)
 */

struct _HAM_PACKAGE *__fastcall HampPkgFindInUser(struct _HAM_USER *a1, struct _HAM_PACKAGE_INFO *a2)
{
  return (struct _HAM_PACKAGE *)CemRcTableFind(
                                  (unsigned __int64)a1 + 40,
                                  (__int64)a2,
                                  (__int64 (__fastcall *)(__int64, __int64))HampPkgCompareByIdentity);
}
