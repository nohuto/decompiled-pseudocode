/*
 * XREFs of VidSchGetMonitorPowerState @ 0x1C00A7630
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchGetMonitorPowerState(__int64 a1)
{
  struct _ERESOURCE *v2; // rdi
  unsigned int v3; // ebx
  __int64 v5; // rcx

  if ( a1 )
  {
    v2 = (struct _ERESOURCE *)(a1 + 1088);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1088), 1u);
    v3 = *(_DWORD *)(a1 + 2208);
    ExReleaseResourceLite(v2);
    return v3;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    return 0LL;
  }
}
