/*
 * XREFs of GreAcquireFastMutex @ 0x1C0030E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreAcquireFastMutex(struct _FAST_MUTEX *a1)
{
  KeAcquireGuardedMutex(a1);
}
