/*
 * XREFs of _RtlpFcCallChangeCallbacks@4 @ 0x4B369846
 * Callers:
 *     _RtlpFcWnfCallback@28 @ 0x4B369980 (_RtlpFcWnfCallback@28.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _TpPostWork@4 @ 0x4B2C1B30 (_TpPostWork@4.c)
 */

int __thiscall RtlpFcCallChangeCallbacks(int this)
{
  volatile signed __int32 *v2; // ebx
  _DWORD *v3; // edi
  _DWORD *i; // esi

  v2 = (volatile signed __int32 *)(this + 144);
  RtlAcquireSRWLockShared((volatile signed __int32 *)(this + 144));
  v3 = (_DWORD *)(this + 148);
  for ( i = *(_DWORD **)(this + 148); i != v3; i = (_DWORD *)*i )
    TpPostWork(i[5]);
  return RtlReleaseSRWLockShared(v2);
}
