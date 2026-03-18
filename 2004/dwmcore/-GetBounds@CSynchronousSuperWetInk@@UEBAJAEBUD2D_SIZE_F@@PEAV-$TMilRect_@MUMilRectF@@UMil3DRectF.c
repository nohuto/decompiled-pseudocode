/*
 * XREFs of ?GetBounds@CSynchronousSuperWetInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F0BE4
 * Callers:
 *     ?GetBounds@CSynchronousSuperWetInk@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F1050 (-GetBounds@CSynchronousSuperWetInk@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@.c)
 * Callees:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800153AC (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::GetBounds(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rcx
  int Bounds; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(_QWORD *)(a1 - 192);
  if ( v3 )
  {
    Bounds = CCompositionSurfaceBitmap::GetBounds(v3 + 224, a2, a3);
    v5 = Bounds;
    if ( Bounds < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x85,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\synchronoussuperwetink.cpp",
        (const char *)(unsigned int)Bounds);
      return v5;
    }
  }
  else
  {
    *(_OWORD *)a3 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  }
  return 0LL;
}
