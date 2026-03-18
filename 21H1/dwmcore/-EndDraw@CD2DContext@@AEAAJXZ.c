/*
 * XREFs of ?EndDraw@CD2DContext@@AEAAJXZ @ 0x18006AF84
 * Callers:
 *     ?PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18006A820 (-PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnEndDraw@CDrawListBatchManager@@IEAAXXZ @ 0x18006D2B4 (-OnEndDraw@CDrawListBatchManager@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180155E28 (McTemplateU0qq_EventWriteTransfer.c)
 */

__int64 __fastcall CD2DContext::EndDraw(CD2DContext *this)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // edi

  if ( *((_BYTE *)this + 485) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        17LL,
        0LL);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 30) + 392LL))(
           *((_QWORD *)this + 30),
           0LL,
           0LL);
    v4 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x798u, 0LL);
    *(_WORD *)((char *)this + 485) = 0;
    CDrawListBatchManager::OnEndDraw((CD2DContext *)((char *)this + 8));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        17LL,
        0LL);
  }
  else
  {
    v4 = *((_DWORD *)this + 278);
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v4, 0x7A5u, 0LL);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this - 16, v4, 0);
}
