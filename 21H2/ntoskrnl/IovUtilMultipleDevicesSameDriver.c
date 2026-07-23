/*
 * XREFs of IovUtilMultipleDevicesSameDriver @ 0x1409D7C20
 * Callers:
 *     IovpExamineIrpStackForwarding @ 0x1409D1B74 (IovpExamineIrpStackForwarding.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall IovUtilMultipleDevicesSameDriver(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // edi
  KIRQL v4; // dl
  __int64 i; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0;
  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  for ( i = *(_QWORD *)(a1 + 24); i; i = *(_QWORD *)(i + 24) )
  {
    if ( *(_QWORD *)(i + 8) == v1 )
    {
      v2 = 1;
      break;
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return v2;
}
