/*
 * XREFs of ?GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800CC1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801BCAB8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::GetProperty(CPropertySet *this, __int64 a2, struct CExpressionValue *a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  _QWORD *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  _OWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // r10
  __int64 v25; // r11
  _OWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // r10
  __int64 v31; // r11
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // r11
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 v40; // r10
  __int64 v41; // r11
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r9
  __int64 v46; // r10
  __int64 v47; // r11
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r9
  __int64 v52; // r10
  __int64 v53; // r11
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r9
  __int64 v57; // r10
  __int64 v58; // r11
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                          (char *)this + 88,
                          a2) )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v4, v3) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( *(_DWORD *)(*v7 + 8LL * (unsigned int)v6) == 17 )
    {
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               v55,
                               v54) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      *(_BYTE *)v10 = *(_BYTE *)((*(_DWORD *)(v58 + 8 * v57 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v56 + 32));
      *(_DWORD *)(v10 + 72) = 17;
      goto LABEL_41;
    }
    if ( *(_DWORD *)(*v7 + 8LL * (unsigned int)v6) == 18 )
    {
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               v50,
                               v49) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      *(_DWORD *)v10 = *(_DWORD *)((*(_DWORD *)(v53 + 8 * v52 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v51 + 32));
      *(_DWORD *)(v10 + 72) = 18;
      goto LABEL_41;
    }
    if ( *(_DWORD *)(*v7 + 8LL * (unsigned int)v6) == 35 )
    {
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               v44,
                               v43) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v48 = (_QWORD *)(*(_QWORD *)(v45 + 32) + (*(_DWORD *)(v47 + 8 * v46 + 4) & 0x1FFFFFFF));
      *(_DWORD *)(v10 + 72) = 35;
      *(_QWORD *)v10 = *v48;
      goto LABEL_41;
    }
    if ( *(_DWORD *)(*v7 + 8LL * (unsigned int)v6) == 52 )
    {
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               v38,
                               v37) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v42 = *(_QWORD *)(v39 + 32) + (*(_DWORD *)(v41 + 8 * v40 + 4) & 0x1FFFFFFF);
      *(_DWORD *)(v10 + 72) = 52;
      *(_QWORD *)v10 = *(_QWORD *)v42;
      *(_DWORD *)(v10 + 8) = *(_DWORD *)(v42 + 8);
      goto LABEL_41;
    }
    if ( *(_DWORD *)(*v7 + 8LL * (unsigned int)v6) == 69 )
    {
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               v33,
                               v32) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v26 = (_OWORD *)(*(_QWORD *)(v34 + 32) + (*(_DWORD *)(v36 + 8 * v35 + 4) & 0x1FFFFFFF));
      *(_DWORD *)(v10 + 72) = 69;
    }
    else if ( *(_DWORD *)(*v7 + 8LL * (unsigned int)v6) == 70 )
    {
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               v28,
                               v27) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v26 = (_OWORD *)(*(_QWORD *)(v29 + 32) + (*(_DWORD *)(v31 + 8 * v30 + 4) & 0x1FFFFFFF));
      *(_DWORD *)(v10 + 72) = 70;
    }
    else
    {
      if ( *(_DWORD *)(*v7 + 8LL * (unsigned int)v6) != 71 )
      {
        if ( *(_DWORD *)(*v7 + 8LL * (unsigned int)v6) == 104 )
        {
          if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                                   v7,
                                   v6) )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                                   v16,
                                   v15) )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          v20 = *(_QWORD *)(v17 + 32) + (*(_DWORD *)(v19 + 8 * v18 + 4) & 0x1FFFFFFF);
          *(_DWORD *)(v10 + 72) = 104;
          *(_OWORD *)v10 = *(_OWORD *)v20;
          *(_QWORD *)(v10 + 16) = *(_QWORD *)(v20 + 16);
        }
        else
        {
          if ( *(_DWORD *)(*v7 + 8LL * (unsigned int)v6) != 265 )
            ModuleFailFastForHRESULT(2147549183LL, retaddr);
          if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                                   v7,
                                   v6) )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                                   v9,
                                   v8) )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          v14 = (_OWORD *)(*(_QWORD *)(v11 + 32) + (*(_DWORD *)(v13 + 8 * v12 + 4) & 0x1FFFFFFF));
          *(_DWORD *)(v10 + 72) = 265;
          *(_OWORD *)v10 = *v14;
          *(_OWORD *)(v10 + 16) = v14[1];
          *(_OWORD *)(v10 + 32) = v14[2];
          *(_OWORD *)(v10 + 48) = v14[3];
        }
        goto LABEL_41;
      }
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               v22,
                               v21) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v26 = (_OWORD *)(*(_QWORD *)(v23 + 32) + (*(_DWORD *)(v25 + 8 * v24 + 4) & 0x1FFFFFFF));
      *(_DWORD *)(v10 + 72) = 71;
    }
    *(_OWORD *)v10 = *v26;
LABEL_41:
    *(_BYTE *)(v10 + 76) = 1;
    return 0;
  }
  v5 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, -2147024809, 0xB5u);
  return v5;
}
