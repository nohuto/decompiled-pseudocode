/*
 * XREFs of ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800BD120
 * Callers:
 *     ??$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z @ 0x180019B04 (--$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z.c)
 *     ?NotifyCurrentPropertyValuesInternal@CPropertySet@@IEAAJI@Z @ 0x18001F99C (-NotifyCurrentPropertyValuesInternal@CPropertySet@@IEAAJI@Z.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800BC9E0 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x1800BCF4C (--$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z.c)
 *     ??$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z @ 0x1801E5884 (--$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x1800659B8 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x180065BC8 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x180065E58 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180180A3C (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x1801B1F48 (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::NotifyPropertyValue(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r9
  CPropertyChangeResource *v6; // r10
  _QWORD *v7; // r11
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int128 *v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // r9d
  __int64 v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // r9
  CPropertyChangeResource *v28; // r10
  _QWORD *v29; // r11
  __int64 v30; // rcx
  unsigned int v31; // edx
  __int64 v32; // r9
  CPropertyChangeResource *v33; // r10
  _QWORD *v34; // r11
  __int64 v35; // rcx
  unsigned int v36; // edx
  __int64 v37; // r9
  CPropertyChangeResource *v38; // r10
  _QWORD *v39; // r11
  __int64 v40; // rcx
  unsigned int v41; // r9d
  __int64 v42; // r10
  __int64 v43; // r11
  int v44; // ecx
  int v45; // ecx
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned int v51; // [rsp+20h] [rbp-58h]
  __int64 v52; // [rsp+40h] [rbp-38h] BYREF
  __int64 v53; // [rsp+48h] [rbp-30h]
  __int128 v54; // [rsp+50h] [rbp-28h]
  __int64 v55; // [rsp+60h] [rbp-18h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( a3 == 18 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 80) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v40) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v43 = *(_QWORD *)(v42 + 48);
    if ( v43 )
      v44 = *(_DWORD *)(v43 + 68);
    else
      v44 = 0;
    if ( !v44 )
      return 0;
    if ( !*(_DWORD *)(v42 + 56) )
      return 0;
    v45 = *(_DWORD *)(v42 + 64);
    if ( !_bittest(&v45, v41) )
      return 0;
    v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42 + 16) + 1080LL) + 48LL);
    if ( v43 )
      v47 = *(unsigned int *)(v43 + 68);
    else
      v47 = 0LL;
    v48 = *(unsigned int *)(v42 + 56);
    v52 = v47;
    v53 = v48;
    v10 = CoreUICallSend(v46, &v52, 2LL, 13LL, 0, &unk_1802CE797);
    if ( v10 == -2018375675 )
      v10 = 0;
    if ( v10 >= 0 )
      return 0;
    MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v10, 0xC6u, 0LL);
    v51 = 560;
  }
  else
  {
    switch ( a3 )
    {
      case '#':
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 80) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v35) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v8 = CPropertyChangeResource::NotifyVector2PropertyChanged(
               v38,
               v36,
               (const struct D2DVector2 *)(v39[4] + (*(_DWORD *)(*v39 + 8 * v37 + 4) & 0x1FFFFFFF)));
        v10 = v8;
        if ( v8 < 0 )
        {
          v51 = 563;
          goto LABEL_39;
        }
        return 0;
      case '4':
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 80) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v30) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v8 = CPropertyChangeResource::NotifyVector3PropertyChanged(
               v33,
               v31,
               (const struct D2DVector3 *)(v34[4] + (*(_DWORD *)(*v34 + 8 * v32 + 4) & 0x1FFFFFFF)));
        v10 = v8;
        if ( v8 < 0 )
        {
          v51 = 566;
          goto LABEL_39;
        }
        return 0;
      case 'E':
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 80) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v25) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v8 = CPropertyChangeResource::NotifyVector4PropertyChanged(
               v28,
               v26,
               (const struct D2DVector4 *)(v29[4] + (*(_DWORD *)(*v29 + 8 * v27 + 4) & 0x1FFFFFFF)));
        v10 = v8;
        if ( v8 < 0 )
        {
          v51 = 569;
          goto LABEL_39;
        }
        return 0;
    }
    if ( a3 != 104 )
    {
      if ( a3 == 265 )
      {
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 80) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v3) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v8 = CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(
               v6,
               v4,
               (const struct D2DMatrix *)(v7[4] + (*(_DWORD *)(*v7 + 8 * v5 + 4) & 0x1FFFFFFF)));
        v10 = v8;
        if ( v8 < 0 )
        {
          v51 = 579;
LABEL_39:
          v24 = v8;
          goto LABEL_40;
        }
      }
      return 0;
    }
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 80) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v11) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v15 = (__int128 *)(v12[4] + (*(_DWORD *)(*v12 + 8 * v13 + 4) & 0x1FFFFFFF));
    v16 = *(_QWORD *)(v14 + 48);
    if ( v16 )
      v17 = *(_DWORD *)(v16 + 68);
    else
      v17 = 0;
    if ( !v17 )
      return 0;
    if ( !*(_DWORD *)(v14 + 56) )
      return 0;
    v18 = *(_DWORD *)(v14 + 64);
    if ( !_bittest(&v18, v13) )
      return 0;
    v19 = *(_QWORD *)(v14 + 16);
    v55 = *((_QWORD *)v15 + 2);
    v20 = *(_QWORD *)(v19 + 1080);
    v54 = *v15;
    if ( v16 )
      v21 = *(unsigned int *)(v16 + 68);
    else
      v21 = 0LL;
    v22 = *(_QWORD *)(v20 + 48);
    v52 = v21;
    v53 = *(unsigned int *)(v14 + 56);
    v10 = CoreUICallSend(v22, &v52, 2LL, 13LL, 7, &unk_1802CE7BD);
    if ( v10 == -2018375675 )
      v10 = 0;
    if ( v10 >= 0 )
      return 0;
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v10, 0x1FBu, 0LL);
    v51 = 576;
  }
  v24 = v10;
LABEL_40:
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v24, v51, 0LL);
  return (unsigned int)v10;
}
