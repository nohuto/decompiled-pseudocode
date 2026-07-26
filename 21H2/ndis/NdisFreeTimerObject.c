/*
 * XREFs of NdisFreeTimerObject @ 0x1C00BD120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisFreeTimerObject(NDIS_HANDLE TimerObject)
{
  KIRQL v2; // al
  NDIS_HANDLE *v3; // r9
  NDIS_HANDLE *v4; // r8

  v2 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalTimerListLock);
  v3 = (NDIS_HANDLE *)*((_QWORD *)TimerObject + 1);
  if ( v3[1] != (char *)TimerObject + 8
    || (v4 = (NDIS_HANDLE *)*((_QWORD *)TimerObject + 2), *v4 != (char *)TimerObject + 8) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  v3[1] = v4;
  KeReleaseSpinLock(&ndisGlobalTimerListLock, v2);
  ExFreePoolWithTag(TimerObject, 0);
}
