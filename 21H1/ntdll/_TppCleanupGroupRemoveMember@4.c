/*
 * XREFs of _TppCleanupGroupRemoveMember@4 @ 0x4B2EC7E9
 * Callers:
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _TppCleanupGroupRemoveMember@4 @ 0x4B2EC7E9 (_TppCleanupGroupRemoveMember@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

void __thiscall TppCleanupGroupRemoveMember(_DWORD *this)
{
  _RTL_SRWLOCK *v1; // esi
  _DWORD *v2; // edi
  int v3; // ecx
  _DWORD *v4; // eax

  v1 = (_RTL_SRWLOCK *)this[2];
  v2 = this + 5;
  if ( (_DWORD *)*v2 != v2 )
  {
    RtlAcquireSRWLockExclusive(v1 + 2);
    v3 = *v2;
    v4 = (_DWORD *)v2[1];
    if ( *(_DWORD **)(*v2 + 4) != v2 || (_DWORD *)*v4 != v2 )
      __fastfail(3u);
    *v4 = v3;
    *(_DWORD *)(v3 + 4) = v4;
    RtlReleaseSRWLockExclusive(v1 + 2);
  }
}
