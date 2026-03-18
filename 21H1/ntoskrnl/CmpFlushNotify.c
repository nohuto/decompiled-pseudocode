/*
 * XREFs of CmpFlushNotify @ 0x140659FD8
 * Callers:
 *     CmpDeleteKeyObject @ 0x140622AD0 (CmpDeleteKeyObject.c)
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140691D6C (CmpFlushNotifiesOnKeyBodyList.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     CmLockHive @ 0x1405F3CFC (CmLockHive.c)
 *     CmUnlockHive @ 0x1405F4018 (CmUnlockHive.c)
 *     CmpPostNotify @ 0x14061A9A8 (CmpPostNotify.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFlushNotify(__int64 a1, __int64 a2, __int128 *a3)
{
  char *v3; // rbx
  char v5; // si
  __int64 v7; // rax
  __int64 v8; // rdi

  v3 = *(char **)(a1 + 16);
  v5 = a2;
  if ( v3 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(v7 + 32);
    if ( !(_BYTE)a2 )
    {
      CmLockHive(*(_QWORD *)(v7 + 32));
      v3 = *(char **)(a1 + 16);
    }
    if ( !v3 )
      goto LABEL_14;
    if ( *((char **)v3 + 2) != v3 + 16 )
    {
      CmpPostNotify((__int64)v3, a2, (__int64)a3, 0x10Bu, 0, 0LL, a3);
      v3 = *(char **)(a1 + 16);
    }
    if ( v3 )
    {
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v3 + 56));
      **((_QWORD **)v3 + 1) = *(_QWORD *)v3;
      if ( *(_QWORD *)v3 )
        *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *((_QWORD *)v3 + 1);
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !v5 )
        CmUnlockHive(v8);
      ExFreePoolWithTag(v3, 0);
    }
    else
    {
LABEL_14:
      if ( !v5 )
        CmUnlockHive(v8);
    }
  }
}
