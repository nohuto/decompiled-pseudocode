/*
 * XREFs of ?HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x18003BB50
 * Callers:
 *     ?HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18003BA70 (-HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     ?HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DATA@@@Z @ 0x18007BE54 (-HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DAT.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x18000AD04 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampSessionAcquireLockExclusive(struct _HAM_SESSION *a1, __int64 a2)
{
  CempLockTrackerMarkAcquired((__int64)a1, a2, 8u, 0);
  RtlAcquireSRWLockExclusive((char *)a1 + 96);
  *((_DWORD *)a1 + 26) = GetCurrentThreadId();
}
