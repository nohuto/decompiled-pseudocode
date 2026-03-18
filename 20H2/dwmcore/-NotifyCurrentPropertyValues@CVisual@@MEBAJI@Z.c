/*
 * XREFs of ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1800C3610
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x180070B3C (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x180070CF8 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x180070E60 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x1800727F0 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x1800736A0 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1800CDBAC (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::NotifyCurrentPropertyValues(CVisual *this, int a2)
{
  unsigned int v2; // ebx
  FLOAT v5; // xmm1_4
  FLOAT v6; // xmm0_4
  unsigned __int64 v7; // rcx
  FLOAT v8; // xmm1_4
  int v10; // eax
  __int64 v11; // rcx
  float OpacityInternal; // xmm0_4
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  struct D2D_VECTOR_3F v22; // [rsp+30h] [rbp-30h] BYREF
  struct D2D_VECTOR_3F v23; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0;
  if ( (a2 & 0x10000000) == 0 )
    goto LABEL_29;
  v5 = *((float *)this + 27);
  v23.x = *((FLOAT *)this + 26);
  v6 = *((float *)this + 28);
  v23.y = v5;
  v7 = *(_QWORD *)&v23.x - CVisual::sc_defaultOffset;
  v23.z = v6;
  if ( *(_QWORD *)&v23.x == CVisual::sc_defaultOffset )
    v7 = LODWORD(v23.z) - (unsigned __int64)(unsigned int)dword_180348290;
  if ( v7
    && (v10 = CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x1Cu, (const struct D2DVector3 *)&v23),
        v2 = v10,
        v10 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1814u, 0LL);
  }
  else
  {
LABEL_29:
    if ( (a2 & 0x4000000) == 0
      || (OpacityInternal = CVisual::GetOpacityInternal(this), OpacityInternal == 1.0)
      || (v13 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 0x1Au, OpacityInternal), v2 = v13, v13 >= 0) )
    {
      if ( (a2 & 0x20000000) == 0
        || (v8 = *((float *)this + 32), v22.x = *((FLOAT *)this + 31), v22.y = v8, *(_QWORD *)&v22.x == CVisual::sc_Size)
        || (v15 = CPropertyChangeResource::NotifyVector2PropertyChanged(this, 0x1Du, (const struct D2DVector2 *)&v22),
            v2 = v15,
            v15 >= 0) )
      {
        if ( (a2 & 0x40000000) == 0 )
          goto LABEL_30;
        CVisual::GetRelativeOffsetInternal(this, &v22);
        v23 = v22;
        v17 = *(_QWORD *)&v22.x - CVisual::sc_defaultRelativeOffset;
        if ( *(_QWORD *)&v22.x == CVisual::sc_defaultRelativeOffset )
          v17 = LODWORD(v23.z) - (unsigned __int64)(unsigned int)dword_1803482A0;
        if ( v17
          && (v18 = CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x1Eu, (const struct D2DVector3 *)&v23),
              v2 = v18,
              v18 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x1833u, 0LL);
        }
        else
        {
LABEL_30:
          if ( a2 < 0 )
          {
            CVisual::GetRelativeLayoutSizeInternal(this, &v23);
            *(_QWORD *)&v22.x = *(_QWORD *)&v23.x;
            if ( *(_QWORD *)&v23.x != CVisual::sc_defaultRelativeSize )
            {
              v20 = CPropertyChangeResource::NotifyVector2PropertyChanged(this, 0x1Fu, (const struct D2DVector2 *)&v22);
              v2 = v20;
              if ( v20 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x183Du, 0LL);
            }
          }
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1826u, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x181Du, 0LL);
    }
  }
  return v2;
}
