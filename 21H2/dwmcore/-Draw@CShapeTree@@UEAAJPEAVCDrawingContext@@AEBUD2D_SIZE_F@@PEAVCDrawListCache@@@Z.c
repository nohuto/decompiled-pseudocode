/*
 * XREFs of ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180089C74
 * Callers:
 *     ?Draw@CShapeTree@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180107A50 (-Draw@CShapeTree@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180089D54 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180089D74 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008A870 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CShapeTree::Draw(
        CShapeTree *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 (__fastcall ***v8)(_QWORD, _BYTE *); // rcx
  enum DXGI_COLOR_SPACE_TYPE v9; // ecx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v14; // eax
  __int64 v15; // rcx
  _BYTE v16[16]; // [rsp+30h] [rbp-48h] BYREF

  if ( (**((unsigned __int8 (__fastcall ***)(char *))a2 + 3))((char *)a2 + 24)
    || !*((_DWORD *)a2 + 156) && *((_DWORD *)a2 + 138)
    || (v8 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)a2 + 4)
                                                       + 8LL
                                                       + *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 12LL)),
        v9 = *(_DWORD *)((**v8)(v8, v16) + 8),
        v9 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709)
    || IsDXGIColorSpaceRec2020(v9) )
  {
    v14 = CContent::Draw((CShapeTree *)((char *)this - 56), a2, a3, a4);
    v12 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x16u);
  }
  else
  {
    v10 = CShapeTree::DrawShapes((CShapeTree *)((char *)this - 152), a2, a3);
    v12 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x1Au);
  }
  return v12;
}
