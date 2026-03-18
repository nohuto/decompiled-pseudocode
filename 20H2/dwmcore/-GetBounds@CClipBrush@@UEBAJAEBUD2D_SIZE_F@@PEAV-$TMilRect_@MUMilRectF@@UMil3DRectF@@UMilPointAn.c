/*
 * XREFs of ?GetBounds@CClipBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B731C
 * Callers:
 *     ?GetBounds@CClipBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F06E0 (-GetBounds@CClipBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClipBrush::GetBounds(__int64 a1, __int64 a2, float *a3)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 (__fastcall ***v7)(_QWORD); // rcx
  int v8; // eax
  __int64 v9; // rcx
  float v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm1_4

  v4 = 0;
  v5 = *(_QWORD *)(a1 - 48);
  if ( v5 )
  {
    v7 = (__int64 (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(v5 + 56) + 8LL) + v5 + 56);
    v8 = (**v7)(v7);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x35u, 0LL);
    }
    else
    {
      v10 = *(float *)(a1 - 40);
      v11 = *(float *)(a1 - 36);
      v12 = *(float *)(a1 - 32);
      v13 = *(float *)(a1 - 28);
      if ( v10 > *a3 )
        *a3 = v10;
      if ( v11 > a3[1] )
        a3[1] = v11;
      v14 = a3[2];
      if ( v14 > v12 )
      {
        a3[2] = v12;
        v14 = v12;
      }
      v15 = a3[3];
      if ( v15 > v13 )
      {
        a3[3] = v13;
        v15 = v13;
        v14 = a3[2];
      }
      if ( v14 <= *a3 || v15 <= a3[1] )
      {
        a3[3] = 0.0;
        a3[2] = 0.0;
        a3[1] = 0.0;
        *a3 = 0.0;
      }
    }
  }
  else
  {
    a3[3] = 0.0;
    a3[2] = 0.0;
    a3[1] = 0.0;
    *a3 = 0.0;
  }
  return v4;
}
