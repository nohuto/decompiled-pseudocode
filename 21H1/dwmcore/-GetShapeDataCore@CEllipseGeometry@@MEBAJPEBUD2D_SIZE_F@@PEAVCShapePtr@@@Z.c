/*
 * XREFs of ?GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801C4120
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800BDC0C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18025EA24 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CEllipseGeometry::GetShapeDataCore(
        CEllipseGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  __int128 v3; // xmm0
  CComplexShape *v4; // rbx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  CComplexShape *v9; // rax
  __int64 v10; // rcx
  struct ID2D1Geometry *v12; // [rsp+30h] [rbp-28h] BYREF
  __int128 v13; // [rsp+38h] [rbp-20h] BYREF

  v3 = *(_OWORD *)((char *)this + 136);
  v4 = 0LL;
  v12 = 0LL;
  v13 = v3;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  v6 = (*(__int64 (__fastcall **)(void *, __int128 *, struct ID2D1Geometry **))(*(_QWORD *)g_DeviceManager + 56LL))(
         g_DeviceManager,
         &v13,
         &v12);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x52u, 0LL);
  }
  else
  {
    v9 = (CComplexShape *)DefaultHeap::Alloc(0x18uLL);
    if ( v9 )
      v4 = CComplexShape::CComplexShape(v9, v12);
    if ( !v4 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x55u, 0LL);
    }
  }
  CShapePtr::Release(a3);
  *(_QWORD *)a3 = v4;
  *((_BYTE *)a3 + 8) = 1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  return v8;
}
