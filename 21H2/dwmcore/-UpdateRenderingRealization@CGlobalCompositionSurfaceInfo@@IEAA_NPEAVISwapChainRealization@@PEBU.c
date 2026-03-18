/*
 * XREFs of ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@@Z @ 0x180069110
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x180068FF4 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 * Callees:
 *     ?EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180016038 (-EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x180069750 (-IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x180069780 (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimiza.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180069EDC (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18008EBAC (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800B8414 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CGlobalCompositionSurfaceInfo::UpdateRenderingRealization(
        CGlobalCompositionSurfaceInfo *this,
        struct ISwapChainRealization *a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        HRGN a4,
        const struct ScrollOptimization *a5)
{
  bool v8; // r15
  char v9; // r14
  char v10; // r12
  bool v11; // r13
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int128 *v18; // rax
  __int64 v19; // rdx
  __int128 v20; // xmm0
  __int64 v21; // rax
  __int64 (__fastcall ***v22)(_QWORD, _BYTE *); // rcx
  __int64 v23; // rax
  char *v24; // rcx
  unsigned int v25; // esi
  __int128 v26; // xmm0
  __int64 v27; // rax
  char *v28; // rcx
  char v29; // dl
  struct ISwapChainRealization *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rsi
  unsigned __int64 v33; // r13
  HRGN v34; // rbx
  char v36; // [rsp+30h] [rbp-D0h]
  bool v37; // [rsp+31h] [rbp-CFh]
  __int64 v38; // [rsp+34h] [rbp-CCh]
  int v39; // [rsp+3Ch] [rbp-C4h]
  HRGN v40; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B0h]
  struct ScrollOptimization *v42; // [rsp+60h] [rbp-A0h]
  __int64 v43; // [rsp+68h] [rbp-98h]
  _OWORD v44[4]; // [rsp+80h] [rbp-80h] BYREF
  char v45; // [rsp+C0h] [rbp-40h]
  char v46; // [rsp+C1h] [rbp-3Fh]
  _OWORD v47[4]; // [rsp+D0h] [rbp-30h] BYREF
  char v48; // [rsp+110h] [rbp+10h]
  char v49; // [rsp+111h] [rbp+11h]
  __int128 v50; // [rsp+120h] [rbp+20h] BYREF
  __int128 v51; // [rsp+130h] [rbp+30h] BYREF
  int v52; // [rsp+140h] [rbp+40h] BYREF
  __int64 v53; // [rsp+144h] [rbp+44h]
  int v54; // [rsp+14Ch] [rbp+4Ch]
  int v55; // [rsp+150h] [rbp+50h] BYREF
  __int64 v56; // [rsp+154h] [rbp+54h]
  int v57; // [rsp+15Ch] [rbp+5Ch]
  _BYTE v58[16]; // [rsp+160h] [rbp+60h] BYREF
  int *v59; // [rsp+170h] [rbp+70h] BYREF
  int v60; // [rsp+178h] [rbp+78h] BYREF

  v40 = a4;
  v42 = a5;
  v37 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( !a3 || (v36 = 1, (*((_DWORD *)a3 + 34) & 0x400) == 0) )
    v36 = 0;
  v12 = *((_BYTE *)this + 80) == 0;
  v60 = 0;
  v59 = &v60;
  if ( !v12 )
  {
    v8 = 1;
    v9 = 1;
    v10 = 1;
    if ( CGlobalCompositionSurfaceInfo::IsSwapChain(this) && a2 && a3 )
      (*(void (__fastcall **)(struct ISwapChainRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*(_QWORD *)a2 + 136LL))(
        a2,
        a3);
    goto LABEL_37;
  }
  if ( !CGlobalCompositionSurfaceInfo::IsSwapChain(this) )
  {
LABEL_37:
    v29 = v36;
    goto LABEL_18;
  }
  v38 = 0LL;
  v39 = 0;
  v41 = 0LL;
  v16 = *((_QWORD *)this + 25);
  v57 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 3);
  v54 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 3);
  v47[0] = _xmm;
  v47[1] = _xmm;
  v47[2] = _xmm;
  v47[3] = _xmm;
  v49 = v49 & 0xC0 | 0x17;
  v44[0] = _xmm;
  v44[1] = _xmm;
  v44[2] = _xmm;
  v44[3] = _xmm;
  v55 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v56 = *(_QWORD *)(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
  v52 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v53 = *(_QWORD *)(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
  v48 = 85;
  v45 = 85;
  v46 = v46 & 0xC0 | 0x17;
  v50 = 0LL;
  v51 = 0LL;
  if ( v16 )
  {
    v17 = v16 + 8 + *(int *)(*(_QWORD *)(v16 + 8) + 16LL);
    (*(void (__fastcall **)(__int64, _OWORD *, int *))(*(_QWORD *)v17 + 8LL))(v17, v47, &v55);
    HIDWORD(v38) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 16LL))(*((_QWORD *)this + 25));
    v18 = (__int128 *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 25) + 24LL))(
                        *((_QWORD *)this + 25),
                        &v50);
    v19 = *((_QWORD *)this + 25);
    v20 = *v18;
    v21 = *(_QWORD *)(v19 + 8);
    v50 = v20;
    v22 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(v19 + 8 + *(int *)(v21 + 12));
    v23 = (**v22)(v22, v58);
    *(_QWORD *)&v20 = *(_QWORD *)v23;
    LODWORD(v23) = *(_DWORD *)(v23 + 8);
    v43 = v20;
    v39 = v23;
    LODWORD(v38) = DWORD1(v20);
  }
  if ( a2 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct ISwapChainRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*(_QWORD *)a2 + 136LL))(
        a2,
        a3);
    v24 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 16LL) + 8;
    (*(void (__fastcall **)(char *, _OWORD *, int *))(*(_QWORD *)v24 + 8LL))(v24, v44, &v52);
    v25 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a2 + 16LL))(a2);
    v26 = *(_OWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, __int128 *))(*(_QWORD *)a2 + 24LL))(
                       a2,
                       &v51);
    v27 = *((_QWORD *)a2 + 1);
    v51 = v26;
    v28 = (char *)a2 + *(int *)(v27 + 12) + 8;
    v41 = *(_QWORD *)(**(__int64 (__fastcall ***)(char *, _BYTE *))v28)(v28, v58);
  }
  else
  {
    v25 = 0;
  }
  if ( (unsigned __int8)operator!=(&v55) || !(unsigned __int8)CMILMatrix::IsEqualTo<0>(v47, v44) )
    v9 = 1;
  v29 = v36;
  if ( v36
    || v38 != __PAIR64__(v25, HIDWORD(v41))
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v50 - *(float *)&v51) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v50 + 1) - *((float *)&v51 + 1)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v50 + 2) - *((float *)&v51 + 2)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v50 + 3) - *((float *)&v51 + 3)) & _xmm) > 0.0000011920929
    || v39 != (_DWORD)v14 )
  {
    v10 = 1;
  }
LABEL_18:
  v30 = (struct ISwapChainRealization *)*((_QWORD *)this + 25);
  if ( v30 != a2 )
  {
    v31 = *((_QWORD *)this + 12);
    if ( v31 )
    {
      *(_BYTE *)(v31 + 152) = 0;
      v30 = (struct ISwapChainRealization *)*((_QWORD *)this + 25);
    }
    *((_QWORD *)this + 25) = a2;
    v12 = v30 == 0LL;
    v30 = a2;
    v8 = 1;
    if ( !v12 != (a2 != 0LL) )
      v9 = 1;
  }
  if ( v29 && CGlobalCompositionSurfaceInfo::IsSwapChain(this) )
  {
    CGlobalCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData((CGlobalCompositionSurfaceInfo *)((char *)this + 88));
    v30 = (struct ISwapChainRealization *)*((_QWORD *)this + 25);
  }
  if ( v30 )
  {
    v11 = CGlobalCompositionSurfaceInfo::DirtyRenderingRealization(this, v8, v40, v42, (struct CRegion *)&v59);
    v37 = v11;
  }
  else
  {
    v8 = 1;
    v9 = 1;
    v10 = 1;
  }
  if ( !*((_BYTE *)this + 80) )
  {
    *((_BYTE *)this + 80) = 1;
    if ( v8 || v9 || v10 || v11 )
    {
      v32 = (__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 3;
      if ( v32 )
      {
        v33 = (unsigned __int64)&v59 & -(__int64)v11;
        do
        {
          v34 = *(HRGN *)(*((_QWORD *)this + 6) + 8 * v32 - 8);
          v40 = v34;
          if ( v34 )
            (*(void (__fastcall **)(HRGN))(*(_QWORD *)v34 + 8LL))(v34);
          LOBYTE(v15) = v10;
          LOBYTE(v14) = v9;
          LOBYTE(v13) = v8;
          (*(void (__fastcall **)(HRGN, __int64, __int64, __int64, unsigned __int64))(*(_QWORD *)v34 + 24LL))(
            v34,
            v13,
            v14,
            v15,
            v33);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v40);
          --v32;
        }
        while ( v32 );
      }
    }
    *((_QWORD *)this + 19) = *((_QWORD *)this + 18);
    *((_BYTE *)this + 80) = 0;
    if ( v37 )
      CRegion::GetRectangles(&v59);
  }
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v59);
  return v8;
}
