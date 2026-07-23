/*
 * XREFs of ExpWnfDeleteScopeById @ 0x14064E12C
 * Callers:
 *     ExWnfExitProcess @ 0x140650E54 (ExWnfExitProcess.c)
 *     MiDereferenceSessionFinal @ 0x140774370 (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExpWnfFindScopeInstance @ 0x140656BF0 (ExpWnfFindScopeInstance.c)
 *     ExpWnfFreeScopeInstance @ 0x1406DF5E0 (ExpWnfFreeScopeInstance.c)
 */

char __fastcall ExpWnfDeleteScopeById(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v7; // r9
  __int64 v8; // r14
  unsigned __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 ScopeInstance; // rax
  void *v13; // rdi
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax

  v4 = a1;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = CurrentServerSiloGlobals[114];
  if ( v7 )
  {
    v8 = v7 + 24 * v4;
    v9 = (unsigned __int64 *)(v7 + 8 * (3 * v4 + 4));
    v10 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    ScopeInstance = ExpWnfFindScopeInstance(v8 + 40, a2, a3);
    v13 = (void *)ScopeInstance;
    if ( ScopeInstance )
    {
      v14 = (_QWORD *)(ScopeInstance + 32);
      v15 = *(_QWORD *)(ScopeInstance + 32);
      v16 = *(_QWORD **)(ScopeInstance + 40);
      if ( *(_QWORD **)(v15 + 8) != v14 || (_QWORD *)*v16 != v14 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    LOBYTE(CurrentServerSiloGlobals) = KeAbPostRelease((ULONG_PTR)v9);
    if ( v13 )
      LOBYTE(CurrentServerSiloGlobals) = ExpWnfFreeScopeInstance(v13);
  }
  return (char)CurrentServerSiloGlobals;
}
