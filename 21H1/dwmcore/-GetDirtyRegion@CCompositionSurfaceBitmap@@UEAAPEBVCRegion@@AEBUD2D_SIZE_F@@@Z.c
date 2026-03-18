/*
 * XREFs of ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z @ 0x1800160A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180016238 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ @ 0x1800163E0 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x1800769C4 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
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
  int *v10; // rax
  int v11; // r9d
  int v12; // r10d
  int v13; // r11d
  int v14; // edi
  _DWORD *v15; // rdx
  _DWORD *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v19[64]; // [rsp+30h] [rbp-49h] BYREF
  int v20; // [rsp+70h] [rbp-9h]
  __int128 v21; // [rsp+80h] [rbp+7h] BYREF
  _DWORD v22[4]; // [rsp+90h] [rbp+17h] BYREF
  __int128 v23; // [rsp+A0h] [rbp+27h]

  v2 = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    RenderingRealization = CCompositionSurfaceBitmap::GetRenderingRealization((CCompositionSurfaceBitmap *)((char *)this - 88));
    if ( RenderingRealization )
    {
      v6 = *(int *)(*((_QWORD *)RenderingRealization + 1) + 4LL);
      v18 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))((char *)RenderingRealization + v6 + 8))(
             (__int64)RenderingRealization + v6 + 8,
             &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6,
             &v18) < 0 )
      {
        v20 = 0;
        v23 = 0LL;
        v7 = CCompositionSurfaceBitmap::CalcImageTransform(
               (CCompositionSurfaceBitmap *)((char *)this - 88),
               a2,
               (CMILMatrix *)v19);
        v2 = (CRegion *)*((_QWORD *)this + 2);
        if ( v7 )
        {
          v21 = 0uLL;
          CRegion::GetBoundingRect(v2, (struct MilRectU *)&v21);
          for ( i = 0LL; i < 4; ++i )
            *(float *)&v22[i] = (float)(int)v22[i - 4];
          v21 = 0LL;
          CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v19);
          v2 = (CCompositionSurfaceBitmap *)((char *)this + 24);
          if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v21)
            || (v10 = (int *)PixelAlign(v22, &v21), v11 = v10[2], v12 = *v10, *v10 >= v11)
            || (v13 = v10[1], v14 = v10[3], v13 >= v14) )
          {
            **(_DWORD **)v2 = 0;
          }
          else
          {
            v15 = *(_DWORD **)v2;
            v16 = (_DWORD *)(*(_QWORD *)v2 + 28LL);
            *v15 = 2;
            *v16 = v12;
            v16[1] = v11;
            v15[1] = v12;
            v15[4] = (_DWORD)v16 - ((_DWORD)v15 + 12);
            v15[2] = v11;
            v15[3] = v13;
            v15[6] = (_DWORD)v16 - ((_DWORD)v15 + 20) + 8;
            v15[5] = v14;
          }
        }
      }
      if ( v18 )
      {
        v17 = *(int *)(*(_QWORD *)(v18 + 8) + 4LL) + v18 + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  return v2;
}
