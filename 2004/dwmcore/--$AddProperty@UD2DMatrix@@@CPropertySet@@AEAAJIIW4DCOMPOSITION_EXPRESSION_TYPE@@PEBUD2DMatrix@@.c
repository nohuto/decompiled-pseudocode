/*
 * XREFs of ??$AddProperty@UD2DMatrix@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x1800AE788
 * Callers:
 *     ??$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DMatrix@@@Z @ 0x1800AE6C8 (--$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALU.c)
 * Callees:
 *     ??$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z @ 0x18001B2E0 (--$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@PEAI@Z @ 0x1800AF3EC (--$AddProperty@UD2DMatrix@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@.c)
 */

__int64 __fastcall CPropertySet::AddProperty<D2DMatrix>(
        CResource *this,
        unsigned int a2,
        int a3,
        unsigned int a4,
        int *a5)
{
  __int64 v5; // rdi
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = a2;
  v8 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DMatrix>(
         (char *)this + 80,
         a4,
         a5,
         &v13);
  v10 = v8;
  if ( v8 < 0 )
  {
    v12 = 354;
    goto LABEL_10;
  }
  if ( v13 != (_DWORD)v5 || (*(_DWORD *)(*((_QWORD *)this + 10) + 8 * v5 + 4) & 0x1FFFFFFF) != a3 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0x169u, 0LL);
    return v10;
  }
  v8 = CPropertySet::PropertyUpdated<D2DMatrix>(this, v5, 0, a5);
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
