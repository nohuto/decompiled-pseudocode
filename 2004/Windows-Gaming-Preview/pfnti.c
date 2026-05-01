/*
 * XREFs of pfnti @ 0x180009280
 * Callers:
 *     <none>
 * Callees:
 *     sub_180004CAC @ 0x180004CAC (sub_180004CAC.c)
 */

void __fastcall pfnti(PTP_CALLBACK_INSTANCE Instance, char *Context, PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8

  if ( *Context )
  {
    v4 = (RTL_SRWLOCK *)(Context + 40);
    AcquireSRWLockExclusive((PSRWLOCK)Context + 5);
    if ( *((_QWORD *)Context + 32) - *((_QWORD *)Context + 31) >= 0xCuLL )
    {
      sub_180004CAC((__int64 *)Context + 31, v5, v6);
      *((_QWORD *)Context + 32) = *((_QWORD *)Context + 31);
    }
    Context[64] = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
