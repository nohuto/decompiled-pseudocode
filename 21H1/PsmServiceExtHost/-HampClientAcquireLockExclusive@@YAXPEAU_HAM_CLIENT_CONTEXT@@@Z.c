/*
 * XREFs of ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800087DC
 * Callers:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800270D4 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x18000AD04 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampClientAcquireLockExclusive(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  CempLockTrackerMarkAcquired(a1, a2, 9LL);
  RtlAcquireSRWLockExclusive((char *)a1 + 24);
  *((_DWORD *)a1 + 8) = GetCurrentThreadId();
}
