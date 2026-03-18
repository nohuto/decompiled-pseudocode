/*
 * XREFs of ??$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800B8C10
 * Callers:
 *     ??$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z @ 0x1800ABD1C (--$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x1800B90EC (--$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801E5648 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<float>(__int64 a1)
{
  _QWORD *v1; // rcx
  int v2; // r8d
  _DWORD *v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx

  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 80)
    && *(_DWORD *)(*v1 + 8 * v4) == v2 )
  {
    *(_DWORD *)((*(_DWORD *)(*v1 + 8 * v4 + 4) & 0x1FFFFFFF) + v1[4]) = *v3;
    v6 = CPropertySet::PropertyUpdated<float>(v5, (unsigned int)v4, 1LL, v3);
    v8 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x192u, 0LL);
    else
      return 0;
  }
  else
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v1, 0LL, 0, -2147024809, 0x18Bu, 0LL);
  }
  return v8;
}
