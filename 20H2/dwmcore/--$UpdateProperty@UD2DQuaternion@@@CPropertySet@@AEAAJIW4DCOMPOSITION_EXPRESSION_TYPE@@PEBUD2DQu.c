/*
 * XREFs of ??$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801E4DF4
 * Callers:
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800B8CB0 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector4@@@Z @ 0x1801E43C0 (--$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z @ 0x1801E4D24 (--$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801E5648 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<D2DQuaternion>(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // rcx
  int v3; // r8d
  int *v4; // r9
  CResource *v5; // r11
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx

  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 80)
    && (v6 = *((_QWORD *)v5 + 10), v2 = v1, *(_DWORD *)(v6 + 8LL * v1) == v3) )
  {
    *(_OWORD *)((*(_DWORD *)(v6 + 8LL * v1 + 4) & 0x1FFFFFFF) + *((_QWORD *)v5 + 14)) = *(_OWORD *)v4;
    v7 = CPropertySet::PropertyUpdated<D2DVector4>(v5, v1, 1u, v4);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x192u, 0LL);
    else
      return 0;
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, -2147024809, 0x18Bu, 0LL);
  }
  return v9;
}
