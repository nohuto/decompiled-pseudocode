/*
 * XREFs of ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x180180AC4
 * Callers:
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18008ACB4 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x1801804D4 (-FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV-$span@PEAVOverlayPlaneInfo@COv.c)
 * Callees:
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180047950 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008BE78 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?IsDXGIColorSpaceStudio@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801808B8 (-IsDXGIColorSpaceStudio@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x1801811B8 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 */

char __fastcall COverlayContext::IsHigherProprity(
        const struct COverlayContext::OverlayPlaneInfo *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v4; // bl
  char v5; // al
  char v6; // al
  char v7; // r9
  char v8; // dl
  bool v9; // zf
  char v10; // al
  char v12; // r8
  char v13; // al
  int v14; // ecx
  char v15; // r8
  __int64 v16; // rax
  __int64 (__fastcall ***v17)(_QWORD, _BYTE *); // rcx
  int *v18; // rax
  unsigned int ColorChannelDepth; // ebx
  __int64 v20; // rax
  __int64 (__fastcall ***v21)(_QWORD, _BYTE *); // rcx
  int *v22; // rax
  unsigned int v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // ecx
  int v27; // edx
  _BYTE v28[16]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 128LL))(*((_QWORD *)this + 2));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 128LL))(*((_QWORD *)a2 + 2));
  if ( v4 )
  {
    if ( !v5 )
      return 1;
  }
  else if ( v5 )
  {
    return 0;
  }
  if ( COverlayContext::s_bXbox )
  {
    IsDXGIColorSpaceRec2020(*((_DWORD *)this + 27));
    v6 = IsDXGIColorSpaceRec2020(*((_DWORD *)a2 + 27));
    v9 = v12 == 0;
  }
  else
  {
    COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(this);
    v6 = COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(a2);
    v9 = v8 == 0;
  }
  if ( v9 )
  {
    if ( v6 )
      return 0;
  }
  else if ( !v6 )
  {
    return 1;
  }
  v10 = *((_BYTE *)a2 + 176);
  if ( *((_BYTE *)this + 176) )
  {
    if ( !v10 )
      return 1;
  }
  else if ( v10 )
  {
    return 0;
  }
  if ( !v7 )
    goto LABEL_27;
  IsDXGIColorSpaceStudio(*((_DWORD *)this + 27));
  v13 = IsDXGIColorSpaceStudio(*((_DWORD *)a2 + 27));
  if ( v15 )
  {
    if ( !v13 )
      return 1;
  }
  else if ( v13 )
  {
    return 0;
  }
  if ( *((_DWORD *)this + 27) )
  {
    if ( !v14 )
      return 1;
  }
  else if ( v14 )
  {
    return 0;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
  v17 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(int *)(*(_QWORD *)(v16 + 8) + 8LL) + v16 + 8);
  v18 = (int *)(**v17)(v17, v28);
  ColorChannelDepth = GetColorChannelDepth(*v18);
  v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 48LL))(*((_QWORD *)a2 + 2));
  v21 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(int *)(*(_QWORD *)(v20 + 8) + 8LL) + v20 + 8);
  v22 = (int *)(**v21)(v21, v28);
  v23 = GetColorChannelDepth(*v22);
  if ( ColorChannelDepth <= v23 )
  {
    if ( ColorChannelDepth < v23 )
      return 0;
LABEL_27:
    v24 = (*((_DWORD *)this + 19) - *((_DWORD *)this + 17)) * (*((_DWORD *)this + 20) - *((_DWORD *)this + 18));
    v25 = (*((_DWORD *)a2 + 19) - *((_DWORD *)a2 + 17)) * (*((_DWORD *)a2 + 20) - *((_DWORD *)a2 + 18));
    if ( v24 > v25 )
      return 1;
    if ( v24 >= v25 )
    {
      v26 = (*((_DWORD *)this + 11) - *((_DWORD *)this + 9)) * (*((_DWORD *)this + 12) - *((_DWORD *)this + 10));
      v27 = (*((_DWORD *)a2 + 11) - *((_DWORD *)a2 + 9)) * (*((_DWORD *)a2 + 12) - *((_DWORD *)a2 + 10));
      if ( v26 > v27 || v26 >= v27 && *((_BYTE *)this + 216) && !*((_BYTE *)a2 + 216) )
        return 1;
    }
    return 0;
  }
  return 1;
}
