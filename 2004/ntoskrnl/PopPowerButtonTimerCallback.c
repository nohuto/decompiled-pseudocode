/*
 * XREFs of PopPowerButtonTimerCallback @ 0x1405733A0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     PopQueueWorkItem @ 0x140360AC4 (PopQueueWorkItem.c)
 */

void __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopPowerButtonHold);
  if ( (qword_140C206B8 & 1) != 0 && HIDWORD(qword_140C206B8) == a2 )
  {
    LODWORD(qword_140C206B8) = qword_140C206B8 & 1 | ((qword_140C206B8 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_140C20690, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
}
