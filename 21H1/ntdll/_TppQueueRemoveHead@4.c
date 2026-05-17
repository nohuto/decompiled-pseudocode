/*
 * XREFs of _TppQueueRemoveHead@4 @ 0x4B38508E
 * Callers:
 *     _TpReleasePool@4 @ 0x4B2AAE00 (_TpReleasePool@4.c)
 *     _TppWorkerFindTask@12 @ 0x4B2B6930 (_TppWorkerFindTask@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

volatile signed __int32 *__thiscall TppQueueRemoveHead(volatile signed __int32 *this)
{
  volatile signed __int32 *v2; // ebx
  volatile signed __int32 *v3; // edi
  volatile signed __int32 v4; // eax

  v2 = this + 2;
  RtlAcquireSRWLockExclusive(this + 2);
  v3 = (volatile signed __int32 *)*this;
  if ( *(volatile signed __int32 **)(*this + 4) != this || (v4 = *v3, *(volatile signed __int32 **)(*v3 + 4) != v3) )
    __fastfail(3u);
  *this = v4;
  *(_DWORD *)(v4 + 4) = this;
  RtlReleaseSRWLockExclusive(v2);
  return this != v3 ? v3 : 0;
}
