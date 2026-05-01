/*
 * XREFs of sub_180063DD0 @ 0x180063DD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066E48 @ 0x180066E48 (sub_180066E48.c)
 */

void __fastcall sub_180063DD0(PTP_CALLBACK_INSTANCE Instance, RTL_SRWLOCK *Context, PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rdi

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 5;
    AcquireSRWLockExclusive(Context + 5);
    if ( (PVOID)((char *)Context[32].Ptr - (char *)Context[31].Ptr) >= (PVOID)0xC )
    {
      sub_180066E48(&Context[31]);
      Context[32].Ptr = Context[31].Ptr;
    }
    LOBYTE(Context[8].Ptr) = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
