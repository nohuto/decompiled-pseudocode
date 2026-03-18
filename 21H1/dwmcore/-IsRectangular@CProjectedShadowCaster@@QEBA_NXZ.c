/*
 * XREFs of ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x18000AC54
 * Callers:
 *     ?CanUseFastShadow@CProjectedShadow@@AEBA_NXZ @ 0x18000AC14 (-CanUseFastShadow@CProjectedShadow@@AEBA_NXZ.c)
 *     ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ @ 0x180013678 (-IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ.c)
 * Callees:
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180005B4C (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CProjectedShadowCaster::IsRectangular(CProjectedShadowCaster *this)
{
  __int64 v1; // rdx
  CGeometry *v3; // rcx
  __int64 v4; // rcx
  bool result; // al
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 7);
  v3 = *(CGeometry **)(v1 + 240);
  if ( !v3 || (v6 = 0LL, result = CGeometry::TryGetAxisAlignedRectangle(v3, (const struct D2D_SIZE_F *)(v1 + 132), &v6)) )
  {
    v4 = *((_QWORD *)this + 15);
    if ( !v4 )
      v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 176LL);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 56LL))(v4, 20LL);
  }
  return result;
}
