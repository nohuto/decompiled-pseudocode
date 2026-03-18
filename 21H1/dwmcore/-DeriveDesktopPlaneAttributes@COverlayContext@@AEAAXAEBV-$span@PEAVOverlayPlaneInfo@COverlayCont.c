/*
 * XREFs of ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x18008AF48
 * Callers:
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18008ACB4 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801811DC (-TrimCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180076A30 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?CalcDesktopClip@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAVCRegion@@@Z @ 0x18008B108 (-CalcDesktopClip@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008B1D0 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800C64A8 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x18017E554 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x180181028 (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x1801811B8 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 */

void __fastcall COverlayContext::DeriveDesktopPlaneAttributes(COverlayContext *this, __int64 *a2, char a3)
{
  int v5; // r14d
  char v6; // r15
  int v7; // eax
  __int64 (__fastcall ***v8)(_QWORD, struct tagRECT *); // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  enum DXGI_COLOR_SPACE_TYPE v11; // ebx
  __int64 v12; // rax
  unsigned int v13; // eax
  _QWORD *v14; // rdx
  void (__fastcall ***v15)(_QWORD, struct tagRECT *); // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  _BYTE *v18; // rbx
  __int64 v19; // rax
  COverlayContext::OverlayPlaneInfo **v20; // rax
  bool v21; // zf
  _DWORD *v22; // rax
  __int64 v23; // rcx
  _DWORD *v24; // rax
  _DWORD *v25; // rax
  struct tagRECT v26; // [rsp+20h] [rbp-49h] BYREF
  LONG *v27; // [rsp+40h] [rbp-29h] BYREF
  int v28; // [rsp+48h] [rbp-21h] BYREF

  *((_BYTE *)this + 11033) = a3;
  v5 = 1;
  if ( !*a2 )
    goto LABEL_2;
  v16 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, 0LL);
  v17 = *(_QWORD *)this;
  v18 = *(_BYTE **)v16;
  v26 = *(struct tagRECT *)(*(_QWORD *)v16 + 68LL);
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 152LL))(v17);
  if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(&v26, v19)
    && (!v18[177] || v18[181])
    && v18[179] )
  {
    *((_BYTE *)this + 11032) = 0;
    return;
  }
  if ( !*a2
    || (v20 = (COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                                      a2,
                                                      0LL),
        v6 = 1,
        !COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(*v20)) )
  {
LABEL_2:
    v6 = 0;
  }
  *((_BYTE *)this + 11032) = 1;
  if ( !*((_DWORD *)this + 18) || (v21 = !COverlayContext::OverlaysEnabled(this), v7 = 4, !v21) )
    v7 = 0;
  *((_DWORD *)this + 2730) = v7;
  *((_DWORD *)this + 2743) = 1;
  if ( v6 || *a2 <= 0 )
    v5 = 0;
  *((_DWORD *)this + 2744) = v5;
  v8 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))(*(_QWORD *)this
                                                          + 8LL
                                                          + *(int *)(*(_QWORD *)(*(_QWORD *)this + 8LL) + 8LL));
  v9 = (**v8)(v8, &v26);
  v10 = *(_QWORD *)this;
  v11 = *(_DWORD *)(v9 + 8);
  *((_DWORD *)this + 2749) = v11;
  v12 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v10 + 80LL))(v10, &v26);
  v13 = ConvertSDRBoostToSDRWhiteLevel(*(float *)(v12 + 16), v11);
  v14 = *(_QWORD **)this;
  *((_DWORD *)this + 2756) = v13;
  *((_DWORD *)this + 2754) = 2;
  if ( *((_BYTE *)this + 11033) )
  {
    v22 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v14 + 168LL))(v14);
    *(_QWORD *)((char *)this + 10924) = 0LL;
    *((_DWORD *)this + 2733) = v22[2] - *v22;
    v23 = *(_QWORD *)this;
    *((_DWORD *)this + 2734) = v22[3] - v22[1];
    v24 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 152LL))(v23);
    *((_DWORD *)this + 2735) = *v24;
    *((_DWORD *)this + 2736) = v24[1];
    *((_DWORD *)this + 2737) = v24[2];
    *((_DWORD *)this + 2738) = v24[3];
  }
  else
  {
    v15 = (void (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v14 + *(int *)(v14[1] + 12LL) + 8);
    (**v15)(v15, &v26);
    *((_DWORD *)this + 2733) = v26.left;
    *((_DWORD *)this + 2734) = v26.top;
    *(_QWORD *)((char *)this + 10924) = 0LL;
    *(_OWORD *)((char *)this + 10940) = *(_OWORD *)((char *)this + 10924);
  }
  if ( v6 )
  {
    v25 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 152LL))(*(_QWORD *)this);
    *((_DWORD *)this + 2739) = *v25;
    *((_DWORD *)this + 2740) = v25[1];
    *((_DWORD *)this + 2741) = v25[2];
    *((_DWORD *)this + 2742) = v25[3];
  }
  else
  {
    v28 = 0;
    v27 = &v28;
    COverlayContext::CalcDesktopClip(this, a2, &v27);
    v26 = 0LL;
    if ( FastRegion::CRegion::GetBoundingRect(&v27, &v26) )
      *(struct tagRECT *)((char *)this + 10956) = v26;
    else
      *((_BYTE *)this + 11032) = 0;
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v27);
  }
}
