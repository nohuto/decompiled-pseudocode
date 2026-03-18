/*
 * XREFs of ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x1801B8030
 * Callers:
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18003E4E4 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x1801B7E28 (-FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV-$span@PEAVOverlayPlaneInfo@COv.c)
 * Callees:
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180039534 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180089D54 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsDXGIColorSpaceStudio@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801B7EA0 (-IsDXGIColorSpaceStudio@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

char __fastcall COverlayContext::IsHigherProprity(
        const struct COverlayContext::OverlayPlaneInfo *a1,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v4; // bl
  char v5; // al
  bool v6; // r9
  char v7; // al
  char v8; // r8
  char v9; // al
  int v10; // ecx
  char v11; // r8
  __int64 v12; // rax
  __int64 (__fastcall ***v13)(_QWORD, _BYTE *); // rcx
  int *v14; // rax
  unsigned int ColorChannelDepth; // ebx
  __int64 v16; // rax
  __int64 (__fastcall ***v17)(_QWORD, _BYTE *); // rcx
  int *v18; // rax
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  _BYTE v25[16]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 2) + 136LL))(*((_QWORD *)a1 + 2));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 136LL))(*((_QWORD *)a2 + 2));
  if ( v4 )
  {
    if ( !v5 )
      return 1;
  }
  else if ( v5 )
  {
    return 0;
  }
  v6 = COverlayContext::s_bXbox;
  if ( COverlayContext::s_bXbox )
  {
    IsDXGIColorSpaceRec2020(*((_DWORD *)a1 + 27));
    v7 = IsDXGIColorSpaceRec2020(*((_DWORD *)a2 + 27));
    if ( v8 )
    {
      if ( !v7 )
        return 1;
    }
    else if ( v7 )
    {
      return 0;
    }
  }
  if ( *((_BYTE *)a1 + 176) )
  {
    if ( !*((_BYTE *)a2 + 176) )
      return 1;
  }
  else if ( *((_BYTE *)a2 + 176) )
  {
    return 0;
  }
  if ( !v6 )
    goto LABEL_25;
  IsDXGIColorSpaceStudio(*((_DWORD *)a1 + 27));
  v9 = IsDXGIColorSpaceStudio(*((_DWORD *)a2 + 27));
  if ( v11 )
  {
    if ( !v9 )
      return 1;
  }
  else if ( v9 )
  {
    return 0;
  }
  if ( *((_DWORD *)a1 + 27) )
  {
    if ( !v10 )
      return 1;
  }
  else if ( v10 )
  {
    return 0;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 2) + 48LL))(*((_QWORD *)a1 + 2));
  v13 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(int *)(*(_QWORD *)(v12 + 8) + 8LL) + v12 + 8);
  v14 = (int *)(**v13)(v13, v25);
  ColorChannelDepth = GetColorChannelDepth(*v14);
  v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 48LL))(*((_QWORD *)a2 + 2));
  v17 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(int *)(*(_QWORD *)(v16 + 8) + 8LL) + v16 + 8);
  v18 = (int *)(**v17)(v17, v25);
  v19 = GetColorChannelDepth(*v18);
  if ( ColorChannelDepth > v19 )
    return 1;
  if ( ColorChannelDepth >= v19 )
  {
LABEL_25:
    v20 = (*((_DWORD *)a1 + 19) - *((_DWORD *)a1 + 17)) * (*((_DWORD *)a1 + 20) - *((_DWORD *)a1 + 18));
    v21 = (*((_DWORD *)a2 + 19) - *((_DWORD *)a2 + 17)) * (*((_DWORD *)a2 + 20) - *((_DWORD *)a2 + 18));
    if ( v20 > v21 )
      return 1;
    if ( v20 >= v21 )
    {
      v22 = (*((_DWORD *)a1 + 11) - *((_DWORD *)a1 + 9)) * (*((_DWORD *)a1 + 12) - *((_DWORD *)a1 + 10));
      v23 = (*((_DWORD *)a2 + 11) - *((_DWORD *)a2 + 9)) * (*((_DWORD *)a2 + 12) - *((_DWORD *)a2 + 10));
      if ( v22 > v23 || v22 >= v23 && *((_BYTE *)a1 + 180) && !*((_BYTE *)a2 + 180) )
        return 1;
    }
  }
  return 0;
}
