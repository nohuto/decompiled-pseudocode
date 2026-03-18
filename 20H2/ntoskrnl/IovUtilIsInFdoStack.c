/*
 * XREFs of IovUtilIsInFdoStack @ 0x1409D9AB0
 * Callers:
 *     IovpCallDriver1 @ 0x1409D2C5C (IovpCallDriver1.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1409D9A5C (IovUtilIsDeviceObjectMarked.c)
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
