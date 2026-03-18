/*
 * XREFs of ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18019C4EC
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18006500C (-Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18009F8B0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000955C (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18000973C (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180019B34 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x18005E72C (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x180061FF0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800650B4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18009F650 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x1800C2DBC (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C502C (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     memcmp_0 @ 0x1800EE9BF (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??0WARPDrawListEntryParams@@QEAA@XZ @ 0x18019C174 (--0WARPDrawListEntryParams@@QEAA@XZ.c)
 *     ??A?$span@UPrimitiveUVDesc@@$0?0@gsl@@QEBAAEAUPrimitiveUVDesc@@_J@Z @ 0x18019C2B0 (--A-$span@UPrimitiveUVDesc@@$0-0@gsl@@QEBAAEAUPrimitiveUVDesc@@_J@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x18019C968 (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x18019CF14 (-reserve_region@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vli.c)
 *     ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x18019D588 (-ToD2D1ExtendMode@ExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z.c)
 *     ?ToD2D1InterpolationMode@InterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z @ 0x18019D5AC (-ToD2D1InterpolationMode@InterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z.c)
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z @ 0x1801A140C (-Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::InsertWARP(
        struct CWARPDrawListEntry **this,
        FLOAT *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        const struct D2D_RECT_F *a4)
{
  int BuiltHWPrimitiveEntry; // eax
  __int64 v9; // rcx
  unsigned __int64 v10; // r13
  unsigned int v11; // ebx
  struct D2D_RECT_F *v12; // r9
  __int64 v13; // rdx
  const struct D2D_MATRIX_3X2_F *v14; // r8
  FLOAT v15; // eax
  bool v16; // zf
  FLOAT dy; // eax
  CCpuClip *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int128 v23; // xmm0
  __int64 v24; // rax
  struct CWARPDrawListEntry *v25; // rbx
  __int64 v26; // xmm1_8
  unsigned int v27; // r12d
  _BYTE *v28; // r14
  int v29; // eax
  __int64 v30; // r13
  char *v31; // rdx
  char v32; // bl
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // xmm0_4
  __m128 v40; // xmm3
  __m128 v41; // xmm1
  __int64 v42; // xmm1_8
  _OWORD *v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  _QWORD *v46; // rcx
  char *v47; // rdi
  _QWORD *v48; // rax
  struct CWARPDrawListEntry *v50; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v51; // [rsp+38h] [rbp-C8h]
  __int64 v52; // [rsp+40h] [rbp-C0h] BYREF
  struct CShape *v53; // [rsp+48h] [rbp-B8h] BYREF
  struct D2D_RECT_F v54; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v55; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+68h] [rbp-98h]
  __int64 v57; // [rsp+70h] [rbp-90h]
  __int128 *v58; // [rsp+78h] [rbp-88h]
  __int64 v59; // [rsp+80h] [rbp-80h]
  struct D2D_MATRIX_3X2_F v60; // [rsp+88h] [rbp-78h] BYREF
  __int128 v61; // [rsp+A0h] [rbp-60h] BYREF
  char v62[92]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v63[132]; // [rsp+10Ch] [rbp+Ch] BYREF
  __int128 v64; // [rsp+190h] [rbp+90h] BYREF
  __int64 v65; // [rsp+1A0h] [rbp+A0h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+1A8h] [rbp+A8h] BYREF

  BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                            (CDrawListEntryBuilder *)this,
                            0,
                            0LL,
                            0LL);
  v10 = 0LL;
  v11 = BuiltHWPrimitiveEntry;
  if ( BuiltHWPrimitiveEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, BuiltHWPrimitiveEntry, 0x10Du, 0LL);
    return v11;
  }
  WARPDrawListEntryParams::WARPDrawListEntryParams((WARPDrawListEntryParams *)&v55);
  memset_0(&v55, 0, 0x128uLL);
  if ( a4 )
  {
    D2DMatrixHelper::TransformRect_AxisAlignedPreserving((D2DMatrixHelper *)a2, a4, &v60, v12);
    LODWORD(v15) = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
                     (D2DMatrixHelper *)*((unsigned int *)a2 + 4),
                     v13,
                     v14);
  }
  else
  {
    v15 = a2[4];
    *(_OWORD *)&v60.m11 = *(_OWORD *)a2;
  }
  v60.dx = v15;
  v16 = *((_DWORD *)this + 3) == 1;
  v55 = (_DWORD)this[3] & 0xFFFFFFCF | 0x20;
  if ( v16 )
  {
    *(_QWORD *)&v60.m[2][0] = 0LL;
  }
  else if ( ((_BYTE)a2[6] & 6) == 6 )
  {
    LODWORD(v60.dy) = 1;
  }
  else if ( ((_BYTE)a2[6] & 2) != 0 )
  {
    LODWORD(v60.dy) = 2;
  }
  else
  {
    dy = v60.dy;
    if ( ((_BYTE)a2[6] & 4) != 0 )
      LODWORD(dy) = 3;
    v60.dy = dy;
  }
  v18 = this[2];
  v52 = 0LL;
  if ( !*((_BYTE *)v18 + 32) )
    goto LABEL_18;
  v19 = CCpuClip::ResolveClip(v18, &v53);
  v11 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x148u, 0LL);
  }
  else
  {
    v21 = (*(__int64 (__fastcall **)(struct CShape *, _QWORD, __int64 *))(*(_QWORD *)v53 + 24LL))(v53, 0LL, &v52);
    v11 = v21;
    if ( v21 >= 0 )
    {
      v56 = v52;
LABEL_18:
      if ( a3 )
      {
        v23 = *(_OWORD *)a3;
        v24 = *((_QWORD *)a3 + 3);
        v25 = this[4];
        v50 = v25;
        v63[117] = 1;
        v61 = v23;
        if ( v24 )
        {
          v57 = v24;
          v58 = &v61;
        }
        v59 = *((_QWORD *)a3 + 4);
        if ( *((_DWORD *)this + 569) )
        {
          if ( a4 )
          {
            v26 = *(_QWORD *)&a4[1].left;
            *(struct D2D_RECT_F *)&matrix.m11 = *a4;
            *(_QWORD *)&matrix.m[2][0] = v26;
            D2D1InvertMatrix(&matrix);
          }
          v27 = 0;
          v53 = (const struct PrimitiveVertexAttributesDesc *)((char *)a3 + 40);
          if ( *((__int64 *)a3 + 5) > 0 )
          {
            v28 = v63;
            do
            {
              v29 = *((_DWORD *)this + 569);
              if ( _bittest(&v29, v27) )
              {
                *(_QWORD *)&v54.left = gsl::span<PrimitiveUVDesc,-1>::operator[]((unsigned __int64 *)v53, v10);
                if ( memcmp_0(*(const void **)&v54.left, &unk_180343850, 0x24uLL) )
                {
                  v30 = 104 * v10;
                  v31 = (char *)v25 + 2 * v27;
                  v32 = v31[v27 + 114];
                  v51 = *(_WORD *)&v31[v27 + 112];
                  CDrawListBitmap::operator=((__int64)&v62[v30], (__int64)v50 + 48 * v27 + 16);
                  LOBYTE(v33) = HIBYTE(v51);
                  v34 = ExtendMode::ToD2D1ExtendMode(v33);
                  LOBYTE(v35) = v32;
                  *((_DWORD *)v28 - 1) = v34;
                  v36 = ExtendMode::ToD2D1ExtendMode(v35);
                  LOBYTE(v37) = v51;
                  *(_DWORD *)v28 = v36;
                  *((_DWORD *)v28 + 1) = InterpolationMode::ToD2D1InterpolationMode(v37);
                  v38 = *(_QWORD *)&v54.left;
                  v39 = **(_DWORD **)&v54.left;
                  v40 = (__m128)*(unsigned int *)(*(_QWORD *)&v54.left + 28LL);
                  DWORD1(v64) = *(_DWORD *)(*(_QWORD *)&v54.left + 4LL);
                  HIDWORD(v64) = *(_DWORD *)(*(_QWORD *)&v54.left + 16LL);
                  v41 = (__m128)*(unsigned int *)(*(_QWORD *)&v54.left + 24LL);
                  LODWORD(v64) = v39;
                  DWORD2(v64) = *(_DWORD *)(*(_QWORD *)&v54.left + 12LL);
                  *(_OWORD *)(v28 - 44) = v64;
                  *(_QWORD *)(v28 - 28) = _mm_unpacklo_ps(v41, v40).m128_u64[0];
                  if ( a4 )
                  {
                    D2D1::Matrix3x2F::SetProduct(
                      (D2D1::Matrix3x2F *)&v64,
                      (const struct D2D1::Matrix3x2F *)&matrix,
                      (const struct D2D1::Matrix3x2F *)&v62[v30 + 48]);
                    v42 = v65;
                    *(_OWORD *)(v28 - 44) = v64;
                    *(_QWORD *)(v28 - 28) = v42;
                  }
                  v54 = (struct D2D_RECT_F)_xmm;
                  v25 = v50;
                  if ( !AreEqual((const struct D2D_RECT_F *)(v38 + 36), &v54) )
                  {
                    v28[8] = 1;
                    *(_OWORD *)(v28 - 20) = *v43;
                  }
                }
              }
              ++v27;
              v28 += 104;
              v10 = (int)v27;
            }
            while ( (int)v27 < *(_QWORD *)v53 );
          }
        }
      }
      else
      {
        v61 = _xmm;
      }
      v50 = 0LL;
      Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(&v50);
      v44 = CWARPDrawListEntry::Create((const struct WARPDrawListEntryParams *)&v55, &v50);
      v11 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x196u, 0LL);
      }
      else
      {
        v46 = this + 5;
        v47 = (char *)v50 + 16;
        if ( !v50 )
          v47 = 0LL;
        v48 = (_QWORD *)detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                          v46,
                          (__int64)(v46[1] - *v46) >> 3);
        v50 = 0LL;
        *v48 = v47;
      }
      Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(&v50);
      Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v52);
      goto LABEL_23;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x14Au, 0LL);
  }
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v52);
LABEL_23:
  `vector destructor iterator'(v62, 104LL, 2LL, (void (__fastcall *)(char *))EffectInput::~EffectInput);
  return v11;
}
