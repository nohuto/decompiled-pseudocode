/*
 * XREFs of ?AnimationScenarioUnreference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z @ 0x1C0041548
 * Callers:
 *     NtDCompositionTelemetryAnimationScenarioUnreference @ 0x1C003F5A0 (NtDCompositionTelemetryAnimationScenarioUnreference.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 */

__int64 __fastcall DirectComposition::CTelemetryInfo::AnimationScenarioUnreference(
        DirectComposition::CTelemetryInfo *this,
        const struct _GUID *a2,
        unsigned __int64 *a3)
{
  unsigned int v5; // ebx
  __int64 v7; // rax
  DirectComposition::CTelemetryInfo **v8; // rcx

  v5 = 0;
  v7 = Win32AllocPoolWithQuota(56LL, 1869890372LL);
  if ( v7 )
  {
    *(_DWORD *)(v7 + 24) = 289;
    *(_DWORD *)(v7 + 16) = 36;
    *(_DWORD *)(v7 + 20) = 36;
    *(struct _GUID *)(v7 + 28) = *a2;
    *(_QWORD *)(v7 + 48) = *a3;
    v8 = (DirectComposition::CTelemetryInfo **)*((_QWORD *)this + 7);
    if ( *v8 != (DirectComposition::CTelemetryInfo *)((char *)this + 48) )
      __fastfail(3u);
    *(_QWORD *)v7 = (char *)this + 48;
    *(_QWORD *)(v7 + 8) = v8;
    *v8 = (DirectComposition::CTelemetryInfo *)v7;
    *((_QWORD *)this + 7) = v7;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
