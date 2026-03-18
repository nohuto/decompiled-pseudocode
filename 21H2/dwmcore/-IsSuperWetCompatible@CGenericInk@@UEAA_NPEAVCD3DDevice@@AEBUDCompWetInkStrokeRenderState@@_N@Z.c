/*
 * XREFs of ?IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@_N@Z @ 0x180215DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x180215CD8 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x180278D30 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 */

char __fastcall CGenericInk::IsSuperWetCompatible(
        CGenericInk *this,
        struct CD3DDevice *a2,
        const struct DCompWetInkStrokeRenderState *a3,
        char a4)
{
  char v4; // bl
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct IDCompositionDirectInkFactoryPartner *v12[3]; // [rsp+20h] [rbp-18h] BYREF
  struct IDCompositionDirectInkWetStrokePartner *v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( *((_QWORD *)this + 11) && (!a4 || *((_QWORD *)this + 17)) )
  {
    v13 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v13);
    if ( (int)CGenericInk::GetDirectInkWetStroke(this, a2, &v13) < 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
        McTemplateU0q_EventWriteTransfer(v9, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 15LL);
      goto LABEL_19;
    }
    v12[0] = 0LL;
    if ( (int)CD2DContext::GetDirectInkFactory((struct CD3DDevice *)((char *)a2 + 16), v12) >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, struct IDCompositionDirectInkWetStrokePartner *, const struct DCompWetInkStrokeRenderState *))(*(_QWORD *)v12[0] + 40LL))(
             v12[0],
             v13,
             a3) )
      {
        v4 = 1;
        goto LABEL_18;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      {
        v11 = 3LL;
        goto LABEL_16;
      }
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    {
      v11 = 16LL;
LABEL_16:
      McTemplateU0q_EventWriteTransfer(v10, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, v11);
    }
LABEL_18:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v12);
LABEL_19:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
    return v4;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    McTemplateU0q_EventWriteTransfer((__int64)this, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 14LL);
  return 0;
}
