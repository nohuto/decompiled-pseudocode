/*
 * XREFs of CmpUnJoinClassOfTrust @ 0x140208994
 * Callers:
 *     CmShutdownSystem2 @ 0x14053EE38 (CmShutdownSystem2.c)
 *     CmpDestroyHive @ 0x14065A7E0 (CmpDestroyHive.c)
 *     CmpCompleteUnloadKey @ 0x14067BE48 (CmpCompleteUnloadKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140914914 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     CmpUnlockHiveList @ 0x1406DEFDC (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x1406DEFFC (CmpLockHiveListExclusive.c)
 */

void __fastcall CmpUnJoinClassOfTrust(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 4120);
  if ( (_QWORD *)*v1 != v1 )
  {
    CmpLockHiveListExclusive();
    v2 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v3 = (_QWORD *)v1[1], (_QWORD *)*v3 != v1) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    CmpUnlockHiveList();
  }
}
