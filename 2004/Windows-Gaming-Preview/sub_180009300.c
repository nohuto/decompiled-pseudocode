/*
 * XREFs of sub_180009300 @ 0x180009300
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007A7C @ 0x180007A7C (sub_180007A7C.c)
 */

void __fastcall sub_180009300(PTP_CALLBACK_INSTANCE Instance, RTL_SRWLOCK *Context, PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rdi

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 1;
    AcquireSRWLockExclusive(Context + 1);
    sub_180007A7C((__int64)Context);
    LOBYTE(Context[3].Ptr) = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
