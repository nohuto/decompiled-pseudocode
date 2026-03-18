/*
 * XREFs of PpmReapplyPerfPolicy @ 0x1407B5AA0
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1406F9E44 (PpmSetProfilePolicySetting.c)
 *     PpmReinitializeHeteroEngine @ 0x1407B4E88 (PpmReinitializeHeteroEngine.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408F2FC0 (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1408F32E0 (PpmPerfProcCapFloorSettingCallback.c)
 * Callees:
 *     PpmReleaseLock @ 0x140288880 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 *     PpmParkApplyPolicy @ 0x1403C1434 (PpmParkApplyPolicy.c)
 *     PpmCheckApplyParkConstraints @ 0x1403C17F8 (PpmCheckApplyParkConstraints.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1407877FC (PpmPerfUpdateDomainPolicy.c)
 *     PpmUpdateProcessorPolicy @ 0x140788AF0 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckInitProcessors @ 0x1407B4EB8 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x1407B5B84 (PpmCheckReInit.c)
 *     PopInitializeHeteroProcessors @ 0x1407B5FAC (PopInitializeHeteroProcessors.c)
 *     PpmPerfResizeHistoryAll @ 0x1408E8BA4 (PpmPerfResizeHistoryAll.c)
 */

char __fastcall PpmReapplyPerfPolicy(_DWORD *a1)
{
  _WORD *v1; // rbx
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  char v6; // si
  char v7; // di

  v1 = a1;
  if ( (*a1 & 0x1800) != 0 )
  {
    LOBYTE(a1) = (*a1 & 0x800) != 0;
    v2 = PopInitializeHeteroProcessors(a1);
    if ( (*(_DWORD *)v1 & 0x800) != 0 || v2 )
      *(_DWORD *)v1 |= 0x200Eu;
  }
  PpmUpdateProcessorPolicy(v1, 0LL);
  v5 = *(_DWORD *)v1;
  if ( (*(_DWORD *)v1 & 4) != 0 )
  {
    PpmParkApplyPolicy();
    v5 = *(_DWORD *)v1;
  }
  if ( (v5 & 0x10) != 0 )
  {
    PpmPerfResizeHistoryAll();
    v5 = *(_DWORD *)v1;
  }
  if ( (v5 & 8) != 0 )
  {
    PpmCheckReInit(v4, v3);
    v5 = *(_DWORD *)v1;
  }
  v6 = 0;
  v7 = 1;
  if ( (v5 & 2) != 0 )
  {
    v7 = 0;
    v6 = 1;
    PpmPerfUpdateDomainPolicy(0);
    v5 = *(_DWORD *)v1;
  }
  if ( (v5 & 4) != 0 )
  {
    if ( v6 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      v5 = *(_DWORD *)v1;
    }
    v7 = 0;
    if ( (v5 & 0x2000) != 0 )
    {
      LOBYTE(v5) = PpmCheckInitProcessors(1);
      return v5;
    }
    LOBYTE(v5) = PpmCheckApplyParkConstraints();
  }
  if ( v7 )
    LOBYTE(v5) = PpmReleaseLock(&PpmPerfPolicyLock);
  return v5;
}
