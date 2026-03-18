/*
 * XREFs of ??1CDrawListBitmap@@QEAA@XZ @ 0x1800635F0
 * Callers:
 *     ??_GCCommonRenderingEffect@@UEAAPEAXI@Z @ 0x1800618B0 (--_GCCommonRenderingEffect@@UEAAPEAXI@Z.c)
 *     ??_ECBrushRenderingEffect@@UEAAPEAXI@Z @ 0x1800C4F80 (--_ECBrushRenderingEffect@@UEAAPEAXI@Z.c)
 *     _lambda_611de328e1bb62dc15d573c6a00f4466_::operator() @ 0x1800E9FF4 (_lambda_611de328e1bb62dc15d573c6a00f4466_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListBitmap::~CDrawListBitmap(CDrawListBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = *(int *)(*(_QWORD *)(v2 + 8) + 4LL) + v2 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( *(_QWORD *)this )
  {
    v4 = *(_QWORD *)this + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)this + 8LL) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
