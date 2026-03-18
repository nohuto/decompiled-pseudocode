/*
 * XREFs of EngLockDriverObj @ 0x1C014D6C0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C001783C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgLockEx @ 0x1C0045120 (HmgLockEx.c)
 */

DRIVEROBJ *__stdcall EngLockDriverObj(HDRVOBJ hdo)
{
  DRIVEROBJ *v1; // rbx
  __int64 v2; // rax

  v1 = 0LL;
  v2 = HmgLockEx((unsigned int)hdo, 28, 0);
  if ( v2 )
    return (DRIVEROBJ *)(v2 + 24);
  return v1;
}
