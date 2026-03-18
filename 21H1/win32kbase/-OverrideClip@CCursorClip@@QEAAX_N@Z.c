/*
 * XREFs of ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C01A5B0C
 * Callers:
 *     SetInputDelegationModeImpl @ 0x1C0031834 (SetInputDelegationModeImpl.c)
 *     DisableDelegation @ 0x1C00463C0 (DisableDelegation.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00B5BD0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00B8618 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CCursorClip::OverrideClip(CCursorClip *this, unsigned __int8 a2)
{
  CCursorClip *v2; // rdi
  int v3; // esi
  __int64 v4; // rcx
  int v5; // eax
  bool v6; // sf

  v2 = gpCursorClip;
  v3 = a2;
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)gpCursorClip + 32));
  v5 = 2 * v3 - 1;
  v6 = v5 + *((_DWORD *)v2 + 18) < 0;
  *((_DWORD *)v2 + 18) += v5;
  if ( v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  CPushLock::ReleaseLock((CCursorClip *)((char *)v2 + 32));
}
