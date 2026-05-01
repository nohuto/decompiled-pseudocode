/*
 * XREFs of sub_180038550 @ 0x180038550
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039BE0 @ 0x180039BE0 (sub_180039BE0.c)
 *     sub_180064A2C @ 0x180064A2C (sub_180064A2C.c)
 */

void __fastcall sub_180038550(PTP_CALLBACK_INSTANCE Instance, RTL_SRWLOCK *Context, PTP_TIMER Timer)
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
    sub_180064A2C(Context);
    Ptr = (RTL_SRWLOCK *)Context[3].Ptr;
    if ( Ptr )
      sub_180039BE0(Ptr);
  }
}
