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

signed __int32 __thiscall TppCleanupGroupAddMember(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edx

  v2 = this[2];
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v2 + 8));
  v3 = this + 5;
  v4 = *(_DWORD **)(v2 + 16);
  if ( *v4 != v2 + 12 )
    __fastfail(3u);
  *v3 = v2 + 12;
  this[6] = v4;
  *v4 = v3;
  *(_DWORD *)(v2 + 16) = v3;
  return RtlReleaseSRWLockExclusive((volatile signed __int32 *)(v2 + 8));
}
