/*
 * XREFs of ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@@Z @ 0x180044C44
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180044B7C (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180021164 (-EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180044474 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1800451D0 (-IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x180045200 (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimiza.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18007905C (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800C5828 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
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
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int128 *v27; // rax
  __int64 v28; // rdx
  __int128 v29; // xmm0
  __int64 v30; // rax
  __int64 (__fastcall ***v31)(_QWORD, _BYTE *); // rcx
  __int64 v32; // rax
  char *v33; // rcx
  unsigned int v34; // esi
  __int128 v35; // xmm0
  __int64 v36; // rax
  char *v37; // rcx
  __int64 v38; // rax
  char v39; // [rsp+30h] [rbp-D0h]
  __int64 v40; // [rsp+34h] [rbp-CCh]
  int v41; // [rsp+3Ch] [rbp-C4h]
  __int64 v42; // [rsp+48h] [rbp-B8h]
  _OWORD v44[4]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v45; // [rsp+C0h] [rbp-40h]
  _OWORD v46[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v47; // [rsp+110h] [rbp+10h]
  __int128 v48; // [rsp+120h] [rbp+20h] BYREF
  __int128 v49; // [rsp+130h] [rbp+30h] BYREF
  __int128 v50; // [rsp+140h] [rbp+40h] BYREF
  __int128 v51; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v52[16]; // [rsp+160h] [rbp+60h] BYREF
  int *v53; // [rsp+170h] [rbp+70h] BYREF
  int v54; // [rsp+178h] [rbp+78h] BYREF

  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( !a3 || (v39 = 1, (*((_DWORD *)a3 + 29) & 0x400) == 0) )
    v39 = 0;
  v12 = *((_BYTE *)this + 80) == 0;
  v54 = 0;
  v53 = &v54;
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
    v16 = v39;
    goto LABEL_7;
  }
  v24 = 0LL;
  v40 = 0LL;
  v41 = 0;
  HIDWORD(v42) = 0;
  v25 = *((_QWORD *)this + 23);
  v51 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v50 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v46[0] = _xmm;
  v46[1] = _xmm;
  v46[2] = _xmm;
  v46[3] = _xmm;
  v44[0] = _xmm;
  v44[1] = _xmm;
  v44[2] = _xmm;
  v44[3] = _xmm;
  v47 = 32085;
  v45 = 32085;
  v48 = 0LL;
  v49 = 0LL;
  if ( v25 )
  {
    v26 = v25 + 8 + *(int *)(*(_QWORD *)(v25 + 8) + 16LL);
    (*(void (__fastcall **)(__int64, _OWORD *, __int128 *))(*(_QWORD *)v26 + 8LL))(v26, v46, &v51);
    HIDWORD(v40) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 23) + 8LL))(*((_QWORD *)this + 23));
    v27 = (__int128 *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 23) + 16LL))(
                        *((_QWORD *)this + 23),
                        &v48);
    v28 = *((_QWORD *)this + 23);
    v29 = *v27;
    v30 = *(_QWORD *)(v28 + 8);
    v48 = v29;
    v31 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(v28 + 8 + *(int *)(v30 + 12));
    v32 = (**v31)(v31, v52);
    v24 = 0LL;
    v41 = *(_DWORD *)(v32 + 8);
    LODWORD(v40) = HIDWORD(*(_QWORD *)v32);
  }
  if ( a2 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct ISwapChainRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*(_QWORD *)a2 + 120LL))(
        a2,
        a3);
    v33 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 16LL) + 8;
    (*(void (__fastcall **)(char *, _OWORD *, __int128 *))(*(_QWORD *)v33 + 8LL))(v33, v44, &v50);
    v34 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a2 + 8LL))(a2);
    v35 = *(_OWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, __int128 *))(*(_QWORD *)a2 + 16LL))(
                       a2,
                       &v49);
    v36 = *((_QWORD *)a2 + 1);
    v49 = v35;
    v37 = (char *)a2 + *(int *)(v36 + 12) + 8;
    v38 = (**(__int64 (__fastcall ***)(char *, _BYTE *))v37)(v37, v52);
    v24 = *(unsigned int *)(v38 + 8);
    v42 = *(_QWORD *)v38;
  }
  else
  {
    v34 = 0;
  }
  if ( (unsigned __int8)operator!=(&v51, &v50, v24) || !(unsigned __int8)CMILMatrix::IsEqualTo<0>(v46, v44) )
    v9 = 1;
  v16 = v39;
  if ( v39
    || v40 != __PAIR64__(v34, HIDWORD(v42))
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v48 - *(float *)&v49) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v48 + 1) - *((float *)&v49 + 1)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v48 + 2) - *((float *)&v49 + 2)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v48 + 3) - *((float *)&v49 + 3)) & _xmm) > 0.0000011920929
    || v41 != (_DWORD)v14 )
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
    v11 = CGlobalCompositionSurfaceInfo::DirtyRenderingRealization(this, v8, a4, a5, (struct CRegion *)&v53);
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
        v19 = (unsigned __int64)&v53 & -(__int64)v11;
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
  FastRegion::CRegion::FreeMemory((void **)&v53);
  return v8;
}
