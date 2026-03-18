/*
 * XREFs of GreReleaseFastMutex @ 0x1C001CFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreReleaseFastMutex(struct _FAST_MUTEX *a1)
{
  KeReleaseGuardedMutex(a1);
}
