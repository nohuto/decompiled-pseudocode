/*
 * XREFs of ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801D3600
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180059EE0 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C891C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB404 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801B17D8 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x1802206F8 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x180221028 (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18025F730 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 */

__int64 __fastcall CLineGeometry::GetShapeDataCore(
        CLineGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  LPVOID v5; // rax
  __int64 v6; // rcx
  CPathData *v7; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  struct ID2D1SimplifiedGeometrySink *v11; // rbx
  CPathSegmentsShape *v12; // rax
  __int64 v13; // rcx
  CPathSegmentsShape *v14; // rsi
  unsigned int v16; // [rsp+20h] [rbp-38h]
  CPathData *v17; // [rsp+30h] [rbp-28h] BYREF
  __int128 v18; // [rsp+40h] [rbp-18h] BYREF
  struct ID2D1SimplifiedGeometrySink *v19; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  v19 = 0LL;
  v5 = DefaultHeap::Alloc(0x58uLL);
  if ( v5 )
  {
    v18 = 0LL;
    v5 = (LPVOID)CPathData::CPathData(v5, g_DeviceManager, &v18);
  }
  Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v17, (__int64)v5);
  v7 = v17;
  if ( v17 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
    v9 = CPathData::Open(v7, &v19);
    v8 = v9;
    if ( v9 < 0 )
    {
      v16 = 85;
    }
    else
    {
      v11 = v19;
      (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, unsigned __int64, __int64))(*(_QWORD *)v19 + 40LL))(
        v19,
        _mm_unpacklo_ps((__m128)*((unsigned int *)this + 34), (__m128)*((unsigned int *)this + 35)).m128_u64[0],
        1LL);
      (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, char *, __int64))(*(_QWORD *)v11 + 48LL))(
        v11,
        (char *)this + 144,
        1LL);
      (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, _QWORD))(*(_QWORD *)v11 + 64LL))(v11, 0LL);
      v9 = (*(__int64 (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v11 + 72LL))(v11);
      v8 = v9;
      if ( v9 >= 0 )
      {
        v12 = (CPathSegmentsShape *)DefaultHeap::Alloc(0x18uLL);
        if ( v12 )
          v14 = CPathSegmentsShape::CPathSegmentsShape(v12, v7);
        else
          v14 = 0LL;
        if ( v14 )
        {
          CShapePtr::Release(a3);
          *(_QWORD *)a3 = v14;
          *((_BYTE *)a3 + 8) = 1;
        }
        else
        {
          v8 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x5Eu, 0LL);
        }
        goto LABEL_16;
      }
      v16 = 91;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v16, 0LL);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x53u, 0LL);
  }
LABEL_16:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  if ( v7 )
    (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
