/*
 * XREFs of PpmReapplyPerfPolicy @ 0x1407A5360
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x14070E740 (PpmSetProfilePolicySetting.c)
 *     PpmReinitializeHeteroEngine @ 0x1407A4748 (PpmReinitializeHeteroEngine.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408EC130 (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1408EC450 (PpmPerfProcCapFloorSettingCallback.c)
 * Callees:
 *     PpmReleaseLock @ 0x140278680 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14035D3A4 (PpmAcquireLock.c)
 *     PpmParkApplyPolicy @ 0x1403BEE24 (PpmParkApplyPolicy.c)
 *     PpmCheckApplyParkConstraints @ 0x1403BF1E8 (PpmCheckApplyParkConstraints.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140776DEC (PpmPerfUpdateDomainPolicy.c)
 *     PpmUpdateProcessorPolicy @ 0x1407780E0 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckInitProcessors @ 0x1407A4778 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x1407A5444 (PpmCheckReInit.c)
 *     PopInitializeHeteroProcessors @ 0x1407A5838 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResizeHistoryAll @ 0x1408E1AE4 (PpmPerfResizeHistoryAll.c)
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
