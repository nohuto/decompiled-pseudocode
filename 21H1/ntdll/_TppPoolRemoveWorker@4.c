/*
 * XREFs of _TppPoolRemoveWorker@4 @ 0x4B2EC1A3
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _TppPoolRemoveWorker@4 @ 0x4B2EC1A3 (_TppPoolRemoveWorker@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

void __thiscall TppPoolRemoveWorker(_DWORD *this)
{
  int v2; // edx
  _DWORD *v3; // ecx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(this[6] + 44));
  v2 = this[2];
  v3 = (_DWORD *)this[3];
  if ( *(_DWORD **)(v2 + 4) != this + 2 || (_DWORD *)*v3 != this + 2 )
    __fastfail(3u);
  *v3 = v2;
  *(_DWORD *)(v2 + 4) = v3;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(this[6] + 44));
}
