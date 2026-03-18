/*
 * XREFs of ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800486A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180017540 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180048770 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z @ 0x18007B600 (-GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800AA3DC (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1801C3358 (-SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 */

__int64 __fastcall CSpriteVisual::RenderContent(CSpriteVisual *this, struct CDrawingContext *a2, bool *a3)
{
  unsigned int v3; // edi
  int v7; // eax
  __int64 v8; // rcx
  struct CContent *v10; // rax
  __int64 v11; // r9
  const struct D2D_SIZE_F *v12; // r10
  int v13; // eax
  float v14; // xmm1_4
  CDropShadow *DropShadow; // rax
  struct D2D_RECT_F v16; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  if ( (*((_BYTE *)this + 95) & 4) != 0 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1129LL) )
    {
      *a3 = 1;
      return v3;
    }
    *((_BYTE *)a2 + 5948) = 1;
  }
  if ( (**((_DWORD **)this + 28) & 0x10000) != 0 )
  {
    *(_QWORD *)&v16.left = 0LL;
    if ( CVisual::GetContentAsBrushNoRef(this, (struct CBrush **)&v16) )
    {
      v13 = *((_DWORD *)a2 + 808);
      if ( v13 )
        v14 = *(float *)(*((_QWORD *)a2 + 406) + 4LL * (unsigned int)(v13 - 1));
      else
        v14 = *(float *)&FLOAT_1_0;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - 1.0) & _xmm) >= 0.0000011920929
        || !(*(unsigned __int8 (__fastcall **)(_QWORD, char *, struct D2D_RECT_F *))(**(_QWORD **)&v16.left + 296LL))(
              *(_QWORD *)&v16.left,
              (char *)this + 132,
              &v16) )
      {
        v16 = 0LL;
      }
      DropShadow = CSpriteVisual::GetDropShadow(this);
      CDropShadow::SetOcclusionRect(DropShadow, &v16);
    }
    v10 = CSpriteVisual::GetDropShadow(this);
    CVisual::RenderContentWorker(this, v10, 1u, v11, a2, v12);
  }
  v7 = CVisual::RenderContent(this, a2, a3);
  v3 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xBAu, 0LL);
  return v3;
}
