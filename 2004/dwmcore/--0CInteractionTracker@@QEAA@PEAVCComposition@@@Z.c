/*
 * XREFs of ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x1801C8A58
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@1@AEBV?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@1@@Z @ 0x18002A4A4 (--0-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelContext@@U-$hash@.c)
 *     ??0?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18002C898 (--0-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180041AC4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1801AC884 (-RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x1801CEA24 (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 *     ?Initialize@InteractionSourceManager@@QEAAXPEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x180212750 (-Initialize@InteractionSourceManager@@QEAAXPEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 */

CInteractionTracker *__fastcall CInteractionTracker::CInteractionTracker(
        CInteractionTracker *this,
        struct CComposition *a2)
{
  int v3; // xmm0_4
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 41) = 1014350479;
  *(_QWORD *)this = &CInteractionTracker::`vftable';
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 32) = 1065353216;
  *((_DWORD *)this + 33) = 1065353216;
  *((_DWORD *)this + 34) = 1065353216;
  v6 = 0;
  std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>(
    (__int64)this + 208,
    &v6);
  std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>((_QWORD *)this + 34);
  *((_BYTE *)this + 312) = 0;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  `vector constructor iterator'(
    (char *)this + 360,
    8LL,
    2LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)this + 376,
    8LL,
    4LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_DWORD *)this + 124) = 0;
  v3 = *((_DWORD *)this + 32);
  *((_QWORD *)this + 79) = 0LL;
  v4 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 129) = v3;
  *((_DWORD *)this + 130) = v3;
  *((_DWORD *)this + 134) = 1117126656;
  *((_DWORD *)this + 135) = 1130430464;
  *((_DWORD *)this + 136) = 1104674816;
  *((_DWORD *)this + 137) = 1123680256;
  *((_DWORD *)this + 138) = 1102053376;
  *((_DWORD *)this + 139) = 1106247680;
  *((_DWORD *)this + 140) = 1177280512;
  *((_DWORD *)this + 141) = 1028443341;
  *((_DWORD *)this + 142) = 1084227584;
  CExpressionManager::RegisterInteractionTrackerNotification(*(CExpressionManager **)(v4 + 272), this);
  *((_DWORD *)this + 27) = 1028443341;
  *((_DWORD *)this + 28) = 1028443341;
  *((float *)this + 30) = (float)CCommonRegistryData::MousewheelAnimationDurationMs / 1000.0;
  *((float *)this + 31) = (float)CCommonRegistryData::MousewheelAnimationDurationMs / 1000.0;
  CInteractionTracker::UpdatePositionRoundingSuggestion(this);
  InteractionSourceManager::Initialize(
    (CInteractionTracker *)((char *)this + 192),
    *((struct CComposition **)this + 2),
    this);
  return this;
}
