/*
 * XREFs of ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801E30C4
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC3C0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 * Callees:
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18003F1D8 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x18003FF38 (-ToD2D1ExtendMode@ExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x180057630 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x180080760 (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800860E4 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008EF8C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x1800AD0B8 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800B3EB0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x1800E49FC (-ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     memcmp_0 @ 0x180105173 (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A0C34 (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0WARPDrawListEntryParams@@QEAA@XZ @ 0x1801E2F38 (--0WARPDrawListEntryParams@@QEAA@XZ.c)
 *     ??A?$span@UPrimitiveUVDesc@@$0?0@gsl@@QEBAAEAUPrimitiveUVDesc@@_K@Z @ 0x1801E3068 (--A-$span@UPrimitiveUVDesc@@$0-0@gsl@@QEBAAEAUPrimitiveUVDesc@@_K@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x1801E3E4C (-reserve_region@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vli.c)
 *     ?ToD2D1InterpolationMode@InterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z @ 0x1801E50B8 (-ToD2D1InterpolationMode@InterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z.c)
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z @ 0x1801E7BEC (-Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::InsertWARP(
        CDrawListEntryBuilder *this,
        const __m128i *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        char a4)
{
  __m128i v4; // xmm6
  bool v6; // zf
  int v10; // ebx
  int BuiltHWPrimitiveEntry; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  bool v18; // al
  unsigned int v19; // eax
  int v20; // eax
  CCpuClip *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int128 v26; // xmm0
  __int64 v27; // rax
  const struct CShape *v28; // rbx
  unsigned __int64 v29; // r15
  __int64 *v30; // r12
  char *v31; // rdx
  __int64 *v32; // rdi
  unsigned __int8 v33; // bl
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rbx
  int v38; // xmm1_4
  int v39; // xmm0_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  int v42; // xmm1_4
  __int64 v43; // xmm1_8
  bool v44; // al
  _OWORD *v45; // rcx
  int v46; // eax
  __int64 v47; // rcx
  struct CWARPDrawListEntry *v48; // rbx
  __int64 v49; // rdx
  bool v51; // [rsp+38h] [rbp-D0h]
  struct CWARPDrawListEntry *v52; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+48h] [rbp-C0h] BYREF
  const struct CShape *v54; // [rsp+50h] [rbp-B8h] BYREF
  struct D2D_RECT_F v55; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_RECT_F v56; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v57; // [rsp+78h] [rbp-90h] BYREF
  __int64 v58; // [rsp+88h] [rbp-80h]
  int v59; // [rsp+98h] [rbp-70h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-68h]
  __int64 v61; // [rsp+A8h] [rbp-60h]
  __int128 *v62; // [rsp+B0h] [rbp-58h]
  __int64 v63; // [rsp+B8h] [rbp-50h]
  __m128i v64; // [rsp+C0h] [rbp-48h]
  int v65; // [rsp+D0h] [rbp-38h]
  int v66; // [rsp+D4h] [rbp-34h]
  __int128 v67; // [rsp+D8h] [rbp-30h] BYREF
  char v68[64]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v69[112]; // [rsp+128h] [rbp+20h] BYREF
  __int128 v70; // [rsp+198h] [rbp+90h] BYREF
  float v71[6]; // [rsp+1A8h] [rbp+A0h] BYREF
  _DWORD v72[6]; // [rsp+1C0h] [rbp+B8h] BYREF

  v4 = _mm_loadu_si128(a2);
  v6 = *((_DWORD *)this + 3) == 1;
  v55 = (struct D2D_RECT_F)v4;
  v10 = 0;
  if ( !v6 )
    v10 = a2[1].m128i_i32[0];
  LODWORD(v52) = v10;
  BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(this, 0, 0LL, 0LL);
  v13 = BuiltHWPrimitiveEntry;
  if ( BuiltHWPrimitiveEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, BuiltHWPrimitiveEntry, 0x16Cu);
    return v13;
  }
  v51 = 0;
  if ( a4 )
  {
    v14 = CCpuClip::ResolveClip(*((CCpuClip **)this + 2), &v54, 0LL);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x177u);
      return v13;
    }
    v70 = 0LL;
    v16 = (*(__int64 (__fastcall **)(const struct CShape *, __int128 *, _QWORD))(*(_QWORD *)v54 + 48LL))(v54, &v70, 0LL);
    v13 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x17Au);
      return v13;
    }
    v18 = ClipRectAndEdgeFlags(
            (__int64)&v55,
            v10,
            (__int64)&v70,
            *((_BYTE *)this + 28) != 0 ? 0x3030303 : 0,
            &v55,
            (int *)&v52);
    v4 = (__m128i)v55;
    v10 = (int)v52;
    v51 = v18;
  }
  if ( !IsEmpty(&v55) )
  {
    WARPDrawListEntryParams::WARPDrawListEntryParams((WARPDrawListEntryParams *)&v59);
    memset_0(&v59, 0, 0xF8uLL);
    v19 = *((_DWORD *)this + 6) & 0xFFFFFFFE;
    v65 = v10;
    v59 = v19 | 0x20;
    v64 = v4;
    if ( v10 )
    {
      if ( (a2[1].m128i_i8[8] & 6) == 6 )
      {
        v66 = 1;
      }
      else if ( (a2[1].m128i_i8[8] & 2) != 0 )
      {
        v66 = 2;
      }
      else
      {
        v20 = v66;
        if ( (a2[1].m128i_i8[8] & 4) != 0 )
          v20 = 3;
        v66 = v20;
      }
    }
    else
    {
      v66 = 0;
    }
    v53 = 0LL;
    if ( *((_BYTE *)this + 4425) )
      goto LABEL_26;
    v21 = (CCpuClip *)*((_QWORD *)this + 2);
    if ( !*(_QWORD *)v21 && !*((_QWORD *)v21 + 10) )
      goto LABEL_26;
    v22 = CCpuClip::ResolveClip(v21, &v54, 0LL);
    v13 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, v22, 0x1AFu);
    }
    else
    {
      v24 = (*(__int64 (__fastcall **)(const struct CShape *, _QWORD, __int64 *))(*(_QWORD *)v54 + 24LL))(
              v54,
              0LL,
              &v53);
      v13 = v24;
      if ( v24 >= 0 )
      {
        v60 = v53;
LABEL_26:
        if ( a3 )
        {
          v26 = *(_OWORD *)a3;
          v27 = *((_QWORD *)a3 + 2);
          v28 = (const struct CShape *)*((_QWORD *)this + 4);
          v54 = v28;
          v69[97] = 1;
          v67 = v26;
          if ( v27 )
          {
            v61 = v27;
            v62 = &v67;
          }
          v63 = *((_QWORD *)a3 + 3);
          if ( *((_DWORD *)this + 1101) )
          {
            v29 = 0LL;
            if ( *((_QWORD *)a3 + 4) )
            {
              v30 = (__int64 *)v69;
              do
              {
                if ( ((1 << v29) & *((_DWORD *)this + 1101)) != 0 )
                {
                  *(_QWORD *)&v56.left = gsl::span<PrimitiveUVDesc,-1>::operator[](
                                           (const struct PrimitiveVertexAttributesDesc *)((char *)a3 + 32),
                                           v29);
                  if ( memcmp_0(*(const void **)&v56.left, &unk_1803D2790, 0x24uLL) )
                  {
                    v31 = (char *)v28 + 2 * (unsigned int)v29;
                    LOWORD(v52) = *(_WORD *)&v31[(unsigned int)v29 + 64];
                    v32 = (__int64 *)((char *)v28 + 16 * (unsigned int)v29 + 8 * (unsigned int)v29 + 16);
                    v33 = v31[(unsigned int)v29 + 66];
                    CDrawListBitmap::operator=(v30 - 8, v32);
                    *(_DWORD *)v30 = ExtendMode::ToD2D1ExtendMode(BYTE1(v52));
                    v34 = ExtendMode::ToD2D1ExtendMode(v33);
                    LOBYTE(v35) = (_BYTE)v52;
                    *((_DWORD *)v30 + 1) = v34;
                    v36 = InterpolationMode::ToD2D1InterpolationMode(v35);
                    v37 = *(_QWORD *)&v56.left;
                    *((_DWORD *)v30 + 2) = v36;
                    v38 = *(_DWORD *)(v37 + 4);
                    v72[0] = *(_DWORD *)v37;
                    v39 = *(_DWORD *)(v37 + 12);
                    v72[1] = v38;
                    v40 = *(_DWORD *)(v37 + 16);
                    v72[2] = v39;
                    v41 = *(_DWORD *)(v37 + 24);
                    v72[3] = v40;
                    v42 = *(_DWORD *)(v37 + 28);
                    v72[4] = v41;
                    v72[5] = v42;
                    CDrawListBitmap::GetSize((CDrawListBitmap *)v32, &v55);
                    CDrawListBitmap::GetSize((CDrawListBitmap *)v32, &v70);
                    v71[1] = 0.0;
                    v71[2] = 0.0;
                    v71[0] = (float)(int)v70;
                    v71[3] = (float)SLODWORD(v55.top);
                    v71[4] = 0.0 - (float)((float)(int)v70 * 0.0);
                    v71[5] = 0.0 - (float)((float)SLODWORD(v55.top) * 0.0);
                    D2D1::Matrix3x2F::SetProduct(
                      (D2D1::Matrix3x2F *)&v57,
                      (const struct D2D1::Matrix3x2F *)v72,
                      (const struct D2D1::Matrix3x2F *)v71);
                    v43 = v58;
                    *(_OWORD *)(v30 - 5) = v57;
                    v56 = (struct D2D_RECT_F)_xmm;
                    *(v30 - 3) = v43;
                    v44 = AreEqual((const struct D2D_RECT_F *)(v37 + 36), &v56);
                    v28 = v54;
                    if ( !v44 )
                    {
                      *((_BYTE *)v30 + 12) = 1;
                      *((_OWORD *)v30 - 1) = *v45;
                    }
                  }
                }
                ++v29;
                v30 += 10;
              }
              while ( v29 < *((_QWORD *)a3 + 4) );
            }
          }
        }
        else
        {
          v67 = _xmm;
        }
        v52 = 0LL;
        Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease((volatile signed __int32 **)&v52);
        v46 = CWARPDrawListEntry::Create((const struct WARPDrawListEntryParams *)&v59, &v52);
        v13 = v46;
        if ( v46 >= 0 )
        {
          v48 = v52;
          v49 = (__int64)(*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) >> 3;
          v52 = 0LL;
          *(_QWORD *)detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                       (char *)this + 40,
                       v49) = v48;
          Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease((volatile signed __int32 **)&v52);
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v53);
          `vector destructor iterator'(
            v68,
            80LL,
            2LL,
            (void (__fastcall *)(char *))WARPDrawListEntryBitmapDesc::~WARPDrawListEntryBitmapDesc);
          goto LABEL_44;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0LL, v46, 0x1EFu);
        Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease((volatile signed __int32 **)&v52);
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v53);
LABEL_31:
        `vector destructor iterator'(
          v68,
          80LL,
          2LL,
          (void (__fastcall *)(char *))WARPDrawListEntryBitmapDesc::~WARPDrawListEntryBitmapDesc);
        return v13;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v24, 0x1B1u);
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v53);
    goto LABEL_31;
  }
LABEL_44:
  if ( v51 && **((_QWORD **)this + 2) )
    *((_BYTE *)this + 4424) = 1;
  return v13;
}
