/*
 * XREFs of ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x18009B9A0
 * Callers:
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x18009B608 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18003C5B0 (-clear_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInf.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BBE68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800BDEAC (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180152344 (McTemplateU0q_EventWriteTransfer.c)
 */

__int64 __fastcall COverlayContext::BeginOverlayCandidateCollection(COverlayContext *this)
{
  __int64 v1; // rdx
  __int64 *v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax
  bool v7; // al
  int v8; // r9d
  int v9; // r10d
  int v10; // r11d
  int v11; // eax
  __int64 v12; // rcx
  _DWORD *v14; // rdx

  v1 = *((_QWORD *)this + 13);
  v3 = (__int64 *)((char *)this + 96);
  v4 = (__int64)((unsigned __int128)((v1 - *v3) * (__int128)0x4924924924924925LL) >> 64) >> 6;
  v5 = (v4 >> 63) + v4;
  if ( v5 )
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear_region(
      v3,
      0LL,
      v5);
  v7 = 0;
  if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 192LL))(*(_QWORD *)this) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v6) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 144LL))(*(_QWORD *)this) )
        v7 = 1;
    }
  }
  *((_BYTE *)this + 11422) = v7;
  v8 = dword_180348360;
  v9 = TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::sc_rcEmpty;
  v10 = dword_180348364;
  v11 = dword_18034835C;
  if ( TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::sc_rcEmpty >= dword_180348360
    || dword_18034835C >= dword_180348364 )
  {
    **((_DWORD **)this + 1413) = 0;
  }
  else
  {
    v14 = (_DWORD *)*((_QWORD *)this + 1413);
    *v14 = 2;
    v14[7] = v9;
    v14[3] = v11;
    v14[8] = v8;
    v14[4] = 16;
    v14[1] = v9;
    v14[2] = v8;
    v14[6] = 16;
    v14[5] = v10;
  }
  *((_DWORD *)this + 2850) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 11376, 16LL);
  *((_BYTE *)this + 11433) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0q_EventWriteTransfer(
      v12,
      &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Start,
      *((unsigned __int8 *)this + 11422));
  return 0LL;
}
