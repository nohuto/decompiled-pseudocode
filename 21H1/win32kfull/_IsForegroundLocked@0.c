/*
 * XREFs of _IsForegroundLocked@0 @ 0x195B8
 * Callers:
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1770E (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?CheckCanonicalForegroundAccess@@YG_NW4ForegroundChangeAllowPolicy@@@Z @ 0x19546 (-CheckCanonicalForegroundAccess@@YG_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1965E (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _xxxActiveWindowTracking@12 @ 0x14ECA1 (_xxxActiveWindowTracking@12.c)
 * Callees:
 *     <none>
 */

int __stdcall IsForegroundLocked()
{
  int v0; // ecx

  if ( guSFWLockCount )
    return 1;
  v0 = 0;
  if ( _gppiLockSFW )
    return 1;
  return v0;
}
