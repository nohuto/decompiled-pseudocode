/*
 * XREFs of ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x18000DFF0
 * Callers:
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x18000C080 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800678C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetColor@CProjectedShadowCaster@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x18000E070 (-GetColor@CProjectedShadowCaster@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CProjectedShadowCaster::IsEmptyMaskContent(CProjectedShadowCaster *this)
{
  __int64 v1; // r8
  __int64 v2; // rcx
  _D3DCOLORVALUE v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 7)
    || COERCE_FLOAT(LODWORD(CProjectedShadowCaster::GetColor(this, &v4)->a) & _xmm) < 0.0000011920929 )
  {
    return 1;
  }
  v2 = *(_QWORD *)(v1 + 120);
  if ( !v2 )
    v2 = *(_QWORD *)(*(_QWORD *)(v1 + 16) + 176LL);
  v5 = 1;
  return !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v2 + 288LL))(v2, 0LL, &v5) || v5;
}
