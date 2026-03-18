/*
 * XREFs of EngUnlockDriverObj @ 0x1C0155FF0
 * Callers:
 *     <none>
 * Callees:
 *     HmgLockEx @ 0x1C0083AE0 (HmgLockEx.c)
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
