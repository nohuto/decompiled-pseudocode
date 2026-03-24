/*
 * XREFs of ?IsComputeScribbleSupported@CLegacyRenderTarget@@UEBA_NXZ @ 0x180184B00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0q_EventWriteTransfer @ 0x180152A24 (McTemplateU0q_EventWriteTransfer.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x18017C29C (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 */

bool __fastcall CLegacyRenderTarget::IsComputeScribbleSupported(CLegacyRenderTarget *this)
{
  __int64 v2; // r8

  if ( !*((_QWORD *)this + 3) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    {
      v2 = 10LL;
LABEL_7:
      McTemplateU0q_EventWriteTransfer((__int64)this, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, v2);
      return 0;
    }
    return 0;
  }
  if ( (unsigned int)COverlayContext::GetEffectiveDirectFlipMode((__int64)this + 336) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    {
      v2 = 1LL;
      goto LABEL_7;
    }
    return 0;
  }
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 232LL))(*((_QWORD *)this + 3));
}
