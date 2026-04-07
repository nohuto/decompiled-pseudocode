/*
 * XREFs of ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180029790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x1800062A0 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x180010178 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18001FF68 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ??$CreateProxy@VCRenderDataProxy@@@CCompositor@@IEAAJPEAPEAVCRenderDataProxy@@@Z @ 0x180022FA0 (--$CreateProxy@VCRenderDataProxy@@@CCompositor@@IEAAJPEAPEAVCRenderDataProxy@@@Z.c)
 *     ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x180024010 (--$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x1800266A0 (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x180026848 (-Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?SetContent@CVisualProxy@@QEAAJPEBVCResourceProxy@@@Z @ 0x18002AB1C (-SetContent@CVisualProxy@@QEAAJPEBVCResourceProxy@@@Z.c)
 *     ?Update@CRenderDataProxy@@QEAAJPEAUIRenderDataBuilder@@@Z @ 0x18002AB50 (-Update@CRenderDataProxy@@QEAAJPEAUIRenderDataBuilder@@@Z.c)
 *     ?Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z @ 0x18002AB78 (-Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F0C4 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateProxy@VCRedirectVisualProxy@@@CCompositor@@IEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x18003FDF0 (--$CreateProxy@VCRedirectVisualProxy@@@CCompositor@@IEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 *     ?Attach@?$ComPtr@VUdwmDcompVisual@@@WRL@Microsoft@@QEAAXPEAVUdwmDcompVisual@@@Z @ 0x180046C14 (-Attach@-$ComPtr@VUdwmDcompVisual@@@WRL@Microsoft@@QEAAXPEAVUdwmDcompVisual@@@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClientArea::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  float v6; // xmm1_4
  int v7; // eax
  unsigned int v8; // esi
  CCachedVisualImageProxy *v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  CBaseObject *v13; // rbx
  int v14; // eax
  CBaseObject *v15; // rbx
  CBaseObject *v17; // rcx
  int v18; // eax
  CBaseObject *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  CBaseObject *v28; // [rsp+40h] [rbp-39h] BYREF
  struct CResourceProxy *v29; // [rsp+48h] [rbp-31h] BYREF
  struct IRenderDataBuilder *v30; // [rsp+50h] [rbp-29h] BYREF
  CCachedVisualImageProxy *v31; // [rsp+58h] [rbp-21h] BYREF
  CBaseObject *v32; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT v33; // [rsp+68h] [rbp-11h] BYREF
  _DWORD v34[4]; // [rsp+78h] [rbp-1h] BYREF
  __int128 v35; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  *a2 = 0LL;
  v32 = 0LL;
  if ( (a3 & 4) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)(*(_QWORD *)(a1 + 240) + 24LL) + 104LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 240) + 24LL),
      &v33);
    v34[0] = 0;
    v34[1] = 0;
    v6 = (float)(v33.right - v33.left);
    v33.right -= v33.left;
    v33.bottom -= v33.top;
    *(_QWORD *)&v33.left = 0LL;
    v31 = 0LL;
    *(float *)&v34[2] = v6;
    v35 = 0LL;
    *(float *)&v34[3] = (float)v33.bottom;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v31);
    v7 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           (__int64 *)&v31);
    v8 = v7;
    if ( v7 < 0 )
    {
      v22 = 102LL;
    }
    else
    {
      v9 = v31;
      v7 = CCachedVisualImageProxy::Update((__int64)v31, (__int64)v34, (__int64)&v35, 0LL, 0LL, *(_QWORD *)(a1 + 16), 0);
      v8 = v7;
      if ( v7 < 0 )
      {
        v22 = 108LL;
      }
      else
      {
        v7 = CCachedVisualImageProxy::Snapshot(v9, &v33);
        v8 = v7;
        if ( v7 >= 0 )
        {
          v30 = 0LL;
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v30);
          v10 = (*(__int64 (__fastcall **)(_QWORD, struct IRenderDataBuilder **))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                                + 5)
                                                                                              + 16LL)
                                                                                + 128LL))(
                  *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
                  &v30);
          v8 = v10;
          if ( v10 < 0 )
          {
            v23 = 114LL;
          }
          else
          {
            v10 = (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, _DWORD *, _QWORD))(*(_QWORD *)v30 + 40LL))(
                    v30,
                    v34,
                    *(unsigned int *)(*((_QWORD *)v9 + 2) + 24LL));
            v8 = v10;
            if ( v10 >= 0 )
            {
              v29 = 0LL;
              Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v29);
              v11 = CCompositor::CreateProxy<CRenderDataProxy>(
                      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                      (__int64 *)&v29);
              v8 = v11;
              if ( v11 < 0 )
              {
                v24 = 118LL;
              }
              else
              {
                v11 = CRenderDataProxy::Update(v29, v30);
                v8 = v11;
                if ( v11 >= 0 )
                {
                  v28 = 0LL;
                  v12 = CCompositor::CreateProxy<CVisualProxy>(
                          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                          (__int64 *)&v28);
                  v13 = v28;
                  v8 = v12;
                  if ( v12 < 0 )
                  {
                    v25 = 123LL;
                  }
                  else
                  {
                    v12 = CVisualProxy::SetContent(v28, v29);
                    v8 = v12;
                    if ( v12 >= 0 )
                    {
                      Microsoft::WRL::ComPtr<UdwmDcompVisual>::Attach(&v32, v13);
                      Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v29);
                      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v30);
                      Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v31);
                      goto LABEL_12;
                    }
                    v25 = 124LL;
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v25,
                    (__int64)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
                    (const char *)(unsigned int)v12);
                  if ( v13 )
                    CBaseObject::Release(v13);
                  goto LABEL_41;
                }
                v24 = 119LL;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v24,
                (__int64)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
                (const char *)(unsigned int)v11);
LABEL_41:
              Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v29);
              goto LABEL_42;
            }
            v23 = 115LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v23,
            (__int64)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
            (const char *)(unsigned int)v10);
LABEL_42:
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v30);
          goto LABEL_43;
        }
        v22 = 110LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v7);
LABEL_43:
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v31);
    return v8;
  }
  v28 = 0LL;
  v18 = CCompositor::CreateProxy<CRedirectVisualProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          &v28);
  v19 = v28;
  v8 = v18;
  if ( v18 < 0 )
  {
    v26 = 134LL;
LABEL_46:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v18);
    if ( !v19 )
      return v8;
    v17 = v19;
    goto LABEL_20;
  }
  v20 = *(_QWORD *)(a1 + 16);
  if ( v20 )
    v21 = *(unsigned int *)(*(_QWORD *)(v20 + 16) + 24LL);
  else
    v21 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)v28 + 2) + 16LL) + 320LL))(
          *(_QWORD *)(*((_QWORD *)v28 + 2) + 16LL),
          *(unsigned int *)(*((_QWORD *)v28 + 2) + 24LL),
          v21);
  v8 = v18;
  if ( v18 < 0 )
  {
    v26 = 135LL;
    goto LABEL_46;
  }
  Microsoft::WRL::ComPtr<UdwmDcompVisual>::Attach(&v32, v19);
LABEL_12:
  v28 = 0LL;
  v14 = CClientArea::Create(v32, &v28);
  v15 = v28;
  v8 = v14;
  if ( v14 < 0 )
  {
    v27 = 142LL;
  }
  else
  {
    v14 = CVisual::InitializeVisualTreeClone(a1, (__int64 *)v28, a3);
    v8 = v14;
    if ( v14 >= 0 )
    {
      v8 = 0;
      *a2 = v15;
      v15 = 0LL;
      goto LABEL_15;
    }
    v27 = 143LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v27,
    (__int64)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
    (const char *)(unsigned int)v14);
LABEL_15:
  if ( v15 )
    CBaseObject::Release(v15);
  if ( v32 )
  {
    v17 = v32;
LABEL_20:
    CBaseObject::Release(v17);
  }
  return v8;
}
