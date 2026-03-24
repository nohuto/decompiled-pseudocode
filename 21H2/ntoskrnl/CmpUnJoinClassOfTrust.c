/*
 * XREFs of CmpUnJoinClassOfTrust @ 0x14036173C
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14071CB34 (CmpCompleteUnloadKey.c)
 *     CmpDestroyHive @ 0x140728F38 (CmpDestroyHive.c)
 *     CmShutdownSystem @ 0x14086B8F8 (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E724 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     CmpLockHiveListExclusive @ 0x14071D2A4 (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x14071D2C4 (CmpUnlockHiveList.c)
 */

void __fastcall CmpUnJoinClassOfTrust(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 4160);
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
