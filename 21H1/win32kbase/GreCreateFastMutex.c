/*
 * XREFs of GreCreateFastMutex @ 0x1C002109C
 * Callers:
 *     HmgCreate @ 0x1C001EE8C (HmgCreate.c)
 *     EngCreateFastMutex @ 0x1C0154A00 (EngCreateFastMutex.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
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
