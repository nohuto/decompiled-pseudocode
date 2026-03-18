/*
 * XREFs of ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800B9244
 * Callers:
 *     ??$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z @ 0x18001B0D0 (--$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z.c)
 *     ?NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z @ 0x180020950 (-NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z.c)
 *     ??$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z @ 0x1800B86CC (--$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800B8CB0 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x1800B90EC (--$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z.c)
 *     ??$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z @ 0x1801E4D24 (--$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x180070CF8 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x180070E60 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x180071168 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x1801B1588 (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z.c)
 */

__int64 __fastcall CPropertySet::NotifyPropertyValue(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r10
  __int64 v5; // rdx
  __int64 v6; // r11
  __int64 v7; // r8
  int v8; // eax
  int v9; // eax
  __int64 v10; // r11
  int v11; // ecx
  int v12; // ecx
  int v13; // ebx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+40h] [rbp-38h] BYREF
  __int64 v29; // [rsp+48h] [rbp-30h]
  __int128 v30; // [rsp+50h] [rbp-28h]
  __int64 v31; // [rsp+60h] [rbp-18h]

  v3 = a2;
  if ( a3 == 18 )
  {
    v10 = *(_QWORD *)(a1 + 48);
    if ( v10 )
      v11 = *(_DWORD *)(v10 + 68);
    else
      v11 = 0;
    if ( v11 )
    {
      if ( *(_DWORD *)(a1 + 56) )
      {
        v12 = *(_DWORD *)(a1 + 64);
        if ( _bittest(&v12, a2) )
        {
          v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1080LL) + 48LL);
          if ( v10 )
            v24 = *(unsigned int *)(v10 + 68);
          else
            v24 = 0LL;
          v25 = *(unsigned int *)(a1 + 56);
          v28 = v24;
          v29 = v25;
          v13 = CoreUICallSend(v23, &v28, 2LL, 13LL, 0, &unk_180288647);
          if ( v13 == -2018375675 )
            v13 = 0;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v13, 0xC6u, 0LL);
            v27 = 540;
            goto LABEL_34;
          }
        }
      }
    }
  }
  else
  {
    if ( a3 != 104 )
    {
      switch ( a3 )
      {
        case 52:
          v15 = CPropertyChangeResource::NotifyVector3PropertyChanged(
                  (CPropertyChangeResource *)a1,
                  a2,
                  (const struct D2DVector3 *)(*(_QWORD *)(a1 + 112)
                                            + (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL * a2 + 4) & 0x1FFFFFFF)));
          v13 = v15;
          if ( v15 >= 0 )
            return 0;
          v27 = 546;
          break;
        case 35:
          v15 = CPropertyChangeResource::NotifyVector2PropertyChanged(
                  (CPropertyChangeResource *)a1,
                  a2,
                  (const struct D2DVector2 *)(*(_QWORD *)(a1 + 112)
                                            + (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL * a2 + 4) & 0x1FFFFFFF)));
          v13 = v15;
          if ( v15 >= 0 )
            return 0;
          v27 = 543;
          break;
        case 69:
          v15 = CPropertyChangeResource::NotifyVector4PropertyChanged(
                  (CPropertyChangeResource *)a1,
                  a2,
                  (const struct D2DVector4 *)(*(_QWORD *)(a1 + 112)
                                            + (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL * a2 + 4) & 0x1FFFFFFF)));
          v13 = v15;
          if ( v15 >= 0 )
            return 0;
          v27 = 549;
          break;
        case 265:
          v15 = CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(
                  (CPropertyChangeResource *)a1,
                  a2,
                  (const struct D2DMatrix *)(*(_QWORD *)(a1 + 112)
                                           + (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL * a2 + 4) & 0x1FFFFFFF)));
          v13 = v15;
          if ( v15 >= 0 )
            return 0;
          v27 = 559;
          break;
        default:
          return 0;
      }
      v22 = v15;
      goto LABEL_38;
    }
    v5 = *(_QWORD *)(a1 + 48);
    v6 = *(_QWORD *)(a1 + 112);
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 8 * v3 + 4) & 0x1FFFFFFF;
    if ( v5 )
      v8 = *(_DWORD *)(v5 + 68);
    else
      v8 = 0;
    if ( v8 )
    {
      if ( *(_DWORD *)(a1 + 56) )
      {
        v9 = *(_DWORD *)(a1 + 64);
        if ( _bittest(&v9, v3) )
        {
          v17 = *(_QWORD *)(a1 + 16);
          v31 = *(_QWORD *)(v7 + v6 + 16);
          v18 = *(_QWORD *)(v17 + 1080);
          v30 = *(_OWORD *)(v7 + v6);
          v19 = v5 ? *(unsigned int *)(v5 + 68) : 0LL;
          v20 = *(_QWORD *)(v18 + 48);
          v28 = v19;
          v29 = *(unsigned int *)(a1 + 56);
          v13 = CoreUICallSend(v20, &v28, 2LL, 13LL, 7, &unk_18028866D);
          if ( v13 == -2018375675 )
            v13 = 0;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v13, 0x1FBu, 0LL);
            v27 = 556;
LABEL_34:
            v22 = v13;
LABEL_38:
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v22, v27, 0LL);
            return (unsigned int)v13;
          }
        }
      }
    }
  }
  return 0;
}
