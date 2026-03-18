/*
 * XREFs of ?UpdateMPOCaps@COverlayContext@@QEAAJ_N@Z @ 0x18003C664
 * Callers:
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x180031EB8 (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x18003BCF0 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x1801735B0 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801523A8 (McTemplateU0qq_EventWriteTransfer.c)
 */

__int64 __fastcall COverlayContext::UpdateMPOCaps(COverlayContext *this, char a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 i; // rax
  __int64 v10; // rax

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 192LL))(*(_QWORD *)this);
  if ( v5 )
  {
    if ( a2 )
      *((_BYTE *)this + 11423) = 1;
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 72LL))(v5, (char *)this + 48);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x5DBu, 0LL);
    }
    else
    {
      *((_BYTE *)this + 11430) = 1;
      v8 = *((_QWORD *)this + 915);
      if ( (v8 - *((_QWORD *)this + 914)) / 224 || *((_BYTE *)this + 11033) )
        *((_BYTE *)this + 11432) = 1;
      for ( i = *((_QWORD *)this + 914); i != v8; i += 224LL )
        *(_DWORD *)(i + 200) = 0;
      v10 = *((_QWORD *)this + 1412);
      if ( v10 )
      {
        *(_DWORD *)(v10 + 56) = 0;
        *(_DWORD *)(v10 + 60) = 0;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_OVERLAY_GETCAPS,
          *((unsigned int *)this + 12),
          *((unsigned int *)this + 15));
    }
  }
  return v4;
}
