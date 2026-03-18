/*
 * XREFs of KeSuspendClockTimer @ 0x140383678
 * Callers:
 *     PopHandleNextState @ 0x1409960D0 (PopHandleNextState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 KeSuspendClockTimer()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  int v2; // edi

  CurrentPrcb = KeGetCurrentPrcb();
  result = (unsigned int)KiClockState;
  v2 = KiClockTimerOwner;
  if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
  {
    result = off_140C00888[0]();
    CurrentPrcb->PendingTickFlags &= ~1u;
  }
  if ( CurrentPrcb->Number == v2 )
    ++dword_140C31428;
  if ( CurrentPrcb->ClockOwner )
    CurrentPrcb->ClockOwner = 0;
  return result;
}
