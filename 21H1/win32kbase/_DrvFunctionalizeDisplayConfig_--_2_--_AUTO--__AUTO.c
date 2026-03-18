/*
 * XREFs of _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C014C978
 * Callers:
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1C014CAF0 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--_scalar_deleting_destructor_.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C01513B4 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0098EEC (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C0099078 (--1AUTO_TGO@@MEAA@XZ.c)
 */

void __fastcall DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(struct D3DKMT_GETPATHSMODALITY **this)
{
  int v2; // r8d
  struct D3DKMT_GETPATHSMODALITY *v3; // rcx
  __int64 v4; // rcx

  *this = (struct D3DKMT_GETPATHSMODALITY *)&off_1C020C570;
  FreePathsModality(this[6]);
  v3 = this[7];
  if ( v3 )
    ObfDereferenceObject(v3);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v2);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v4);
  }
  AUTO_TGO::~AUTO_TGO((AUTO_TGO *)this);
}
