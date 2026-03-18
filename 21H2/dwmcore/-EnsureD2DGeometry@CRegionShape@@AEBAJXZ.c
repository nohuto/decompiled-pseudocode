/*
 * XREFs of ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x180011C5C
 * Callers:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180011BB0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x180011DB4 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_C.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180011E70 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x180011E94 (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniquen.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegionShape::EnsureD2DGeometry(CRegionShape *this)
{
  int v1; // edi
  void (__fastcall ***v4)(_QWORD, GUID *, signed __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  __int64 v8; // rcx
  signed __int64 v9; // [rsp+30h] [rbp-D0h] BYREF
  void (__fastcall ***v10)(_QWORD, GUID *, signed __int64 *); // [rsp+38h] [rbp-C8h] BYREF
  void (__fastcall ***v11)(_QWORD, GUID *, signed __int64 *); // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v12[3]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v13; // [rsp+68h] [rbp-98h]

  v1 = 0;
  if ( !*((_QWORD *)this + 11) )
  {
    v9 = 0LL;
    DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>(v12);
    v13 = 0;
    CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>>(
      (char *)this + 16,
      v12);
    v4 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void (__fastcall ****)(_QWORD, GUID *, signed __int64 *)))(**(&g_DeviceManager + 1) + 24LL))(
           *(&g_DeviceManager + 1),
           v12[0],
           v13,
           &v10);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x87u, 0LL);
    }
    else
    {
      v4 = v10;
      v10 = 0LL;
      v11 = v4;
    }
    ReleaseInterface<ID2D1Geometry>(&v10);
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v1, 0x126u, 0LL);
    }
    else
    {
      (**v4)(v4, &GUID_e7fda62a_6a94_4f17_9f7c_26a950c74010, &v9);
      v8 = -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)this + 11, v9, 0LL) != 0);
      v9 &= v8;
    }
    DynArrayImpl<1>::~DynArrayImpl<1>(v12);
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>(&v9);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
  }
  return (unsigned int)v1;
}
