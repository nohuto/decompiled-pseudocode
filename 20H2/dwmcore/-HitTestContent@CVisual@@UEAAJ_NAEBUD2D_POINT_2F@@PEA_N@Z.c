/*
 * XREFs of ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800C3D50
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800C39B0 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x180073B98 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800C5608 (-GetTouchTargetBounds@CVisual@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::HitTestContent(CVisual *this, char a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  unsigned int v4; // ebx
  bool v9; // al
  __int64 v10; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  const struct MilRectF *TouchTargetBounds; // rax
  _BYTE v16[16]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  *a4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 296LL))(this) )
  {
    if ( a2 )
    {
      TouchTargetBounds = (const struct MilRectF *)CVisual::GetTouchTargetBounds(this, v16);
      v9 = IsPointInRect(a3, TouchTargetBounds);
      *a4 = v9;
    }
    else
    {
      v9 = *a4;
    }
    if ( !v9 )
    {
      v10 = *((_QWORD *)this + 31);
      if ( v10 )
      {
        v12 = v10 + 56 + *(int *)(*(_QWORD *)(v10 + 56) + 8LL);
        v13 = (*(__int64 (__fastcall **)(__int64, char *, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v12 + 24LL))(
                v12,
                (char *)this + 132,
                a3,
                a4);
        v4 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1394u, 0LL);
      }
    }
  }
  return v4;
}
