/*
 * XREFs of CmpFlushNotify @ 0x14065FCAC
 * Callers:
 *     CmpPerformUnloadKey @ 0x1405DFA8C (CmpPerformUnloadKey.c)
 *     CmpDeleteKeyObject @ 0x14065C3E0 (CmpDeleteKeyObject.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140661A20 (CmpFlushNotifiesOnKeyBodyList.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     CmUnlockHive @ 0x14065887C (CmUnlockHive.c)
 *     CmLockHive @ 0x140658BB8 (CmLockHive.c)
 *     CmpPostNotify @ 0x1406DC820 (CmpPostNotify.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFlushNotify(__int64 a1, char a2, __int64 a3)
{
  char *v3; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi

  v3 = *(char **)(a1 + 16);
  if ( v3 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(v7 + 32);
    if ( !a2 )
    {
      CmLockHive(*(_QWORD *)(v7 + 32));
      v3 = *(char **)(a1 + 16);
    }
    if ( !v3 )
      goto LABEL_14;
    if ( *((char **)v3 + 2) != v3 + 16 )
    {
      CmpPostNotify((_DWORD)v3, a2, a3, 267, 0, 0LL, a3);
      v3 = *(char **)(a1 + 16);
    }
    if ( v3 )
    {
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v3 + 56));
      **((_QWORD **)v3 + 1) = *(_QWORD *)v3;
      if ( *(_QWORD *)v3 )
        *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *((_QWORD *)v3 + 1);
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !a2 )
        CmUnlockHive(v8);
      ExFreePoolWithTag(v3, 0);
    }
    else
    {
LABEL_14:
      if ( !a2 )
        CmUnlockHive(v8);
    }
  }
}
