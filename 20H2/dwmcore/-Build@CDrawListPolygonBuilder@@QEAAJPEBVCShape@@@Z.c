/*
 * XREFs of ?Build@CDrawListPolygonBuilder@@QEAAJPEBVCShape@@@Z @ 0x1801A2C50
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800A08F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039EB0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18019C990 (-clear@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_p.c)
 */

__int64 __fastcall CDrawListPolygonBuilder::Build(CDrawListPolygonBuilder *this, const struct CShape *a2)
{
  __int64 (__fastcall *v4)(const struct CShape *, _QWORD, __int64 *); // rsi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 3);
  v4 = *(__int64 (__fastcall **)(const struct CShape *, _QWORD, __int64 *))(*(_QWORD *)a2 + 24LL);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v5 = v4(a2, 0LL, &v12);
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x15u, 0LL);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int64))(*(_QWORD *)v12 + 96LL))(
           v12,
           0LL,
           v7,
           ((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x16u, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v13);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v12);
  return v8;
}
