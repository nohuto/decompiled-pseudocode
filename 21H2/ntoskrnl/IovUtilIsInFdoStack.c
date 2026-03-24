/*
 * XREFs of IovUtilIsInFdoStack @ 0x1409D6AA0
 * Callers:
 *     IovpCallDriver1 @ 0x1409CFC4C (IovpCallDriver1.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140310BD0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140310C70 (KeAcquireQueuedSpinLock.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1409D6A4C (IovUtilIsDeviceObjectMarked.c)
 */

__int64 __fastcall IovUtilIsInFdoStack(__int64 a1)
{
  unsigned int v2; // edi
  KIRQL v3; // r8

  KeAcquireQueuedSpinLock(0xAuLL);
  v2 = 0;
  do
  {
    if ( (unsigned int)IovUtilIsDeviceObjectMarked(a1, 1) )
      break;
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 48LL);
  }
  while ( a1 );
  KeReleaseQueuedSpinLock(0xAuLL, v3);
  LOBYTE(v2) = a1 != 0;
  return v2;
}
