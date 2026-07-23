/*
 * XREFs of _RtlInitializeHeapGC@4 @ 0x4B2E648E
 * Callers:
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 * Callees:
 *     _TpAllocTimer@16 @ 0x4B2B4570 (_TpAllocTimer@16.c)
 */

void __thiscall RtlInitializeHeapGC(struct _TP_POOL *this)
{
  PTP_TIMER Timer; // [esp+4h] [ebp-2Ch] BYREF
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [esp+8h] [ebp-28h] BYREF

  if ( (RtlpHpLfhPerfFlags & 0x40) != 0 )
  {
    Timer = 0;
    if ( this )
    {
      CallbackEnviron.Version = 3;
      memset(&CallbackEnviron.CleanupGroup, 0, 24);
      CallbackEnviron.Size = 40;
      CallbackEnviron.Pool = this;
      CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_LOW;
      if ( TpAllocTimer(&Timer, RtlpHpGCCallback, 0, &CallbackEnviron) >= 0 )
      {
        RtlpHpGCTimer = Timer;
        RtlpHpGCTimerInitialized = 1;
      }
    }
  }
}
