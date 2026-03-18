/*
 * XREFs of ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00AAAD8
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C00A9FC8 (-UpdateUserScreen@@YAJXZ.c)
 *     VideoPortCalloutThread @ 0x1C0127A34 (VideoPortCalloutThread.c)
 * Callees:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00A46B0 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C00AAB48 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 */

void __fastcall CInputConfig::OnDisplayStateChange(CInputConfig *this)
{
  CInputConfig *v1; // rbx
  CInputConfig *v2; // rcx

  v1 = gpInputConfig;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(CInputConfig::slock, 1u);
  if ( *((_BYTE *)v1 + 1472) )
    CInputConfig::_CreateLegacyInputSpace(v1);
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  CInputConfig::_NotifyExternalComponents(v2);
}
