/*
 * XREFs of ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x1800E44FC
 * Callers:
 *     ?GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800E44E0 (-GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801919A0 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180012F0C (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Attach@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAXPEAUID2D1Geometry@@@Z @ 0x18006C0DC (-Attach@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAXPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800D5E60 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Geometry@@@Z @ 0x1800E4588 (--4-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Geometry@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransformedGeometryHelper::TransformGeometry(
        const struct CMILMatrix *a1,
        struct ID2D1Geometry *a2,
        struct ID2D1Geometry **a3)
{
  unsigned int v6; // edi
  unsigned int v8; // xmm1_4
  int (__fastcall **v9)(struct ID2D1Geometry *, GUID *, __int64 *); // rax
  unsigned int v10; // xmm0_4
  __int64 v11; // rbx
  void (__fastcall *v12)(__int64, struct ID2D1Geometry **); // rdi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  CTransformedGeometryHelper *v17; // rax
  CTransformedGeometryHelper *v18; // rbx
  int D2DGeometry; // eax
  __int64 v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-49h] BYREF
  struct ID2D1Geometry *v22; // [rsp+38h] [rbp-41h] BYREF
  struct ID2D1Geometry *v23; // [rsp+40h] [rbp-39h] BYREF
  __int64 v24; // [rsp+48h] [rbp-31h] BYREF
  __int128 v25; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-19h]
  __int128 v27; // [rsp+68h] [rbp-11h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-1h]
  __int128 v29; // [rsp+80h] [rbp+7h] BYREF
  int v30; // [rsp+90h] [rbp+17h]
  int v31; // [rsp+94h] [rbp+1Bh]

  v22 = 0LL;
  v6 = 0;
  if ( !a2 )
    goto LABEL_4;
  if ( !a1 )
  {
    Microsoft::WRL::ComPtr<ID2D1Geometry>::operator=(&v22);
LABEL_4:
    *a3 = v22;
    v22 = 0LL;
    goto LABEL_5;
  }
  if ( CMILMatrix::IsAffine<1>((__int64)a1, 1) )
  {
    v23 = a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v23);
    v8 = *((_DWORD *)a1 + 1);
    v9 = *(int (__fastcall ***)(struct ID2D1Geometry *, GUID *, __int64 *))a2;
    LODWORD(v27) = *(_DWORD *)a1;
    *(_QWORD *)((char *)&v27 + 4) = __PAIR64__(*((_DWORD *)a1 + 4), v8);
    v10 = *((_DWORD *)a1 + 12);
    HIDWORD(v27) = *((_DWORD *)a1 + 5);
    v28 = __PAIR64__(*((_DWORD *)a1 + 13), v10);
    v21 = 0LL;
    if ( (*v9)(a2, &GUID_2cd906bb_12e2_11dc_9fed_001143a055f9, &v21) >= 0 )
    {
      v11 = v21;
      v12 = *(void (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)v21 + 136LL);
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v23);
      v12(v11, &v23);
      v30 = 0;
      v31 = 0;
      v29 = *(_OWORD *)&_xmm;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v21 + 144LL))(v21, &v29);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v25,
        (const struct D2D1::Matrix3x2F *)&v29,
        (const struct D2D1::Matrix3x2F *)&v27);
      v27 = v25;
      v28 = v26;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry *, __int128 *, __int64 *))(*g_DeviceManager + 72LL))(
            g_DeviceManager,
            v23,
            &v27,
            &v24);
    v6 = v13;
    if ( v13 >= 0 )
    {
      Microsoft::WRL::ComPtr<ID2D1Geometry>::Attach((__int64 *)&v22, v24);
      v15 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v23);
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x2Eu);
    v16 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v23);
  }
  else
  {
    v17 = (CTransformedGeometryHelper *)operator new(0x40uLL);
    v18 = v17;
    if ( v17 )
    {
      *((_DWORD *)v17 + 2) = 0;
      *(_QWORD *)v17 = &CTransformedGeometryHelper::`vftable';
      *((_QWORD *)v17 + 5) = 0LL;
      *((_QWORD *)v17 + 6) = 0LL;
      *((_QWORD *)v17 + 7) = 0LL;
      *((_QWORD *)v17 + 2) = a1;
      *((_QWORD *)v17 + 3) = 0LL;
      *((_QWORD *)v17 + 4) = 0LL;
      (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v17 + 8LL))(v17);
    }
    else
    {
      v18 = 0LL;
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v22);
    D2DGeometry = CTransformedGeometryHelper::GetD2DGeometry(v18, a2, &v22);
    v6 = D2DGeometry;
    if ( D2DGeometry >= 0 )
    {
      if ( v18 )
        (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v18 + 16LL))(v18);
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, D2DGeometry, 0x36u);
    if ( v18 )
      (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v18 + 16LL))(v18);
  }
LABEL_5:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v22);
  return v6;
}
