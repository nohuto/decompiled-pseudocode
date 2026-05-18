/*
 * XREFs of sub_1800163A0 @ 0x1800163A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B77C @ 0x18001B77C (sub_18001B77C.c)
 */

void __fastcall sub_1800163A0(PTP_CALLBACK_INSTANCE Instance, RTL_SRWLOCK *Context, PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rdi

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 4;
    AcquireSRWLockExclusive(Context + 4);
    BYTE1(Context[8].Ptr) = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    sub_18001B77C(Context);
  }
}
