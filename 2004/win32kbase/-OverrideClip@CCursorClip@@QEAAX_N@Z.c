/*
 * XREFs of ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C019FDAC
 * Callers:
 *     SetInputDelegationModeImpl @ 0x1C00403F4 (SetInputDelegationModeImpl.c)
 *     DisableDelegation @ 0x1C0054000 (DisableDelegation.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0033A90 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C009D788 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CCursorClip::OverrideClip(CCursorClip *this, unsigned __int8 a2)
{
  CCursorClip *v2; // rdi
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  bool v9; // sf

  v2 = gpCursorClip;
  v3 = a2;
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)gpCursorClip + 32));
  v8 = 2 * v3 - 1;
  v9 = v8 + *((_DWORD *)v2 + 18) < 0;
  *((_DWORD *)v2 + 18) += v8;
  if ( v9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  CPushLock::ReleaseLock((CCursorClip *)((char *)v2 + 32));
}
