/*
 * XREFs of ??$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x180237E20
 * Callers:
 *     ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x180237B6C (--$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x1801BB308 (--$AddProperty@_N@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801BCAB8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ??$PropertyUpdated@_N@CPropertySet@@AEAAJIIPEB_N@Z @ 0x180239308 (--$PropertyUpdated@_N@CPropertySet@@AEAAJIIPEB_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::AddProperty<bool>(CResource *this, unsigned int a2, int a3, int a4, _BYTE *a5)
{
  __int64 v5; // rdi
  _QWORD *v6; // rsi
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v16; // [rsp+50h] [rbp+8h] BYREF

  v5 = a2;
  v6 = (_QWORD *)((char *)this + 88);
  v9 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<bool>(
         (__int64)this + 88,
         a4,
         a5,
         &v16);
  v11 = v9;
  if ( v9 < 0 )
  {
    v14 = 367;
    goto LABEL_10;
  }
  if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)v6, v5) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( v16 != (_DWORD)v5 || (*(_DWORD *)(*v6 + 8 * v5 + 4) & 0x1FFFFFFF) != a3 )
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, -2003303421, 0x176u);
    return v11;
  }
  v9 = CPropertySet::PropertyUpdated<bool>(this, v5);
  v11 = v9;
  if ( v9 < 0 )
  {
    v14 = 378;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, v14);
    return v11;
  }
  return 0;
}
