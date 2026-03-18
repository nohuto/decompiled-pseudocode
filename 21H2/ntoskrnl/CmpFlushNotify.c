/*
 * XREFs of CmpFlushNotify @ 0x14069F668
 * Callers:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14067EE40 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpPerformUnloadKey @ 0x14069E98C (CmpPerformUnloadKey.c)
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     CmpPostNotify @ 0x14071C288 (CmpPostNotify.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFlushNotify(__int64 a1, char a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v7; // rax
  volatile signed __int64 *v8; // rbx

  v3 = *(_QWORD **)(a1 + 16);
  if ( !v3 )
    return;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = (volatile signed __int64 *)(*(_QWORD *)(v7 + 32) + 1680LL);
  if ( a2 || (ExAcquirePushLockExclusiveEx(*(_QWORD *)(v7 + 32) + 1680LL, 0LL), (v3 = *(_QWORD **)(a1 + 16)) != 0LL) )
  {
    if ( (_QWORD *)v3[2] == v3 + 2
      || (CmpPostNotify((_DWORD)v3, a2, a3, 267, 0, 0LL, a3), (v3 = *(_QWORD **)(a1 + 16)) != 0LL) )
    {
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v3 + 7));
      *(_QWORD *)v3[1] = *v3;
      if ( *v3 )
        *(_QWORD *)(*v3 + 8LL) = v3[1];
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !a2 )
      {
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        KeAbPostRelease((ULONG_PTR)v8);
      }
      ExFreePoolWithTag(v3, 0);
      return;
    }
    if ( a2 )
      return;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
}
