/*
 * XREFs of PopPowerButtonTimerCallback @ 0x140572D50
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     PopQueueWorkItem @ 0x140322ED4 (PopQueueWorkItem.c)
 */

void __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopPowerButtonHold);
  if ( (qword_140C20878 & 1) != 0 && HIDWORD(qword_140C20878) == a2 )
  {
    LODWORD(qword_140C20878) = qword_140C20878 & 1 | ((qword_140C20878 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_140C20850, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
}
