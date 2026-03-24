/*
 * XREFs of ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x1800301A4
 * Callers:
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18002FF10 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18017CE5C (-TrimCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ?CalcDesktopClip@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAVCRegion@@@Z @ 0x1800304B4 (-CalcDesktopClip@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18003057C (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009B114 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18009D204 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800D19A8 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x18017A1D4 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x18017CCA8 (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18017CE38 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 */

void __fastcall COverlayContext::DeriveDesktopPlaneAttributes(COverlayContext *this, __int64 *a2, char a3)
{
  int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rcx
  _BYTE *v8; // rbx
  __int64 v9; // rax
  COverlayContext::OverlayPlaneInfo **v10; // rax
  char v11; // r15
  bool v12; // zf
  int v13; // eax
  __int64 (__fastcall ***v14)(_QWORD, struct tagRECT *); // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  enum DXGI_COLOR_SPACE_TYPE v17; // ebx
  __int64 v18; // rax
  unsigned int v19; // eax
  _QWORD *v20; // rdx
  _DWORD *v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // rax
  void (__fastcall ***v24)(_QWORD, struct tagRECT *); // rcx
  struct tagRECT v25; // xmm0
  _DWORD *v26; // rax
  struct tagRECT v27; // [rsp+20h] [rbp-49h] BYREF
  int *v28; // [rsp+40h] [rbp-29h] BYREF
  int v29; // [rsp+48h] [rbp-21h] BYREF

  *((_BYTE *)this + 11033) = a3;
  v5 = 1;
  if ( !*a2 )
    goto LABEL_9;
  v6 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, 0LL);
  v7 = *(_QWORD *)this;
  v8 = *(_BYTE **)v6;
  v27 = *(struct tagRECT *)(*(_QWORD *)v6 + 68LL);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 152LL))(v7);
  if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(&v27, v9)
    && (!v8[177] || v8[181])
    && v8[179] )
  {
    *((_BYTE *)this + 11032) = 0;
    return;
  }
  if ( !*a2
    || (v10 = (COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                                      a2,
                                                      0LL),
        v11 = 1,
        !COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(*v10)) )
  {
LABEL_9:
    v11 = 0;
  }
  *((_BYTE *)this + 11032) = 1;
  if ( !*((_DWORD *)this + 18) || (v12 = !COverlayContext::OverlaysEnabled(this), v13 = 4, !v12) )
    v13 = 0;
  *((_DWORD *)this + 2730) = v13;
  *((_DWORD *)this + 2743) = 1;
  if ( v11 || *a2 <= 0 )
    v5 = 0;
  *((_DWORD *)this + 2744) = v5;
  v14 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))(*(_QWORD *)this
                                                           + 8LL
                                                           + *(int *)(*(_QWORD *)(*(_QWORD *)this + 8LL) + 8LL));
  v15 = (**v14)(v14, &v27);
  v16 = *(_QWORD *)this;
  v17 = *(_DWORD *)(v15 + 8);
  *((_DWORD *)this + 2749) = v17;
  v18 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v16 + 80LL))(v16, &v27);
  v19 = ConvertSDRBoostToSDRWhiteLevel(*(float *)(v18 + 16), v17);
  v20 = *(_QWORD **)this;
  *((_DWORD *)this + 2756) = v19;
  *((_DWORD *)this + 2754) = 2;
  if ( *((_BYTE *)this + 11033) )
  {
    v21 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v20 + 168LL))(v20);
    *(_QWORD *)((char *)this + 10924) = 0LL;
    *((_DWORD *)this + 2733) = v21[2] - *v21;
    v22 = *(_QWORD *)this;
    *((_DWORD *)this + 2734) = v21[3] - v21[1];
    v23 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 152LL))(v22);
    *((_DWORD *)this + 2735) = *v23;
    *((_DWORD *)this + 2736) = v23[1];
    *((_DWORD *)this + 2737) = v23[2];
    *((_DWORD *)this + 2738) = v23[3];
  }
  else
  {
    v24 = (void (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v20 + *(int *)(v20[1] + 12LL) + 8);
    (**v24)(v24, &v27);
    *((_DWORD *)this + 2733) = v27.left;
    *((_DWORD *)this + 2734) = v27.top;
    *(_QWORD *)((char *)this + 10924) = 0LL;
    *(_OWORD *)((char *)this + 10940) = *(_OWORD *)((char *)this + 10924);
  }
  if ( v11 )
  {
    v26 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 152LL))(*(_QWORD *)this);
    *((_DWORD *)this + 2739) = *v26;
    *((_DWORD *)this + 2740) = v26[1];
    *((_DWORD *)this + 2741) = v26[2];
    *((_DWORD *)this + 2742) = v26[3];
  }
  else
  {
    v29 = 0;
    v28 = &v29;
    COverlayContext::CalcDesktopClip(this, a2, &v28);
    v27 = 0LL;
    if ( FastRegion::CRegion::GetBoundingRect((FastRegion::CRegion *)&v28, &v27) )
    {
      if ( *((_BYTE *)this + 11033) || !*((_BYTE *)this + 11419) )
        v25 = v27;
      else
        v25 = *(struct tagRECT *)((char *)this + 10940);
      *(struct tagRECT *)((char *)this + 10956) = v25;
    }
    else
    {
      *((_BYTE *)this + 11032) = 0;
    }
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v28);
  }
}
