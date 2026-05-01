/*
 * XREFs of ?HampUserReleaseLockShared@@YAXPEAU_HAM_USER@@@Z @ 0x180034FDC
 * Callers:
 *     ?HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x180034F78 (-HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x18001E700 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampUserReleaseLockShared(struct _HAM_USER *a1, __int64 a2)
{
  CempLockTrackerMarkReleased((__int64)a1, a2, 7u);
  RtlReleaseSRWLockShared((char *)a1 + 168);
}
