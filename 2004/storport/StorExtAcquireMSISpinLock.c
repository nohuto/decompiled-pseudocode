/*
 * XREFs of StorExtAcquireMSISpinLock @ 0x1C00378F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StorExtAcquireMSISpinLock(__int64 a1, unsigned int a2)
{
  return KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(*(_QWORD *)(**(_QWORD **)(a1 - 16) + 4496LL) + 48LL * a2 + 24));
}
