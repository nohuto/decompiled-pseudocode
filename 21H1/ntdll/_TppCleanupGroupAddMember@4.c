/*
 * XREFs of _TppCleanupGroupAddMember@4 @ 0x4B2E7383
 * Callers:
 *     _TpAllocWork@16 @ 0x4B2B3CB0 (_TpAllocWork@16.c)
 *     _TppInitializeTimer@24 @ 0x4B2B4877 (_TppInitializeTimer@24.c)
 *     _TpAllocIoCompletion@20 @ 0x4B2E6E50 (_TpAllocIoCompletion@20.c)
 *     _TpSimpleTryPost@12 @ 0x4B2E7210 (_TpSimpleTryPost@12.c)
 *     _TppAllocAlpcCompletion@24 @ 0x4B2E9A8F (_TppAllocAlpcCompletion@24.c)
 *     _TpAllocJobNotification@20 @ 0x4B383550 (_TpAllocJobNotification@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _TppCleanupGroupAddMember@4 @ 0x4B2E7383 (_TppCleanupGroupAddMember@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

void __thiscall TppCleanupGroupAddMember(_RTL_SRWLOCK *this)
{
  _RTL_SRWLOCK *Value; // esi
  _RTL_SRWLOCK *v3; // eax
  _RTL_SRWLOCK **v4; // edx

  Value = (_RTL_SRWLOCK *)this[2].Value;
  RtlAcquireSRWLockExclusive(Value + 2);
  v3 = this + 5;
  v4 = (_RTL_SRWLOCK **)Value[4].Value;
  if ( *v4 != &Value[3] )
    __fastfail(3u);
  v3->Value = (unsigned int)&Value[3];
  this[6].Value = (unsigned int)v4;
  *v4 = v3;
  Value[4].Value = (unsigned int)v3;
  RtlReleaseSRWLockExclusive(Value + 2);
}
