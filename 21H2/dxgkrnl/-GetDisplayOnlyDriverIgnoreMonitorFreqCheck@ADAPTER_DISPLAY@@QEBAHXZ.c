/*
 * XREFs of ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C006AF4C
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?SupportHWVSync@DXGADAPTER@@QEBAEXZ @ 0x1C001BE74 (-SupportHWVSync@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

_BOOL8 __fastcall ADAPTER_DISPLAY::GetDisplayOnlyDriverIgnoreMonitorFreqCheck(ADAPTER_DISPLAY *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  DXGADAPTER *v5; // rcx
  _BOOL8 result; // rax

  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 2800LL) )
  {
    WdLogSingleEntry1(1LL, 6727LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v3,
          v2,
          v4,
          0LL,
          2,
          -1,
          L"GetAdapter()->IsDisplayOnlyAdapter()",
          6727LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  result = 1;
  if ( !*((_DWORD *)this + 108) )
  {
    v5 = (DXGADAPTER *)*((_QWORD *)this + 2);
    if ( (*((_DWORD *)v5 + 109) & 0x100) != 0 || DXGADAPTER::SupportHWVSync(v5) )
      return 0;
  }
  return result;
}
