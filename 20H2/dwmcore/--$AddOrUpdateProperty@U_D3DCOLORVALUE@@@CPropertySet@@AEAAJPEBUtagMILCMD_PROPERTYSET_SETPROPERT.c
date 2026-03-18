/*
 * XREFs of ??$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800B8574
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x1800AC014 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800B8634 (--$AddProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCO.c)
 *     ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1801E4F1C (--$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3D.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801E5648 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<_D3DCOLORVALUE>(CResource *a1, __int64 a2, __int64 a3)
{
  int updated; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // r9d
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // r11
  unsigned int v11; // [rsp+20h] [rbp-18h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<_D3DCOLORVALUE>(a1, *(_DWORD *)(a2 + 8), a3);
    v5 = updated;
    if ( updated < 0 )
    {
      v11 = 313;
LABEL_4:
      v6 = updated;
LABEL_11:
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v6, v11, 0LL);
      return v5;
    }
  }
  else
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 80)
      || *(_DWORD *)(v8 + 12) != (*(_DWORD *)(*(_QWORD *)(v9 + 80) + 8 * v7 + 4) & 0x1FFFFFFF) )
    {
      v5 = -2003303421;
      v6 = -2003303421;
      v11 = 321;
      goto LABEL_11;
    }
    updated = CPropertySet::UpdateProperty<_D3DCOLORVALUE>(v9, v7, *(unsigned int *)(v8 + 16));
    v5 = updated;
    if ( updated < 0 )
    {
      v11 = 324;
      goto LABEL_4;
    }
  }
  return 0;
}
