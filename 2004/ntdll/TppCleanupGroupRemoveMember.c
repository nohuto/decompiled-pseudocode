/*
 * XREFs of TppCleanupGroupRemoveMember @ 0x180075E1C
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x180012088 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall TppCleanupGroupRemoveMember(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rax

  v4 = *(_QWORD *)(a1 + 16);
  v5 = (_QWORD *)(a1 + 40);
  if ( (_QWORD *)*v5 != v5 )
  {
    RtlAcquireSRWLockExclusive(v4 + 8, a2, a3, a4);
    v6 = *v5;
    v7 = (_QWORD *)v5[1];
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v4 + 8));
  }
}
