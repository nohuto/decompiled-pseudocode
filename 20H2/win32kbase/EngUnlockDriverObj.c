/*
 * XREFs of EngUnlockDriverObj @ 0x1C014D6F0
 * Callers:
 *     <none>
 * Callees:
 *     HmgLockEx @ 0x1C0045120 (HmgLockEx.c)
 */

BOOL __stdcall EngUnlockDriverObj(HDRVOBJ hdo)
{
  __int64 v1; // rax

  v1 = HmgLockEx((unsigned int)hdo, 28, 0);
  if ( v1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 12));
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 12));
    LODWORD(v1) = 1;
  }
  return v1;
}
