/*
 * XREFs of ?CheckOcclusionState@CLegacySwapChain@@UEBAJXZ @ 0x1800DCB34
 * Callers:
 *     ?CheckOcclusionState@CLegacySwapChain@@$4PPPPPPPM@A@EBAJXZ @ 0x180108D30 (-CheckOcclusionState@CLegacySwapChain@@$4PPPPPPPM@A@EBAJXZ.c)
 *     ?CheckOcclusionState@CLegacySwapChain@@$4PPPPPPPM@BI@EBAJXZ @ 0x180109D30 (-CheckOcclusionState@CLegacySwapChain@@$4PPPPPPPM@BI@EBAJXZ.c)
 *     ?CheckOcclusionState@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJXZ @ 0x18010A390 (-CheckOcclusionState@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckOcclusionState@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@@Z @ 0x1800DCB7C (-CheckOcclusionState@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@@Z.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180111E98 (McTemplateU0xq_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacySwapChain::CheckOcclusionState(CLegacySwapChain *this)
{
  struct IDXGISwapChainDWM1 *v1; // rdx
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v1 = (struct IDXGISwapChainDWM1 *)*((_QWORD *)this - 41);
  if ( v1 )
  {
    v2 = CD3DDevice::CheckOcclusionState(*((CD3DDevice **)this - 42), v1);
    v4 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802E18D0, 2LL, v2, 0x211u);
  }
  else
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802E18D0, 2LL, -2003304307, 0x215u);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xq_EventWriteTransfer(v3, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE, 0LL, v4);
  return v4;
}
