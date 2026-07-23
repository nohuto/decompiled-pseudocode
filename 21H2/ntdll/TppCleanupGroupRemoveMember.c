/*
 * XREFs of TppCleanupGroupRemoveMember @ 0x180076F4C
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x180012088 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall TppCleanupGroupRemoveMember(__int64 a1)
{
  _RTL_SRWLOCK *v1; // rdi
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rax

  v1 = *(_RTL_SRWLOCK **)(a1 + 16);
  v2 = (_QWORD *)(a1 + 40);
  if ( (_QWORD *)*v2 != v2 )
  {
    RtlAcquireSRWLockExclusive(v1 + 1);
    v3 = *v2;
    v4 = (_QWORD *)v2[1];
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v4 != v2 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    RtlReleaseSRWLockExclusive(v1 + 1);
  }
}
