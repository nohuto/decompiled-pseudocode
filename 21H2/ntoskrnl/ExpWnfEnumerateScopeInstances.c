/*
 * XREFs of ExpWnfEnumerateScopeInstances @ 0x1406E2814
 * Callers:
 *     NtDeleteWnfStateName @ 0x1407920F0 (NtDeleteWnfStateName.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140203DC0 (HalSystemVectorDispatchEntry.c)
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExpWnfEnumerateScopeInstances(unsigned int a1, struct _EX_RUNDOWN_REF *a2)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v4; // rbp
  _QWORD *ServerSiloGlobals; // rax
  __int64 v6; // rdx
  signed __int64 *v7; // rdi
  struct _EX_RUNDOWN_REF **v8; // r14
  __int64 v9; // rbx
  struct _EX_RUNDOWN_REF *Count; // rbx
  __int64 v12; // rax

  v2 = a1;
  v4 = 0LL;
  if ( a1 - 4 <= 1 )
  {
    v12 = HalSystemVectorDispatchEntry();
    ServerSiloGlobals = PsGetServerSiloGlobals(v12);
  }
  else
  {
    ServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  }
  v6 = ServerSiloGlobals[114];
  if ( !v6 )
    return 0LL;
  v7 = (signed __int64 *)(v6 + 8 * (3 * v2 + 4));
  v8 = (struct _EX_RUNDOWN_REF **)(v6 + 8 * (3 * v2 + 5));
  v9 = KeAbPreAcquire((__int64)v7, 0LL);
  if ( _InterlockedCompareExchange64(v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, 0, v9, (__int64)v7);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  if ( !a2 || (Count = (struct _EX_RUNDOWN_REF *)a2[4].Count) == 0LL )
    Count = *v8;
  while ( Count != (struct _EX_RUNDOWN_REF *)v8 )
  {
    v4 = Count - 4;
    if ( ExAcquireRundownProtection(Count - 3) )
      break;
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    v4 = 0LL;
  }
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  if ( a2 )
    ExReleaseRundownProtection(a2 + 1);
  return v4;
}
