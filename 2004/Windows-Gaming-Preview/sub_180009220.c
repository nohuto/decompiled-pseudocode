/*
 * XREFs of sub_180009220 @ 0x180009220
 * Callers:
 *     <none>
 * Callees:
 *     sub_180006954 @ 0x180006954 (sub_180006954.c)
 */

void __fastcall sub_180009220(PTP_CALLBACK_INSTANCE Instance, RTL_SRWLOCK *Context, PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rdi
  RTL_SRWLOCK *Ptr; // rcx

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 4;
    AcquireSRWLockExclusive(Context + 4);
    BYTE1(Context[8].Ptr) = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    Ptr = (RTL_SRWLOCK *)Context[3].Ptr;
    if ( Ptr )
      sub_180006954(Ptr);
  }
}
