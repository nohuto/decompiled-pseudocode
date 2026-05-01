/*
 * XREFs of CempLockReleaseExclusive @ 0x180085A94
 * Callers:
 *     CrmActivityCleanup @ 0x18002F500 (CrmActivityCleanup.c)
 *     CrmStateMonitorListenerRemove @ 0x1800366BC (CrmStateMonitorListenerRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempLockReleaseExclusive(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = 0;
  return RtlReleaseSRWLockExclusive(a1);
}
