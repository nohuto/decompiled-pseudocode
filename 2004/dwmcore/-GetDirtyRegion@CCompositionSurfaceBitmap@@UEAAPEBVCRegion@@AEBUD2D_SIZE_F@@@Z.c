/*
 * XREFs of ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z @ 0x1800152D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015468 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ @ 0x180015610 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x1800454C8 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180049364 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180072960 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x1800803F8 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

const struct CRegion *__fastcall CCompositionSurfaceBitmap::GetDirtyRegion(
        CCompositionSurfaceBitmap *this,
        struct D2D_SIZE_F *a2)
{
  CRegion *v2; // rbx
  struct IBitmapRealization *RenderingRealization; // rax
  __int64 v6; // rcx
  char v7; // al
  __int64 i; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // r9d
  int v19; // r11d
  _DWORD *v20; // rdx
  _DWORD *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v24[64]; // [rsp+30h] [rbp-49h] BYREF
  int v25; // [rsp+70h] [rbp-9h]
  _OWORD v26[3]; // [rsp+80h] [rbp+7h] BYREF

  v2 = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    RenderingRealization = CCompositionSurfaceBitmap::GetRenderingRealization((CCompositionSurfaceBitmap *)((char *)this - 88));
    if ( RenderingRealization )
    {
      v6 = *(int *)(*((_QWORD *)RenderingRealization + 1) + 4LL);
      v23 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))((char *)RenderingRealization + v6 + 8))(
             (__int64)RenderingRealization + v6 + 8,
             &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6,
             &v23) < 0 )
      {
        v25 = 0;
        v26[1] = 0LL;
        v7 = CCompositionSurfaceBitmap::CalcImageTransform(
               (CCompositionSurfaceBitmap *)((char *)this - 88),
               a2,
               (CMILMatrix *)v24);
        v2 = (CRegion *)*((_QWORD *)this + 2);
        if ( v7 )
        {
          v26[0] = 0uLL;
          CRegion::GetBoundingRect(v2, (struct MilRectU *)v26);
          for ( i = 0LL; i < 16; i += 4LL )
            *(float *)((char *)&v26[2] + i) = (float)*(int *)((char *)v26 + i);
          v26[0] = 0LL;
          CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v24);
          v2 = (CCompositionSurfaceBitmap *)((char *)this + 24);
          if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v26)
            || (PixelAlign(v10, 0LL),
                PixelAlign(v12, v11),
                v14 = PixelAlign(v13, 1LL),
                v17 = PixelAlign(v16, v15),
                v19 >= v14)
            || v18 >= v17 )
          {
            **(_DWORD **)v2 = 0;
          }
          else
          {
            v20 = *(_DWORD **)v2;
            v21 = (_DWORD *)(*(_QWORD *)v2 + 28LL);
            *v20 = 2;
            *v21 = v19;
            v21[1] = v14;
            v20[1] = v19;
            v20[4] = (_DWORD)v21 - ((_DWORD)v20 + 12);
            v20[2] = v14;
            v20[3] = v18;
            v20[6] = (_DWORD)v21 - ((_DWORD)v20 + 20) + 8;
            v20[5] = v17;
          }
        }
      }
      if ( v23 )
      {
        v22 = *(int *)(*(_QWORD *)(v23 + 8) + 4LL) + v23 + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
  }
  return v2;
}
