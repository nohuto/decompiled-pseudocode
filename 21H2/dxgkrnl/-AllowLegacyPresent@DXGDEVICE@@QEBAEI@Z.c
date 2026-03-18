/*
 * XREFs of ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C032E6B0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C01EA970 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?ProcessHasVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGPROCESS@@W4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@W4DXGDEVICECLIENT_TYPE@@@Z @ 0x1C02C1780 (-ProcessHasVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGPROCESS@@W4_D3DKMT_VIDPNSOURCEOWNER_TYP.c)
 */

bool __fastcall DXGDEVICE::AllowLegacyPresent(DXGDEVICE *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 231);
  if ( !v1 )
    return 0;
  if ( !*(_QWORD *)(v1 + 2792) )
  {
    WdLogSingleEntry1(1LL, 9683LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDisplayAdapter(VidPnSourceId)->IsDisplayAdapter()",
      9683LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return !*((_DWORD *)this + 108)
      && ADAPTER_DISPLAY::ProcessHasVidPnSourceOwner(
           *(_QWORD *)(*((_QWORD *)this + 231) + 2792LL),
           *((_QWORD *)this + 5));
}
