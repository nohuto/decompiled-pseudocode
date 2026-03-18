/*
 * XREFs of ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801F31C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180092F04 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180155DC4 (McTemplateU0q_EventWriteTransfer.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1801560E0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801780E4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0CSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCGenericInkTipPointSource@@I_K@Z @ 0x1801C60EC (--0CSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCGenericInkTi.c)
 *     ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x1801F3620 (-LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV-$shared_ptr@$$BY0A@E@std@@@Z.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x18023D7B0 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::CreateScribble(
        CSynchronousSuperWetInk *this,
        struct CD3DDevice *a2,
        const struct DCompWetInkStrokeRenderState *a3,
        struct CComputeScribble **a4)
{
  int DirectInkFactory; // eax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  std::_Ref_count_base *v11; // rdi
  bool v12; // zf
  int v13; // xmm1_4
  __int64 v14; // rax
  __int64 v15; // rcx
  CSuperWetInkScribble *v16; // rax
  CSuperWetInkScribble *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  struct IDCompositionDirectInkSuperWetStrokePartner *v21; // [rsp+30h] [rbp-D0h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v22; // [rsp+38h] [rbp-C8h] BYREF
  char *v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  std::_Ref_count_base *v25[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+70h] [rbp-90h]
  int v28; // [rsp+74h] [rbp-8Ch]
  _OWORD v29[3]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-58h]
  char *v31; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v32[88]; // [rsp+B8h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+110h] [rbp+10h] BYREF
  char **v34; // [rsp+130h] [rbp+30h]
  int v35; // [rsp+138h] [rbp+38h]
  int v36; // [rsp+13Ch] [rbp+3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v22 = 0LL;
  DirectInkFactory = CD2DContext::GetDirectInkFactory((struct CD3DDevice *)((char *)a2 + 16), &v22);
  v8 = DirectInkFactory;
  if ( DirectInkFactory >= 0 )
  {
    v9 = 0LL;
    v10 = *(_QWORD *)(*((_QWORD *)this - 3) + 96LL);
    if ( v10 )
      v9 = (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 232LL))(v10, 0LL);
    *(_OWORD *)v25 = 0LL;
    v8 = CSynchronousSuperWetInk::LookupPerFrameData((char *)this - 112, v9, v25);
    if ( v8 >= 0 )
    {
      v11 = v25[0];
      v12 = *((_BYTE *)v25[0] + 12) == 0;
      v26 = _xmm;
      if ( v12 )
      {
        v27 = 0;
        v28 = 0;
      }
      else
      {
        v13 = *((_DWORD *)a3 + 5);
        v27 = *((_DWORD *)a3 + 4);
        v28 = v13;
      }
      v14 = *(_QWORD *)v22;
      v21 = 0LL;
      v8 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, char *, _QWORD, __int128 *, struct IDCompositionDirectInkSuperWetStrokePartner **))(v14 + 56))(
             v22,
             (char *)v25[0] + 20,
             *((unsigned int *)v25[0] + 4),
             &v26,
             &v21);
      if ( v8 >= 0 )
      {
        v16 = (CSuperWetInkScribble *)operator new(0x30uLL);
        if ( v16 )
          v17 = CSuperWetInkScribble::CSuperWetInkScribble(
                  v16,
                  v21,
                  *((struct CGenericInkTipPointSource **)this + 1),
                  *((_DWORD *)v11 + 2),
                  (unsigned __int64)this - 112);
        else
          v17 = 0LL;
        if ( v17 )
          (**(void (__fastcall ***)(CSuperWetInkScribble *))v17)(v17);
        v24 = 0LL;
        *a4 = v17;
        if ( *((_BYTE *)v11 + 12) )
        {
          if ( !*((_BYTE *)this + 136) )
          {
            if ( (unsigned int)dword_180346E48 > 4
              && (qword_180346E58 & 8) != 0
              && (qword_180346E60 & 8) == qword_180346E60 )
            {
              v36 = 0;
              v34 = &v23;
              v23 = (char *)this - 112;
              v35 = 8;
              tlgWriteTransfer_EventWriteTransfer(
                (__int64)&dword_180346E48,
                (unsigned __int8 *)dword_1802EAB7B,
                0LL,
                0LL,
                3u,
                &v33);
            }
            v30 = 0LL;
            v18 = *((_QWORD *)this - 12);
            v29[0] = (unsigned __int64)this - 112;
            memset(&v29[1], 0, 32);
            LODWORD(v30) = 2;
            (*(void (__fastcall **)(_QWORD, _OWORD *, _QWORD, wchar_t *))(**(_QWORD **)(v18 + 504) + 8LL))(
              *(_QWORD *)(v18 + 504),
              v29,
              0LL,
              word_1802CE738);
            *((_BYTE *)this + 136) = 1;
          }
          if ( (unsigned int)dword_180346E48 > 4
            && (qword_180346E58 & 8) != 0
            && (qword_180346E60 & 8) == qword_180346E60 )
          {
            v36 = 0;
            v34 = &v23;
            v23 = (char *)this - 112;
            v35 = 8;
            tlgWriteTransfer_EventWriteTransfer(
              (__int64)&dword_180346E48,
              (unsigned __int8 *)dword_1802EABC4,
              0LL,
              0LL,
              3u,
              &v33);
          }
          memset_0(v32, 0, 0x50uLL);
          v19 = *((_QWORD *)this - 12);
          v31 = (char *)this - 112;
          (*(void (__fastcall **)(_QWORD, char **))(**(_QWORD **)(v19 + 504) + 16LL))(*(_QWORD *)(v19 + 504), &v31);
        }
        v8 = 0;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v24);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
      {
        McTemplateU0q_EventWriteTransfer(v15, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 8LL);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
    }
    if ( v25[1] )
      std::_Ref_count_base::_Decref(v25[1]);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x97,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\synchronoussuperwetink.cpp",
      (const char *)(unsigned int)DirectInkFactory);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
  return (unsigned int)v8;
}
