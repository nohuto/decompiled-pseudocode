/*
 * XREFs of TppPoolRemoveWorker @ 0x180054864
 * Callers:
 *     TppWorkerThread @ 0x180052B20 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall TppPoolRemoveWorker(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1[6] + 72LL));
  v2 = a1[2];
  v3 = (_QWORD *)a1[3];
  if ( *(_QWORD **)(v2 + 8) != a1 + 2 || (_QWORD *)*v3 != a1 + 2 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1[6] + 72LL));
}
