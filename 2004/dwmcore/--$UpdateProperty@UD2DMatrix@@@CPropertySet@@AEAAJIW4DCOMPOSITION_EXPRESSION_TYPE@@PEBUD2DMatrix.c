/*
 * XREFs of ??$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x1800AE978
 * Callers:
 *     ??$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DMatrix@@@Z @ 0x1800AE6C8 (--$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALU.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800AEB60 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ??$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z @ 0x18001B2E0 (--$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801E74C8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<D2DMatrix>(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // rcx
  int v3; // r8d
  __int64 v4; // r9
  CResource *v5; // r11
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx

  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 80)
    && (v6 = *((_QWORD *)v5 + 10), v2 = v1, *(_DWORD *)(v6 + 8LL * v1) == v3) )
  {
    v7 = *(_DWORD *)(v6 + 8LL * v1 + 4);
    v8 = *((_QWORD *)v5 + 14);
    v7 &= 0x1FFFFFFFu;
    *(_OWORD *)(v7 + v8) = *(_OWORD *)v4;
    *(_OWORD *)(v7 + v8 + 16) = *(_OWORD *)(v4 + 16);
    *(_OWORD *)(v7 + v8 + 32) = *(_OWORD *)(v4 + 32);
    *(_OWORD *)(v7 + v8 + 48) = *(_OWORD *)(v4 + 48);
    v9 = CPropertySet::PropertyUpdated<D2DMatrix>(v5, v1, 1u, (int *)v4);
    v11 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x192u, 0LL);
    else
      return 0;
  }
  else
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, -2147024809, 0x18Bu, 0LL);
  }
  return v11;
}
