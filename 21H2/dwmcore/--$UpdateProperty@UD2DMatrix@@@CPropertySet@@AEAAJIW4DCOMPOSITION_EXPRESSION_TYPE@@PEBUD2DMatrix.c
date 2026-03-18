/*
 * XREFs of ??$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x1800E7358
 * Callers:
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180047B70 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DMatrix@@@Z @ 0x1800E7478 (--$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALU.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z @ 0x1800E763C (--$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801BCAB8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<D2DMatrix>(CResource *this, __int64 a2, __int64 a3, _OWORD *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // r10
  int v10; // r11d
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // rax
  unsigned int v18; // ecx
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                           (char *)this + 88,
                           a2) )
    goto LABEL_9;
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( *(_DWORD *)(*v9 + 8LL * (unsigned int)v8) == v10 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v8) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v12, v11) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v17 = *(_QWORD *)(v16 + 32);
    v18 = *(_DWORD *)(v14 + 8 * v15 + 4) & 0x1FFFFFFF;
    *(_OWORD *)(v18 + v17) = *a4;
    *(_OWORD *)(v18 + v17 + 16) = a4[1];
    *(_OWORD *)(v18 + v17 + 32) = a4[2];
    *(_OWORD *)(v18 + v17 + 48) = a4[3];
    v19 = CPropertySet::PropertyUpdated<D2DMatrix>(this, v13);
    v21 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0x19Fu);
    else
      return 0;
  }
  else
  {
LABEL_9:
    v21 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024809, 0x198u);
  }
  return v21;
}
