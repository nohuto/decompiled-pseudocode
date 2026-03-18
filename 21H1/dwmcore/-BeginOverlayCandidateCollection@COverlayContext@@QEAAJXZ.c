/*
 * XREFs of ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x18006B868
 * Callers:
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x180069B08 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 * Callees:
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18006B98C (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B5618 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7A7C (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180155DC4 (McTemplateU0q_EventWriteTransfer.c)
 */

__int64 __fastcall COverlayContext::BeginOverlayCandidateCollection(COverlayContext *this)
{
  __int64 v2; // rax
  bool v3; // al
  int v4; // r9d
  int v5; // r10d
  int v6; // r11d
  int v7; // eax
  __int64 v8; // rcx
  _DWORD *v10; // rdx

  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 96);
  v3 = 0;
  if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 192LL))(*(_QWORD *)this) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v2) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 144LL))(*(_QWORD *)this) )
        v3 = 1;
    }
  }
  *((_BYTE *)this + 11421) = v3;
  v4 = dword_18034D3F0;
  v5 = TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::sc_rcEmpty;
  v6 = dword_18034D3F4;
  v7 = dword_18034D3EC;
  if ( TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::sc_rcEmpty >= dword_18034D3F0
    || dword_18034D3EC >= dword_18034D3F4 )
  {
    **((_DWORD **)this + 1413) = 0;
  }
  else
  {
    v10 = (_DWORD *)*((_QWORD *)this + 1413);
    *v10 = 2;
    v10[7] = v5;
    v10[3] = v7;
    v10[8] = v4;
    v10[4] = 16;
    v10[1] = v5;
    v10[2] = v4;
    v10[6] = 16;
    v10[5] = v6;
  }
  *((_DWORD *)this + 2850) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 11376, 16LL);
  *((_BYTE *)this + 11432) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0q_EventWriteTransfer(v8, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Start, *((unsigned __int8 *)this + 11421));
  return 0LL;
}
