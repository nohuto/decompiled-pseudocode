/*
 * XREFs of ??$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x1800E19A0
 * Callers:
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180047B70 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector3@@@Z @ 0x1800E17DC (--$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$PropertyUpdated@UD2DVector3@@@CPropertySet@@AEAAJIIPEBUD2DVector3@@@Z @ 0x1800E1AAC (--$PropertyUpdated@UD2DVector3@@@CPropertySet@@AEAAJIIPEBUD2DVector3@@@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801BCAB8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<D2DVector3>(CResource *this, __int64 a2)
{
  _QWORD *v3; // rcx
  unsigned int v4; // r10d
  __int64 v5; // rdx
  __int64 v6; // r10
  int v7; // r11d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // rcx
  unsigned int v15; // edx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                           (char *)this + 88,
                           a2) )
    goto LABEL_9;
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v3, v4) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( *(_DWORD *)(*v3 + 8 * v6) == v7 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v3, v5) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v9, v8) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v14 = *(_QWORD *)(v10 + 32);
    v15 = *(_DWORD *)(v11 + 8 * v13 + 4) & 0x1FFFFFFF;
    *(_QWORD *)(v15 + v14) = *(_QWORD *)v12;
    *(_DWORD *)(v15 + v14 + 8) = *(_DWORD *)(v12 + 8);
    v16 = CPropertySet::PropertyUpdated<D2DVector3>(this, v13);
    v18 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x19Fu);
    else
      return 0;
  }
  else
  {
LABEL_9:
    v18 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v3, 0LL, 0LL, -2147024809, 0x198u);
  }
  return v18;
}
