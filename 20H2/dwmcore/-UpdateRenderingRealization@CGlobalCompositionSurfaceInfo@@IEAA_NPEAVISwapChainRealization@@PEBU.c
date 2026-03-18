/*
 * XREFs of ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@@Z @ 0x1800A7654
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800A758C (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180020C34 (-EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x180097EF8 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800A5E54 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1800A7BE0 (-IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x1800A7C10 (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimiza.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800C5500 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
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
  char v16; // dl
  struct ISwapChainRealization *v17; // rsi
  __int64 v18; // rsi
  unsigned __int64 v19; // r13
  __int64 v20; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int128 *v26; // rax
  __int64 v27; // rdx
  __int128 v28; // xmm0
  __int64 v29; // rax
  __int64 (__fastcall ***v30)(_QWORD, _BYTE *); // rcx
  __int64 v31; // rax
  char *v32; // rcx
  unsigned int v33; // esi
  __int128 v34; // xmm0
  __int64 v35; // rax
  char *v36; // rcx
  char v37; // [rsp+30h] [rbp-D0h]
  __int64 v38; // [rsp+34h] [rbp-CCh]
  int v39; // [rsp+3Ch] [rbp-C4h]
  __int64 v40; // [rsp+48h] [rbp-B8h]
  _OWORD v42[4]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v43; // [rsp+C0h] [rbp-40h]
  _OWORD v44[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v45; // [rsp+110h] [rbp+10h]
  __int128 v46; // [rsp+120h] [rbp+20h] BYREF
  __int128 v47; // [rsp+130h] [rbp+30h] BYREF
  __int128 v48; // [rsp+140h] [rbp+40h] BYREF
  __int128 v49; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v50[16]; // [rsp+160h] [rbp+60h] BYREF
  int *v51; // [rsp+170h] [rbp+70h] BYREF
  int v52; // [rsp+178h] [rbp+78h] BYREF

  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( !a3 || (v37 = 1, (*((_DWORD *)a3 + 29) & 0x400) == 0) )
    v37 = 0;
  v12 = *((_BYTE *)this + 80) == 0;
  v52 = 0;
  v51 = &v52;
  if ( !v12 )
  {
    v8 = 1;
    v9 = 1;
    v10 = 1;
    if ( CGlobalCompositionSurfaceInfo::IsSwapChain(this) && a2 && a3 )
      (*(void (__fastcall **)(struct ISwapChainRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*(_QWORD *)a2 + 120LL))(
        a2,
        a3);
    goto LABEL_6;
  }
  if ( !CGlobalCompositionSurfaceInfo::IsSwapChain(this) )
  {
LABEL_6:
    v16 = v37;
    goto LABEL_7;
  }
  v38 = 0LL;
  v39 = 0;
  HIDWORD(v40) = 0;
  v24 = *((_QWORD *)this + 23);
  v49 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v48 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v44[0] = _xmm;
  v44[1] = _xmm;
  v44[2] = _xmm;
  v44[3] = _xmm;
  v42[0] = _xmm;
  v42[1] = _xmm;
  v42[2] = _xmm;
  v42[3] = _xmm;
  v45 = 32085;
  v43 = 32085;
  v46 = 0LL;
  v47 = 0LL;
  if ( v24 )
  {
    v25 = v24 + 8 + *(int *)(*(_QWORD *)(v24 + 8) + 16LL);
    (*(void (__fastcall **)(__int64, _OWORD *, __int128 *))(*(_QWORD *)v25 + 8LL))(v25, v44, &v49);
    HIDWORD(v38) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 23) + 8LL))(*((_QWORD *)this + 23));
    v26 = (__int128 *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 23) + 16LL))(
                        *((_QWORD *)this + 23),
                        &v46);
    v27 = *((_QWORD *)this + 23);
    v28 = *v26;
    v29 = *(_QWORD *)(v27 + 8);
    v46 = v28;
    v30 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(v27 + 8 + *(int *)(v29 + 12));
    v31 = (**v30)(v30, v50);
    v39 = *(_DWORD *)(v31 + 8);
    LODWORD(v38) = HIDWORD(*(_QWORD *)v31);
  }
  if ( a2 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct ISwapChainRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*(_QWORD *)a2 + 120LL))(
        a2,
        a3);
    v32 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 16LL) + 8;
    (*(void (__fastcall **)(char *, _OWORD *, __int128 *))(*(_QWORD *)v32 + 8LL))(v32, v42, &v48);
    v33 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a2 + 8LL))(a2);
    v34 = *(_OWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, __int128 *))(*(_QWORD *)a2 + 16LL))(
                       a2,
                       &v47);
    v35 = *((_QWORD *)a2 + 1);
    v47 = v34;
    v36 = (char *)a2 + *(int *)(v35 + 12) + 8;
    v40 = *(_QWORD *)(**(__int64 (__fastcall ***)(char *, _BYTE *))v36)(v36, v50);
  }
  else
  {
    v33 = 0;
  }
  if ( (unsigned __int8)operator!=(&v49, &v48) || !CMILMatrix::IsEqualTo<0>((float *)v44, (float *)v42) )
    v9 = 1;
  v16 = v37;
  if ( v37
    || v38 != __PAIR64__(v33, HIDWORD(v40))
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v46 - *(float *)&v47) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v46 + 1) - *((float *)&v47 + 1)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v46 + 2) - *((float *)&v47 + 2)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v46 + 3) - *((float *)&v47 + 3)) & _xmm) > 0.0000011920929
    || v39 != (_DWORD)v14 )
  {
    v10 = 1;
  }
LABEL_7:
  v17 = (struct ISwapChainRealization *)*((_QWORD *)this + 23);
  if ( v17 != a2 )
  {
    v23 = *((_QWORD *)this + 15);
    if ( v23 )
    {
      *(_BYTE *)(v23 + 152) = 0;
      v17 = (struct ISwapChainRealization *)*((_QWORD *)this + 23);
    }
    *((_QWORD *)this + 23) = a2;
    v12 = v17 == 0LL;
    v17 = a2;
    v8 = 1;
    if ( !v12 != (a2 != 0LL) )
      v9 = 1;
  }
  if ( v16 && CGlobalCompositionSurfaceInfo::IsSwapChain(this) )
  {
    CGlobalCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData((CGlobalCompositionSurfaceInfo *)((char *)this + 112));
    v17 = (struct ISwapChainRealization *)*((_QWORD *)this + 23);
  }
  if ( v17 )
  {
    v11 = CGlobalCompositionSurfaceInfo::DirtyRenderingRealization(this, v8, a4, a5, (struct CRegion *)&v51);
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
      v18 = (__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 3;
      if ( v18 )
      {
        v19 = (unsigned __int64)&v51 & -(__int64)v11;
        do
        {
          v20 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v18 - 8);
          if ( v20 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 8LL))(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v18 - 8));
          LOBYTE(v15) = v10;
          LOBYTE(v14) = v9;
          LOBYTE(v13) = v8;
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64, unsigned __int64))(*(_QWORD *)v20 + 24LL))(
            v20,
            v13,
            v14,
            v15,
            v19);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          --v18;
        }
        while ( v18 );
      }
    }
    *((_BYTE *)this + 80) = 0;
  }
  if ( v8 )
  {
    v22 = *((_QWORD *)this + 16);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 24LL))(v22);
  }
  FastRegion::CRegion::FreeMemory((void **)&v51);
  return v8;
}
