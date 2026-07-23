/*
 * XREFs of _TppQueueRemoveHead@4 @ 0x4B38508E
 * Callers:
 *     _TpReleasePool@4 @ 0x4B2AAE00 (_TpReleasePool@4.c)
 *     _TppWorkerFindTask@12 @ 0x4B2B6930 (_TppWorkerFindTask@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

_RTL_SRWLOCK *__thiscall TppQueueRemoveHead(_RTL_SRWLOCK *this)
{
  _RTL_SRWLOCK *v2; // ebx
  _RTL_SRWLOCK *Value; // edi
  unsigned int v4; // eax

  v2 = this + 2;
  RtlAcquireSRWLockExclusive(this + 2);
  Value = (_RTL_SRWLOCK *)this->Value;
  if ( *(_RTL_SRWLOCK **)(this->Value + 4) != this || (v4 = Value->Value, *(_RTL_SRWLOCK **)(Value->Value + 4) != Value) )
    __fastfail(3u);
  this->Value = v4;
  *(_DWORD *)(v4 + 4) = this;
  RtlReleaseSRWLockExclusive(v2);
  return this != Value ? Value : 0;
}
