/*
 * XREFs of ??$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800E45F0
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x180044E94 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ??$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180047D8C (--$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800E46C4 (--$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801BCAB8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<D2D_MATRIX_3X2_F>(CResource *a1, __int64 a2, __int64 a3)
{
  int updated; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // r8
  unsigned int *v7; // r10
  CResource *v8; // r11
  __int64 v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<D2D_MATRIX_3X2_F>(a1, *(_DWORD *)(a2 + 8), a3);
    v5 = updated;
    if ( updated < 0 )
    {
      v11 = 327;
LABEL_10:
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, updated, v11);
      return v5;
    }
    return 0;
  }
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                           (char *)a1 + 88,
                           *(unsigned int *)(a2 + 8)) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  v9 = v7[2];
  if ( v7[3] == (*(_DWORD *)(*((_QWORD *)v8 + 11) + 8 * v9 + 4) & 0x1FFFFFFF) )
  {
    updated = CPropertySet::UpdateProperty<D2D_MATRIX_3X2_F>(v8, v7[2], v7[4], v6);
    v5 = updated;
    if ( updated < 0 )
    {
      v11 = 337;
      goto LABEL_10;
    }
    return 0;
  }
  v5 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2003303421, 0x14Eu);
  return v5;
}
