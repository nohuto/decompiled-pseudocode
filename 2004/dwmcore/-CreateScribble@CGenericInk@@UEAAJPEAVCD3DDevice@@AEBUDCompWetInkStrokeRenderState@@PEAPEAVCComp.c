/*
 * XREFs of ?CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801C3B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180097A74 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E1920 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCGenericInkTipPointSource@@I_K@Z @ 0x1801C37CC (--0CSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCGenericInkTi.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x1801C4444 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x18023AD80 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 */

__int64 __fastcall CGenericInk::CreateScribble(
        CGenericInk *this,
        struct CD3DDevice *a2,
        const struct DCompWetInkStrokeRenderState *a3,
        struct CComputeScribble **a4)
{
  int DirectInkWetStroke; // eax
  unsigned int v9; // ebx
  int DirectInkFactory; // eax
  __int64 v11; // rax
  int v12; // eax
  CSuperWetInkScribble *v13; // rax
  CSuperWetInkScribble *v14; // rbx
  struct IDCompositionDirectInkSuperWetStrokePartner *v16; // [rsp+30h] [rbp-20h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v17; // [rsp+38h] [rbp-18h] BYREF
  CSuperWetInkScribble *v18; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IDCompositionDirectInkWetStrokePartner *v20; // [rsp+80h] [rbp+30h] BYREF

  v20 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v20);
  DirectInkWetStroke = CGenericInk::GetDirectInkWetStroke((CGenericInk *)((char *)this - 72), a2, &v20);
  v9 = DirectInkWetStroke;
  if ( DirectInkWetStroke >= 0 )
  {
    v17 = 0LL;
    DirectInkFactory = CD2DContext::GetDirectInkFactory((struct CD3DDevice *)((char *)a2 + 16), &v17);
    v9 = DirectInkFactory;
    if ( DirectInkFactory >= 0 )
    {
      v11 = *(_QWORD *)v17;
      v16 = 0LL;
      v12 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, struct IDCompositionDirectInkWetStrokePartner *, const struct DCompWetInkStrokeRenderState *, struct IDCompositionDirectInkSuperWetStrokePartner **))(v11 + 48))(
              v17,
              v20,
              a3,
              &v16);
      v9 = v12;
      if ( v12 >= 0 )
      {
        v13 = (CSuperWetInkScribble *)operator new(0x30uLL);
        if ( v13 )
          v14 = CSuperWetInkScribble::CSuperWetInkScribble(
                  v13,
                  v16,
                  *((struct CGenericInkTipPointSource **)this + 1),
                  *((_DWORD *)this + 42),
                  (unsigned __int64)this - 72);
        else
          v14 = 0LL;
        v18 = v14;
        if ( v14 )
        {
          (**(void (__fastcall ***)(CSuperWetInkScribble *))v14)(v14);
          v18 = 0LL;
          *a4 = v14;
          v9 = 0;
        }
        else
        {
          v9 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x170,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
            (const char *)0x8007000ELL);
        }
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v18);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x169,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
          (const char *)(unsigned int)v12);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x164,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
        (const char *)(unsigned int)DirectInkFactory);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)DirectInkWetStroke);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
  return v9;
}
