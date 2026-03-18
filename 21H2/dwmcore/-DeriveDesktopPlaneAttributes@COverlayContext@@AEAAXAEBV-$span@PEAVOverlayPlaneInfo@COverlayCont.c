/*
 * XREFs of ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x18003E884
 * Callers:
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18003E4E4 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801B84D8 (-TrimCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ?CalcDesktopClip@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAVCRegion@@@Z @ 0x18003EAD4 (-CalcDesktopClip@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18003EC38 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x18003ECAC (-CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayConte.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180069C74 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x1800B9CC8 (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall COverlayContext::DeriveDesktopPlaneAttributes(COverlayContext *this, _QWORD *a2, char a3)
{
  bool v5; // zf
  int v6; // eax
  __int64 (__fastcall ***v7)(_QWORD, struct tagRECT *); // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  enum DXGI_COLOR_SPACE_TYPE v10; // ebx
  __int64 v11; // rax
  unsigned int v12; // eax
  _QWORD *v13; // rdx
  _DWORD *v14; // rax
  void (__fastcall ***v15)(_QWORD, struct tagRECT *); // rcx
  struct tagRECT v16; // xmm0
  struct tagRECT v17; // [rsp+20h] [rbp-39h] BYREF
  int *v18; // [rsp+40h] [rbp-19h] BYREF
  int v19; // [rsp+48h] [rbp-11h] BYREF

  *((_BYTE *)this + 11025) = a3;
  if ( (unsigned __int8)COverlayContext::CanFastDisableDesktopPlane() )
  {
    *((_BYTE *)this + 11024) = 0;
  }
  else
  {
    *((_BYTE *)this + 11024) = 1;
    if ( !*((_DWORD *)this + 17) || (v5 = !COverlayContext::OverlaysEnabled(this), v6 = 4, !v5) )
      v6 = 0;
    *((_DWORD *)this + 2728) = v6;
    *((_DWORD *)this + 2741) = 1;
    *((_DWORD *)this + 2742) = *a2 != 0LL;
    v7 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))(*(_QWORD *)this
                                                            + 8LL
                                                            + *(int *)(*(_QWORD *)(*(_QWORD *)this + 8LL) + 8LL));
    v8 = (**v7)(v7, &v17);
    v9 = *(_QWORD *)this;
    v10 = *(_DWORD *)(v8 + 8);
    *((_DWORD *)this + 2747) = v10;
    v11 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v9 + 96LL))(v9, &v17);
    v12 = ConvertSDRBoostToSDRWhiteLevel(*(float *)(v11 + 16), v10);
    v13 = *(_QWORD **)this;
    *((_DWORD *)this + 2754) = v12;
    *((_DWORD *)this + 2752) = 2;
    if ( *((_BYTE *)this + 11025) )
    {
      v14 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v13 + 168LL))(v13);
      *(_QWORD *)((char *)this + 10916) = 0LL;
      *((_DWORD *)this + 2731) = v14[9];
      *((_DWORD *)this + 2732) = v14[10];
      *((_DWORD *)this + 2733) = v14[5];
      *((_DWORD *)this + 2734) = v14[6];
      *((_DWORD *)this + 2735) = v14[7];
      *((_DWORD *)this + 2736) = v14[8];
    }
    else
    {
      v15 = (void (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v13 + *(int *)(v13[1] + 12LL) + 8);
      (**v15)(v15, &v17);
      *((_DWORD *)this + 2731) = v17.left;
      *((_DWORD *)this + 2732) = v17.top;
      *(_QWORD *)((char *)this + 10916) = 0LL;
      *(_OWORD *)((char *)this + 10932) = *(_OWORD *)((char *)this + 10916);
    }
    v19 = 0;
    v18 = &v19;
    COverlayContext::CalcDesktopClip(this, a2, &v18);
    v17 = 0LL;
    if ( FastRegion::CRegion::GetBoundingRect((FastRegion::CRegion *)&v18, &v17) )
    {
      if ( *((_BYTE *)this + 11025) || !*((_BYTE *)this + 11299) )
        v16 = v17;
      else
        v16 = *(struct tagRECT *)((char *)this + 10932);
      *(struct tagRECT *)((char *)this + 10948) = v16;
    }
    else
    {
      *((_BYTE *)this + 11024) = 0;
    }
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v18);
  }
}
