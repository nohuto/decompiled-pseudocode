/*
 * XREFs of VslpSkFlushBufferCallback @ 0x1404F8620
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
 *     VslpFlushBufferArray @ 0x1404F8270 (VslpFlushBufferArray.c)
 */

void __fastcall VslpSkFlushBufferCallback(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( VslpEventLog )
  {
    VslpFlushBufferArray();
    KiSetTimerEx(
      (__int64)&VslpFlushTimer,
      -10000000LL * (unsigned int)VslpFlushTimerInterval,
      0,
      0,
      (__int64)&VslpFlushDpc);
  }
}
