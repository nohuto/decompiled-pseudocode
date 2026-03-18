/*
 * XREFs of ExpWnfDeleteScopeById @ 0x1407914BC
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140693A28 (MiDereferenceSessionFinal.c)
 *     ExWnfExitProcess @ 0x140791970 (ExWnfExitProcess.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExpWnfFreeScopeInstance @ 0x1406E1C68 (ExpWnfFreeScopeInstance.c)
 *     ExpWnfFindScopeInstance @ 0x1407915C4 (ExpWnfFindScopeInstance.c)
 */

void __fastcall ExpWnfDeleteScopeById(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r14
  unsigned __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 ScopeInstance; // rax
  struct _EX_RUNDOWN_REF *v12; // rdi
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax

  v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 114);
  if ( v6 )
  {
    v7 = v6 + 24 * v5;
    v8 = (unsigned __int64 *)(v6 + 8 * (3 * v5 + 4));
    v9 = KeAbPreAcquire((__int64)v8, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, (__int64)v8);
    if ( v10 )
      *(_BYTE *)(v10 + 18) = 1;
    ScopeInstance = ExpWnfFindScopeInstance(v7 + 40, a2, a3);
    v12 = (struct _EX_RUNDOWN_REF *)ScopeInstance;
    if ( ScopeInstance )
    {
      v13 = (_QWORD *)(ScopeInstance + 32);
      v14 = *(_QWORD *)(ScopeInstance + 32);
      v15 = *(_QWORD **)(ScopeInstance + 40);
      if ( *(_QWORD **)(v14 + 8) != v13 || (_QWORD *)*v15 != v13 )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      *v13 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    if ( v12 )
      ExpWnfFreeScopeInstance(v12, 1);
  }
}
