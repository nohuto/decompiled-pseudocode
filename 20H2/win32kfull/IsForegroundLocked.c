/*
 * XREFs of IsForegroundLocked @ 0x1C002D180
 * Callers:
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C002B96C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C002CB24 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C002D0F0 (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     xxxActiveWindowTracking @ 0x1C01E22BC (xxxActiveWindowTracking.c)
 * Callees:
 *     <none>
 */

__int64 IsForegroundLocked()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( guSFWLockCount || gppiLockSFW )
    return 1;
  return v0;
}
