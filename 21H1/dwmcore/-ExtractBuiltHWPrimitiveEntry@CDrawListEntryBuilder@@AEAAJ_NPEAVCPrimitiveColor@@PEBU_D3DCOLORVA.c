/*
 * XREFs of ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18004B860
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18004B1C0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180052854 (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800A6DFC (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801A0CFC (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x18001A904 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18003A090 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18004BD30 (-ensure_extra_capacity@-$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x18004BE40 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x18004C2DC (PrimitiveStorage--Alloc_16_.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BEBE0 (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180158DE4 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
        CDrawListEntryBuilder *this,
        char a2,
        struct CPrimitiveColor *a3,
        const struct _D3DCOLORVALUE *a4)
{
  void *v4; // r12
  CDrawListEntry *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rsi
  int v9; // r15d
  char v10; // r15
  __int64 (__fastcall ***v11)(_QWORD, __int64); // r13
  unsigned int v12; // edx
  int v13; // r8d
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, __int64); // rdi
  __int64 v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, __int64); // rdx
  void (__fastcall ***v19)(_QWORD); // r13
  char *v20; // rax
  int v21; // r12d
  __int64 (__fastcall ***v22)(_QWORD, __int64); // rdi
  char *v23; // rsi
  _DWORD *Value; // rcx
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rsi
  _QWORD *v28; // rdx
  __int64 v29; // r12
  _QWORD *v30; // r9
  __int64 v31; // r8
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  struct CShape *v44; // rsi
  __int64 (__fastcall *v45)(struct CShape *, _QWORD, __int64 *); // rdi
  int v46; // eax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rcx
  DWORD v50; // ecx
  __int64 v51; // xmm0_8
  __int64 v52; // r11
  __int64 v53; // r10
  bool v54; // sf
  __int64 v55; // [rsp+20h] [rbp-E0h]
  void *Src; // [rsp+28h] [rbp-D8h]
  __int64 v57; // [rsp+30h] [rbp-D0h]
  int v58; // [rsp+40h] [rbp-C0h]
  __int128 v59; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v60; // [rsp+60h] [rbp-A0h]
  __int64 v61; // [rsp+68h] [rbp-98h] BYREF
  __int64 (__fastcall ***v62)(_QWORD, __int64); // [rsp+70h] [rbp-90h]
  _QWORD *v63; // [rsp+78h] [rbp-88h]
  __int64 *v64; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+88h] [rbp-78h] BYREF
  __int64 v66; // [rsp+90h] [rbp-70h]
  struct CShape *v67; // [rsp+98h] [rbp-68h] BYREF
  int v68[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v69; // [rsp+A8h] [rbp-58h]
  unsigned int v70; // [rsp+ACh] [rbp-54h]
  int v71[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v72; // [rsp+B8h] [rbp-48h]
  unsigned int v73; // [rsp+BCh] [rbp-44h]
  __int128 v74; // [rsp+C0h] [rbp-40h]
  __int64 v75; // [rsp+D0h] [rbp-30h]
  __int64 v76; // [rsp+E0h] [rbp-20h]
  __int64 v77; // [rsp+E8h] [rbp-18h]
  struct CPrimitiveColor *v78; // [rsp+F0h] [rbp-10h]
  const struct _D3DCOLORVALUE *v79; // [rsp+F8h] [rbp-8h]
  char *v80; // [rsp+100h] [rbp+0h]
  void (__fastcall ***v81)(_QWORD); // [rsp+108h] [rbp+8h]
  __int64 v82; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall ***v83)(_QWORD, __int64); // [rsp+118h] [rbp+18h]
  __int128 v84; // [rsp+120h] [rbp+20h] BYREF
  __int64 v85; // [rsp+130h] [rbp+30h]
  char v86[96]; // [rsp+140h] [rbp+40h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+A8h]
  int v88; // [rsp+1B0h] [rbp+B0h]
  __int64 v89; // [rsp+1B0h] [rbp+B0h]

  v4 = (void *)*((_QWORD *)this + 273);
  v5 = 0LL;
  v6 = *((_QWORD *)this + 274) - (_QWORD)v4;
  v62 = 0LL;
  v7 = v6 >> 1;
  v9 = 0;
  v82 = 0LL;
  v61 = 0LL;
  if ( !v7 )
    goto LABEL_41;
  v10 = *((_BYTE *)this + 180) >> 7;
  v11 = 0LL;
  v65 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 1), (__m128)*((unsigned int *)this + 2)).m128_u64[0];
  if ( v7 < 0 || !v4 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v12 = *((_DWORD *)this + 544);
  v13 = *(_DWORD *)this;
  *(_QWORD *)v68 = *((_QWORD *)this + 148);
  *(_QWORD *)v71 = *((_QWORD *)this + 24);
  v69 = 8 * v13 + 16;
  v14 = v12;
  v72 = v69;
  *(_QWORD *)&v74 = v7;
  v88 = v13;
  v70 = v12;
  v73 = v12;
  LODWORD(v59) = v12;
  *(_QWORD *)((char *)&v59 + 4) = __PAIR64__(v13, v12);
  HIDWORD(v59) = v7;
  LODWORD(v60) = 0;
  if ( (v12 & 1) != 0 )
  {
    v14 = (v12 & 0xFFFFFFFE) + 2;
    LODWORD(v59) = v14;
    if ( v12 )
      DWORD1(v59) = (v12 & 0xFFFFFFFE) + 2;
  }
  if ( v14 > 0x10000 || (unsigned int)v7 > 0x1FFFE )
  {
    LODWORD(v59) = 0;
    HIDWORD(v59) = 0;
  }
  v66 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)&v59);
  v16 = (__int64 (__fastcall ***)(_QWORD, __int64))v66;
  if ( v66 )
  {
    LOBYTE(v58) = v10;
    CDrawListPrimitive::Initialize(v66, 0, (int)v71, (int)v68, v88, v4, v7, (__int64)&v65, v58);
    v11 = v16;
    v66 = 0LL;
    v9 = 0;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x56u, 0LL);
    v9 = -2147024882;
  }
  v18 = v62;
  v62 = v11;
  if ( v18 )
    std::default_delete<CShape>::operator()(v17, v18);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v9, 0x4CFu, 0LL);
    goto LABEL_48;
  }
  v19 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
  v78 = a3;
  v79 = a4;
  v76 = 0LL;
  v89 = 0LL;
  v77 = 0LL;
  v81 = v19;
  if ( *((_BYTE *)this + 2298) )
    v20 = (char *)this + 2280;
  else
    v20 = 0LL;
  v21 = *((_DWORD *)this + 6);
  LODWORD(v76) = v21;
  v80 = v20;
  v64 = (__int64 *)v20;
  if ( a2 )
  {
    v21 |= 8u;
    LODWORD(v76) = v21;
  }
  if ( *((_BYTE *)this + 2297) )
  {
    v21 &= ~1u;
    *((_BYTE *)this + 2297) = 0;
    LODWORD(v76) = v21;
  }
  if ( !*((_BYTE *)this + 2296) )
  {
    v41 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)v41 || *(_QWORD *)(v41 + 16) )
    {
      if ( *(_BYTE *)(v41 + 32) )
      {
        v42 = CCpuClip::ResolveClip((CCpuClip *)v41, &v67);
        v9 = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x4F3u, 0LL);
          goto LABEL_48;
        }
        v44 = v67;
        v45 = *(__int64 (__fastcall **)(struct CShape *, _QWORD, __int64 *))(*(_QWORD *)v67 + 24LL);
        Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v61);
        v46 = v45(v44, 0LL, &v61);
        v9 = v46;
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x4F4u, 0LL);
          goto LABEL_48;
        }
        v89 = v61;
        v77 = v61;
      }
      else
      {
        v21 &= ~0x10u;
        LODWORD(v76) = v21;
      }
    }
  }
  v22 = v62;
  v23 = 0LL;
  v9 = 0;
  v62 = 0LL;
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v48 = operator new(0x118uLL);
    v63 = v48;
    if ( !v48 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, -2147024882, 0x42u, 0LL);
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    *v48 = 0LL;
    v48[1] = 0LL;
    v48[2] = 0LL;
    v50 = CThreadContext::s_dwTlsIndex;
    v48[3] = 0LL;
    v48[4] = 0LL;
    v48[5] = 0LL;
    v48[6] = 0LL;
    v48[7] = 0LL;
    v48[8] = 0LL;
    v48[9] = 0LL;
    v48[10] = 0LL;
    v48[11] = 0LL;
    v48[12] = 0LL;
    v48[13] = 0LL;
    v48[14] = 0LL;
    v48[15] = 0LL;
    v48[16] = 0LL;
    v48[17] = 0LL;
    v48[18] = 0LL;
    v48[19] = 0LL;
    v48[20] = 0LL;
    v48[21] = 0LL;
    v48[22] = 0LL;
    v48[23] = 0LL;
    v48[24] = 0LL;
    v48[25] = 0LL;
    v48[26] = 0LL;
    v48[27] = 0LL;
    v48[28] = 0LL;
    v48[29] = 0LL;
    v48[30] = 0LL;
    v48[31] = 0LL;
    v48[32] = 0LL;
    v48[33] = 0LL;
    v48[34] = 0LL;
    TlsSetValue(v50, v48);
    Value = v63;
  }
  v25 = Value[19];
  if ( v25 )
  {
    v23 = (char *)*((_QWORD *)Value + 10);
    *((_QWORD *)Value + 10) = *(_QWORD *)v23;
    Value[19] = v25 - 1;
  }
  if ( v23 || (v23 = (char *)DefaultHeap::Alloc(0xC8uLL)) != 0LL )
  {
    *((_QWORD *)v23 + 4) = a3;
    *((_DWORD *)v23 + 6) = 0;
    v63 = 0LL;
    v83 = v22;
    *((_DWORD *)v23 + 2) = 0;
    *((_DWORD *)v23 + 10) = 1065353216;
    *((_DWORD *)v23 + 11) = 1065353216;
    *((_DWORD *)v23 + 12) = 1065353216;
    *((_DWORD *)v23 + 13) = 1065353216;
    v26 = v89;
    *((_QWORD *)v23 + 8) = v23 + 88;
    *((_QWORD *)v23 + 9) = v23 + 88;
    *((_QWORD *)v23 + 10) = v23 + 164;
    *((_DWORD *)v23 + 42) = v21;
    *((_QWORD *)v23 + 22) = v89;
    if ( v89 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 8LL))(v89);
    if ( a4 )
      *(struct _D3DCOLORVALUE *)(v23 + 40) = *(const struct _D3DCOLORVALUE *)&a4->r;
    if ( v64 )
    {
      v51 = *v64;
      *((_DWORD *)v23 + 42) |= 0x400u;
      *((_QWORD *)v23 + 7) = v51;
    }
    *(_QWORD *)v23 = &CHWDrawListEntry::`vftable'{for `CMILRefCountBase'};
    *((_QWORD *)v23 + 2) = &CHWDrawListEntry::`vftable'{for `CBaseDrawListEntry'};
    *((_QWORD *)v23 + 23) = v22;
    *((_QWORD *)v23 + 24) = v19;
    if ( v19 )
      (**v19)(v19);
    ++CHWDrawListEngineMetrics::s_cDrawListEntries;
    _InterlockedIncrement((volatile signed __int32 *)v23 + 2);
    v22 = (__int64 (__fastcall ***)(_QWORD, __int64))v63;
    v5 = (CDrawListEntry *)v23;
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, -2147024882, 0x11u, 0LL);
  }
  if ( v22 )
    std::default_delete<CShape>::operator()(v26, v22);
  if ( v9 < 0 )
  {
LABEL_88:
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v9, 0x4F9u, 0LL);
    goto LABEL_48;
  }
  v27 = (__int64)(*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) >> 3;
  detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    (char *)this + 40,
    1LL);
  v29 = *((_QWORD *)this + 5);
  v30 = (_QWORD *)*((_QWORD *)this + 6);
  *((_QWORD *)&v59 + 1) = 1LL;
  v31 = ((__int64)v30 - v29) >> 3;
  v32 = v31 - v27;
  *(_QWORD *)&v59 = v29 + 8 * v31;
  if ( !(_QWORD)v59 )
    goto LABEL_87;
  v60 = 1LL;
  v33 = v31 - v27;
  if ( v32 > 1 )
    v33 = 1LL;
  v74 = v59;
  v75 = 1LL;
  v34 = 8 * v33;
  v28 = &v30[v34 / 0xFFFFFFFFFFFFFFF8uLL];
  if ( v30 != &v30[v34 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v52 = v74;
    v53 = v75;
    do
    {
      --v30;
      if ( !v52 )
        goto LABEL_87;
      if ( !v53 )
        goto LABEL_87;
      if ( (unsigned __int64)--v53 >= *((_QWORD *)&v74 + 1) )
        goto LABEL_87;
      *(_QWORD *)(v52 + 8 * v53) = *v30;
    }
    while ( v30 != v28 );
  }
  if ( v32 > 1 )
  {
    *(_QWORD *)&v59 = v29;
    *((_QWORD *)&v59 + 1) = v31;
    v54 = v31 < 0;
    if ( !v31 )
    {
LABEL_84:
      if ( !v54 || !v31 )
      {
        v60 = v31;
        v84 = v59;
        v85 = v31;
        std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
          v86,
          v29 + 8 * v27,
          v29 + 8 * (v31 - 1),
          &v84,
          v55,
          Src,
          v57);
        goto LABEL_40;
      }
      goto LABEL_87;
    }
    if ( v29 )
    {
      v54 = v31 < 0;
      goto LABEL_84;
    }
LABEL_87:
    _o__invalid_parameter_noinfo_noreturn(v32, v28);
    __debugbreak();
    goto LABEL_88;
  }
LABEL_40:
  *((_QWORD *)this + 6) += 8LL;
  *(_QWORD *)(v29 + 8 * v27) = v5;
  v5 = 0LL;
LABEL_41:
  v35 = (__int64)(*((_QWORD *)this + 25) - *((_QWORD *)this + 24)) >> 4;
  if ( v35 )
    *((_QWORD *)this + 25) -= 16 * v35;
  v36 = (__int64)(*((_QWORD *)this + 149) - *((_QWORD *)this + 148)) >> 4;
  if ( v36 )
    *((_QWORD *)this + 149) -= 16 * v36;
  v37 = (__int64)(*((_QWORD *)this + 274) - *((_QWORD *)this + 273)) >> 1;
  if ( v37 )
    *((_QWORD *)this + 274) -= 2 * v37;
  *((_DWORD *)this + 544) = 0;
  *((_DWORD *)this + 568) = 0;
LABEL_48:
  v38 = v61;
  if ( v61 )
  {
    v61 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  if ( v5 )
    CDrawListEntry::Release(v5);
  if ( v62 )
    std::default_delete<CShape>::operator()(v38, v62);
  return (unsigned int)v9;
}
