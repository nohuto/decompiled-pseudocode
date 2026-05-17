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

int __fastcall TppPoolAddWorker(int a1, _DWORD *a2)
{
  _DWORD *v4; // eax
  _DWORD *v5; // edx

  a2[5] = NtCurrentTeb()->ClientId.UniqueThread;
  a2[6] = a1;
  RtlAcquireSRWLockExclusive(a1 + 44);
  v4 = a2 + 2;
  v5 = *(_DWORD **)(a1 + 60);
  if ( *v5 != a1 + 56 )
    __fastfail(3u);
  *v4 = a1 + 56;
  a2[3] = v5;
  *v5 = v4;
  *(_DWORD *)(a1 + 60) = v4;
  return RtlReleaseSRWLockExclusive(a1 + 44);
}
