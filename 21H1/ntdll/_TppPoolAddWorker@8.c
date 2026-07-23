/*
 * XREFs of _TppPoolAddWorker@8 @ 0x4B2B7F58
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _TppPoolAddWorker@8 @ 0x4B2B7F58 (_TppPoolAddWorker@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

void __fastcall TppPoolAddWorker(_RTL_SRWLOCK *a1, _RTL_SRWLOCK *a2)
{
  _RTL_SRWLOCK *v4; // eax
  _RTL_SRWLOCK **Value; // edx

  a2[5].0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)NtCurrentTeb()->ClientId.UniqueThread;
  a2[6].Value = (unsigned int)a1;
  RtlAcquireSRWLockExclusive(a1 + 11);
  v4 = a2 + 2;
  Value = (_RTL_SRWLOCK **)a1[15].Value;
  if ( *Value != &a1[14] )
    __fastfail(3u);
  v4->Value = (unsigned int)&a1[14];
  a2[3].Value = (unsigned int)Value;
  *Value = v4;
  a1[15].Value = (unsigned int)v4;
  RtlReleaseSRWLockExclusive(a1 + 11);
}
