/*
 * XREFs of ??_ECLegacyStereoRenderTarget@@UEAAPEAXI@Z @ 0x180171820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1800D71D8 (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

CLegacyStereoRenderTarget *__fastcall CLegacyStereoRenderTarget::`vector deleting destructor'(
        CLegacyStereoRenderTarget *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *((_QWORD *)this + 2327);
  if ( v4 )
  {
    v5 = *(int *)(*(_QWORD *)(v4 + 8) + 4LL) + v4 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  CLegacyRenderTarget::~CLegacyRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x4908);
    else
      operator delete(this);
  }
  return this;
}
