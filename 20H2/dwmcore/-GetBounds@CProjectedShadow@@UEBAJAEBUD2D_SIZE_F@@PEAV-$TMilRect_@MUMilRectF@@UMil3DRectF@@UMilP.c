/*
 * XREFs of ?GetBounds@CProjectedShadow@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E3228
 * Callers:
 *     ?GetBounds@CProjectedShadow@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F0B70 (-GetBounds@CProjectedShadow@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3D.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadow::GetBounds(__int64 a1, _DWORD *a2, __int64 a3)
{
  char v5; // al
  int v6; // xmm0_4

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 416) + 208LL))(a1 - 416);
  *(_QWORD *)a3 = 0LL;
  if ( v5 )
  {
    *(_DWORD *)(a3 + 8) = 0;
    v6 = 0;
  }
  else
  {
    *(_DWORD *)(a3 + 8) = *a2;
    v6 = a2[1];
  }
  *(_DWORD *)(a3 + 12) = v6;
  return 0LL;
}
