/*
 * XREFs of ?ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ @ 0x18017A61C
 * Callers:
 *     ?OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x18017B42C (-OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@EdgeGestureMetrics@@SAXXZ @ 0x18017A244 (-Initialize@EdgeGestureMetrics@@SAXXZ.c)
 *     ?GetCandidateGestureParameters@EdgyImpl@@QEBA_NPEAIPEAW4OrientationBias@@@Z @ 0x18017BD4C (-GetCandidateGestureParameters@EdgyImpl@@QEBA_NPEAIPEAW4OrientationBias@@@Z.c)
 */

__int64 __fastcall EdgyProcessorTarget::ConfigureRecognizer(EdgyProcessorTarget *this)
{
  int v2; // edi
  __int64 v3; // rdx
  struct RegistryWatcher **v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  unsigned int v12; // [rsp+40h] [rbp+20h] BYREF
  int v13; // [rsp+44h] [rbp+24h]
  unsigned int v14; // [rsp+48h] [rbp+28h] BYREF

  v12 = 0;
  v14 = 0;
  if ( *((_DWORD *)this + 8)
    || !EdgyImpl::GetCandidateGestureParameters(
          (EdgyImpl *)(*((_QWORD *)this + 15) + 80LL),
          &v12,
          (enum OrientationBias *)&v14) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), 0LL);
    if ( v2 < 0 )
    {
      v3 = 612LL;
      goto LABEL_5;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19), 0LL);
    if ( v9 < 0 )
    {
      v10 = 613LL;
      goto LABEL_16;
    }
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), v12);
    if ( v2 < 0 )
    {
      v3 = 581LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19), v14);
    if ( v2 < 0 )
    {
      v3 = 582LL;
      goto LABEL_5;
    }
    v5 = EdgeGestureMetrics::s_edgeGestureMetrics;
    v13 = 0;
    v12 = 9;
    if ( !EdgeGestureMetrics::s_edgeGestureMetrics )
    {
      EdgeGestureMetrics::Initialize();
      v5 = EdgeGestureMetrics::s_edgeGestureMetrics;
    }
    v6 = *((_QWORD *)this + 19);
    LOWORD(v13) = *((_WORD *)v5 + 8);
    v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v6 + 112LL))(v6, &v12);
    if ( v2 < 0 )
    {
      v3 = 592LL;
      goto LABEL_5;
    }
    v7 = *((_QWORD *)this + 19);
    v12 = 10;
    LOWORD(v13) = 0;
    v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 112LL))(v7, &v12);
    if ( v2 < 0 )
    {
      v3 = 600LL;
      goto LABEL_5;
    }
    v8 = *((_QWORD *)this + 19);
    LOWORD(v13) = Edge::s_gestureDistance;
    v12 = 13;
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v8 + 112LL))(v8, &v12);
    if ( v9 < 0 )
    {
      v10 = 608LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  return 0LL;
}
