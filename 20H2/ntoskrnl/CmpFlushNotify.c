/*
 * XREFs of CmpFlushNotify @ 0x1406A3528
 * Callers:
 *     CmpDeleteKeyObject @ 0x14061C620 (CmpDeleteKeyObject.c)
 *     CmpPerformUnloadKey @ 0x1406A26DC (CmpPerformUnloadKey.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1407017C0 (CmpFlushNotifiesOnKeyBodyList.c)
 * Callees:
 *     CmpPostNotify @ 0x1405F3C84 (CmpPostNotify.c)
 *     CmLockHive @ 0x1405F7884 (CmLockHive.c)
 *     CmUnlockHive @ 0x1405F7BA8 (CmUnlockHive.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
      CmpPostNotify((__int64)v3, a2, (__int64)a3, 267LL, 0, 0LL, a3);
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
