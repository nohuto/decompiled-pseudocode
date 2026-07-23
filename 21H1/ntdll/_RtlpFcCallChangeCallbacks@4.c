/*
 * XREFs of _RtlpFcCallChangeCallbacks@4 @ 0x4B369846
 * Callers:
 *     _RtlpFcWnfCallback@28 @ 0x4B369980 (_RtlpFcWnfCallback@28.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _TpPostWork@4 @ 0x4B2C1B30 (_TpPostWork@4.c)
 */

void __thiscall RtlpFcCallChangeCallbacks(_RTL_SRWLOCK *this)
{
  _RTL_SRWLOCK *v2; // ebx
  _RTL_SRWLOCK *v3; // edi
  unsigned int i; // esi

  v2 = this + 36;
  RtlAcquireSRWLockShared(this + 36);
  v3 = this + 37;
  for ( i = this[37].Value; (_RTL_SRWLOCK *)i != v3; i = *(_DWORD *)i )
    TpPostWork(*(PTP_WORK *)(i + 20));
  RtlReleaseSRWLockShared(v2);
}
