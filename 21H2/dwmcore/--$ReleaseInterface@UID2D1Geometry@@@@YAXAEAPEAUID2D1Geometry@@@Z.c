/*
 * XREFs of ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180011E70
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x1800117D8 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x180011C5C (-EnsureD2DGeometry@CRegionShape@@AEBAJXZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18008AB80 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?ResolveSharedMemoryBufferNew@CPrimitiveGroup@@AEAAXXZ @ 0x18010453C (-ResolveSharedMemoryBufferNew@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ResolveSharedMemoryBufferOld@CPrimitiveGroup@@AEAAXXZ @ 0x18010476C (-ResolveSharedMemoryBufferOld@CPrimitiveGroup@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<ID2D1Geometry>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
