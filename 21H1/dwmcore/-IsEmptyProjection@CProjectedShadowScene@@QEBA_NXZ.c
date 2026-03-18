/*
 * XREFs of ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x18000A580
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180008B30 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E7C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z @ 0x18000A5E8 (-CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CProjectedShadowScene::IsEmptyProjection(CProjectedShadowScene *this)
{
  __int64 v2; // rcx
  bool result; // al

  result = 1;
  if ( *((_QWORD *)this + 8) )
  {
    if ( *((_QWORD *)this + 10) )
    {
      v2 = *((_QWORD *)this + 11);
      if ( v2 )
      {
        if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 216LL))(v2)
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(CProjectedShadowScene::CalculateOpacity(this, 0.0)) & _xmm) >= 0.0000011920929 )
        {
          return 0;
        }
      }
    }
  }
  return result;
}
