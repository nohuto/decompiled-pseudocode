/*
 * XREFs of ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x180201984
 * Callers:
 *     ?CanUseFastShadow@CProjectedShadow@@AEBA_NXZ @ 0x180114732 (-CanUseFastShadow@CProjectedShadow@@AEBA_NXZ.c)
 *     ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ @ 0x180234EBC (-IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F8EF0 (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 */

bool __fastcall CProjectedShadowCaster::IsRectangular(CProjectedShadowCaster *this)
{
  __int64 v1; // rdx
  CGeometry *v3; // rcx
  bool result; // al
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 8);
  v3 = *(CGeometry **)(v1 + 248);
  if ( !v3 || (v6 = 0LL, result = CGeometry::TryGetAxisAlignedRectangle(v3, (const struct D2D_SIZE_F *)(v1 + 140), &v6)) )
  {
    v5 = *((_QWORD *)this + 16);
    if ( !v5 )
      v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 328LL);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 56LL))(v5, 20LL);
  }
  return result;
}
