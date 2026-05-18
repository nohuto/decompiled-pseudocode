/*
 * XREFs of pfnti @ 0x1800162A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001C56C @ 0x18001C56C (sub_18001C56C.c)
 */

void __fastcall pfnti(PTP_CALLBACK_INSTANCE Instance, RTL_SRWLOCK *Context, PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rdi

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 1;
    AcquireSRWLockExclusive(Context + 1);
    sub_18001C56C(Context);
    LOBYTE(Context[3].Ptr) = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
