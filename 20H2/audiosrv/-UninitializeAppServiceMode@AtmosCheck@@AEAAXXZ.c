/*
 * XREFs of ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x1801371AC
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18005F038 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18005F304 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x180137010 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 * Callees:
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1800087C4 (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D390 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1801348B4 (-CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AtmosCheck::UninitializeAppServiceMode(char *pv)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(pv + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(pv + 56));
  v3 = *((_QWORD *)pv + 27);
  if ( v3 && pv[210] )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 56LL))(v3, pv + 8);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2488LL,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v4);
    pv[210] = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  AtmosCheck::CancelLicenseRefreshTimer((AtmosCheck *)pv);
  EnterCriticalSection(v2);
  if ( !pv[552] )
    AtmosCheck::UpdateLicenseRefreshTimer(pv);
  if ( v2 )
    LeaveCriticalSection(v2);
}
