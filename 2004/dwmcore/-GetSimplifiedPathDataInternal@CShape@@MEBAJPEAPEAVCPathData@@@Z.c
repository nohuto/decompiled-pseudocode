/*
 * XREFs of ?GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18025BCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C5020 (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801B2D08 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18021F8A8 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x1802201D8 (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 */

__int64 __fastcall CShape::GetSimplifiedPathDataInternal(CShape *this, struct CPathData **a2)
{
  __int64 v2; // rax
  CPathData *v4; // rbx
  __int64 (__fastcall *v6)(CShape *, _QWORD, __int64 *); // rdi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // esi
  __int64 v10; // rbx
  void (__fastcall *v11)(__int64, __int64 *); // rdi
  __int64 v12; // rax
  int v13; // r9d
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  struct ID2D1SimplifiedGeometrySink *v17; // rdi
  struct CPathData *v18; // rax
  unsigned int v20; // [rsp+20h] [rbp-30h]
  CPathData *v21; // [rsp+30h] [rbp-20h] BYREF
  __int128 v22; // [rsp+40h] [rbp-10h] BYREF
  __int64 v23; // [rsp+80h] [rbp+30h] BYREF
  struct ID2D1SimplifiedGeometrySink *v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF

  v2 = *(_QWORD *)this;
  v23 = 0LL;
  v25 = 0LL;
  v4 = 0LL;
  v24 = 0LL;
  v6 = *(__int64 (__fastcall **)(CShape *, _QWORD, __int64 *))(v2 + 24);
  v21 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v23);
  v7 = v6(this, 0LL, &v23);
  v9 = v7;
  if ( v7 < 0 )
  {
    v20 = 980;
LABEL_14:
    v13 = v7;
    goto LABEL_15;
  }
  v10 = v23;
  v11 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  v11(v10, &v25);
  v12 = (__int64)DefaultHeap::Alloc(0x58uLL);
  if ( v12 )
  {
    v22 = 0LL;
    v12 = CPathData::CPathData(v12, v25, (SIZE_T *)&v22);
  }
  Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v21, v12);
  v4 = v21;
  if ( v21 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    v14 = CPathData::Open(v4, &v24);
    v9 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x3DAu, 0LL);
      goto LABEL_16;
    }
    v17 = v24;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v23 + 96LL))(
           v23,
           0LL,
           v16,
           v24);
    v9 = v7;
    if ( v7 < 0 )
    {
      v20 = 989;
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v17 + 72LL))(v17);
      v9 = v7;
      if ( v7 >= 0 )
      {
        v18 = v4;
        v4 = 0LL;
        *a2 = v18;
        goto LABEL_16;
      }
      v20 = 990;
    }
    goto LABEL_14;
  }
  v9 = -2147024882;
  v13 = -2147024882;
  v20 = 984;
LABEL_15:
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v13, v20, 0LL);
LABEL_16:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  if ( v4 )
    (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v4 + 16LL))(v4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v23);
  return v9;
}
