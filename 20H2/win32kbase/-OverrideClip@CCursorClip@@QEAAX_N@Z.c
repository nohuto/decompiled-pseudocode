/*
 * XREFs of ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C019DA0C
 * Callers:
 *     SetInputDelegationModeImpl @ 0x1C00A28D4 (SetInputDelegationModeImpl.c)
 *     DisableDelegation @ 0x1C00B4690 (DisableDelegation.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00614C8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00997E0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
