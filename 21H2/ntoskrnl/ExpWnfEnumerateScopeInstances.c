/*
 * XREFs of ExpWnfEnumerateScopeInstances @ 0x1406C0B18
 * Callers:
 *     NtDeleteWnfStateName @ 0x14060D3C0 (NtDeleteWnfStateName.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140252E18 (PsGetServerSiloGlobals.c)
 *     HalSystemVectorDispatchEntry @ 0x140252E40 (HalSystemVectorDispatchEntry.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402F2EC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x14034A230 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExpWnfEnumerateScopeInstances(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v4; // rbp
  _QWORD *ServerSiloGlobals; // rax
  __int64 v6; // rdx
  unsigned __int64 *v7; // rdi
  struct _EX_RUNDOWN_REF **v8; // r14
  __int64 v9; // rbx
  struct _EX_RUNDOWN_REF *Count; // rbx
  __int64 v12; // rax

  v2 = (unsigned int)a1;
  v4 = 0LL;
  if ( (unsigned int)(a1 - 4) <= 1 )
  {
    v12 = HalSystemVectorDispatchEntry();
    ServerSiloGlobals = PsGetServerSiloGlobals(v12);
  }
  else
  {
    ServerSiloGlobals = PsGetCurrentServerSiloGlobals(a1, (__int64)a2);
  }
  v6 = ServerSiloGlobals[114];
  if ( !v6 )
    return 0LL;
  v7 = (unsigned __int64 *)(v6 + 8 * (3 * v2 + 4));
  v8 = (struct _EX_RUNDOWN_REF **)(v6 + 8 * (3 * v2 + 5));
  v9 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v9, (ULONG_PTR)v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( a2 )
    Count = (struct _EX_RUNDOWN_REF *)a2[4].Count;
  else
    Count = 0LL;
  if ( !Count )
    Count = *v8;
  while ( Count != (struct _EX_RUNDOWN_REF *)v8 )
  {
    v4 = Count - 4;
    if ( ExAcquireRundownProtection_0(Count - 3) )
      break;
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    v4 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  if ( a2 )
    ExReleaseRundownProtection_0(a2 + 1);
  return v4;
}
