/*
 * XREFs of GreCreateFastMutex @ 0x1C000A9CC
 * Callers:
 *     HmgCreate @ 0x1C00087BC (HmgCreate.c)
 *     EngCreateFastMutex @ 0x1C014E6B0 (EngCreateFastMutex.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C00A5C70 (Win32AllocPoolNonPaged.c)
 */

struct _FAST_MUTEX *GreCreateFastMutex()
{
  struct _FAST_MUTEX *v0; // rax
  struct _FAST_MUTEX *v1; // rbx

  v0 = (struct _FAST_MUTEX *)Win32AllocPoolNonPaged(56LL, 1836279367LL);
  v1 = v0;
  if ( v0 )
    KeInitializeGuardedMutex(v0);
  return v1;
}
