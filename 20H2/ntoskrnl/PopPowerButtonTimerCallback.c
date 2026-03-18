/*
 * XREFs of PopPowerButtonTimerCallback @ 0x140576DD0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     PopQueueWorkItem @ 0x1403316F4 (PopQueueWorkItem.c)
 */

void __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopPowerButtonHold);
  if ( (qword_140C20778 & 1) != 0 && HIDWORD(qword_140C20778) == a2 )
  {
    LODWORD(qword_140C20778) = qword_140C20778 & 1 | ((qword_140C20778 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_140C20750, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
}
