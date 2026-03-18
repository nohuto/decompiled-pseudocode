/*
 * XREFs of PpmReapplyPerfPolicy @ 0x1407A7AB0
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1406A74A0 (PpmSetProfilePolicySetting.c)
 *     PpmReinitializeHeteroEngine @ 0x1407A6E98 (PpmReinitializeHeteroEngine.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408ED3B0 (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1408ED6D0 (PpmPerfProcCapFloorSettingCallback.c)
 * Callees:
 *     PpmReleaseLock @ 0x14021F630 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402DF294 (PpmAcquireLock.c)
 *     PpmParkApplyPolicy @ 0x1403BFDB4 (PpmParkApplyPolicy.c)
 *     PpmCheckApplyParkConstraints @ 0x1403C0178 (PpmCheckApplyParkConstraints.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1407791FC (PpmPerfUpdateDomainPolicy.c)
 *     PpmUpdateProcessorPolicy @ 0x14077A4F0 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckInitProcessors @ 0x1407A6EC8 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x1407A7B94 (PpmCheckReInit.c)
 *     PopInitializeHeteroProcessors @ 0x1407A7F88 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResizeHistoryAll @ 0x1408E2D64 (PpmPerfResizeHistoryAll.c)
 */

char __fastcall PpmReapplyPerfPolicy(_DWORD *a1)
{
  _WORD *v1; // rbx
  char v2; // al
  int v3; // eax
  char v4; // si
  char v5; // di

  v1 = a1;
  if ( (*a1 & 0x1800) != 0 )
  {
    LOBYTE(a1) = (*a1 & 0x800) != 0;
    v2 = PopInitializeHeteroProcessors(a1);
    if ( (*(_DWORD *)v1 & 0x800) != 0 || v2 )
      *(_DWORD *)v1 |= 0x200Eu;
  }
  PpmUpdateProcessorPolicy(v1, 0LL);
  v3 = *(_DWORD *)v1;
  if ( (*(_DWORD *)v1 & 4) != 0 )
  {
    PpmParkApplyPolicy();
    v3 = *(_DWORD *)v1;
  }
  if ( (v3 & 0x10) != 0 )
  {
    PpmPerfResizeHistoryAll();
    v3 = *(_DWORD *)v1;
  }
  if ( (v3 & 8) != 0 )
  {
    PpmCheckReInit();
    v3 = *(_DWORD *)v1;
  }
  v4 = 0;
  v5 = 1;
  if ( (v3 & 2) != 0 )
  {
    v5 = 0;
    v4 = 1;
    PpmPerfUpdateDomainPolicy(0);
    v3 = *(_DWORD *)v1;
  }
  if ( (v3 & 4) != 0 )
  {
    if ( v4 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      v3 = *(_DWORD *)v1;
    }
    v5 = 0;
    if ( (v3 & 0x2000) != 0 )
    {
      LOBYTE(v3) = PpmCheckInitProcessors(1);
      return v3;
    }
    LOBYTE(v3) = PpmCheckApplyParkConstraints();
  }
  if ( v5 )
    LOBYTE(v3) = PpmReleaseLock(&PpmPerfPolicyLock);
  return v3;
}
