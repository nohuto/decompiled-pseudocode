/*
 * XREFs of ??$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800B8B78
 * Callers:
 *     ??$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z @ 0x1800ABD1C (--$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x1800B90EC (--$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z.c)
 *     ??$AddProperty@M@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBMPEAI@Z @ 0x1800B93C0 (--$AddProperty@M@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4D.c)
 */

__int64 __fastcall CPropertySet::AddProperty<float>(__int64 a1, unsigned int a2, int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = a2;
  v8 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<float>(a1 + 80, a4, a5, &v13);
  v10 = v8;
  if ( v8 < 0 )
  {
    v12 = 354;
    goto LABEL_10;
  }
  if ( v13 != (_DWORD)v5 || (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8 * v5 + 4) & 0x1FFFFFFF) != a3 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0x169u, 0LL);
    return v10;
  }
  v8 = CPropertySet::PropertyUpdated<float>(a1, (unsigned int)v5, 0LL, a5);
  v10 = v8;
  if ( v8 < 0 )
  {
    v12 = 365;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v12, 0LL);
    return v10;
  }
  return 0;
}
