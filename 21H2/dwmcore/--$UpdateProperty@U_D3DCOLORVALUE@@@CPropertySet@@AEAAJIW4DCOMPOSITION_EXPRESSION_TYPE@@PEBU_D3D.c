/*
 * XREFs of ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x180239728
 * Callers:
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180047B70 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800EBAAC (--$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z @ 0x1800EBC70 (--$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801BCAB8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<_D3DCOLORVALUE>(
        CResource *this,
        unsigned int a2,
        __int64 a3,
        _OWORD *a4)
{
  unsigned int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // edx
  _QWORD *v9; // r10
  int v10; // r11d
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)this + 88, a2) )
    goto LABEL_9;
  if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( *(_DWORD *)(*v9 + 8LL * v8) == v10 )
  {
    if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v8) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v12, v11) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(_OWORD *)((*(_DWORD *)(v14 + 8 * v15 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v16 + 32)) = *a4;
    v17 = CPropertySet::PropertyUpdated<_D3DCOLORVALUE>(this, v13, 1, (__int64)a4);
    v19 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x19Fu);
    else
      return 0;
  }
  else
  {
LABEL_9:
    v19 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024809, 0x198u);
  }
  return v19;
}
