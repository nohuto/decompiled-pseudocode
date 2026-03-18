/*
 * XREFs of ?GetBounds@CDropShadow@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001D2F0
 * Callers:
 *     ?GetBounds@CDropShadow@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EDBA0 (-GetBounds@CDropShadow@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF.c)
 * Callees:
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180068020 (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::GetBounds(__int64 a1, float *a2, float *a3)
{
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm5_4
  float v9; // xmm0_4
  float v10; // xmm1_4

  if ( *a2 <= 0.0
    || a2[1] <= 0.0
    || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 296) + 208LL))(a1 - 296) )
  {
    a3[3] = 0.0;
    a3[2] = 0.0;
    a3[1] = 0.0;
    *a3 = 0.0;
  }
  else
  {
    *a3 = 0.0;
    a3[1] = 0.0;
    v6 = *a2;
    a3[2] = *a2;
    v7 = a2[1];
    a3[3] = v7;
    v8 = v7 + *(float *)(a1 - 188);
    v9 = *(float *)(a1 - 192) + 0.0;
    v10 = *(float *)(a1 - 188) + 0.0;
    a3[2] = v6 + *(float *)(a1 - 192);
    a3[3] = v8;
    *a3 = v9;
    a3[1] = v10;
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(a3);
  }
  return 0LL;
}
