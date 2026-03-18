/*
 * XREFs of ?GetBounds@CCompositionGlyphRun@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B9510
 * Callers:
 *     ?GetBounds@CCompositionGlyphRun@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EF070 (-GetBounds@CCompositionGlyphRun@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCompositionGlyphRun::GetBounds(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r9
  __int64 (__fastcall ***v4)(_QWORD); // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(a1 - 48);
  if ( v3 )
  {
    v4 = (__int64 (__fastcall ***)(_QWORD))(v3 + 56 + *(int *)(*(_QWORD *)(v3 + 56) + 8LL));
    v5 = (**v4)(v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x66,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionglyphrun.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  else
  {
    a3[3] = 0;
    a3[2] = 0;
    a3[1] = 0;
    *a3 = 0;
  }
  return 0LL;
}
