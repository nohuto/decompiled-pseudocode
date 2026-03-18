/*
 * XREFs of ??0TargetingInfo@@QEAA@AEBU0@@Z @ 0x180230B28
 * Callers:
 *     ?GetCurrentFallbackTarget@CManipulationContext@@UEBA?AUTargetingInfo@@XZ @ 0x1802317F0 (-GetCurrentFallbackTarget@CManipulationContext@@UEBA-AUTargetingInfo@@XZ.c)
 *     ?GetCurrentTarget@CManipulationContext@@UEBA?AUTargetingInfo@@XZ @ 0x180231820 (-GetCurrentTarget@CManipulationContext@@UEBA-AUTargetingInfo@@XZ.c)
 *     ?InternalSetAtIndex@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXHAEBIAEBUTargetingInfo@@@Z @ 0x180231BA4 (-InternalSetAtIndex@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXHAEBIAE.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CED94 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

TargetingInfo *__fastcall TargetingInfo::TargetingInfo(TargetingInfo *this, const struct TargetingInfo *a2)
{
  __int64 (__fastcall ****v3)(_QWORD); // rcx

  *(_DWORD *)this = *(_DWORD *)a2;
  v3 = (__int64 (__fastcall ****)(_QWORD))((char *)this + 8);
  *v3 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a2 + 1);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v3);
  return this;
}
