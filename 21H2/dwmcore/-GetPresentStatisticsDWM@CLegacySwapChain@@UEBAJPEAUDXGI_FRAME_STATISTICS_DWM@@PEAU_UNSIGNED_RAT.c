/*
 * XREFs of ?GetPresentStatisticsDWM@CLegacySwapChain@@UEBAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800771F4
 * Callers:
 *     ?GetPresentStatisticsDWM@CLegacySwapChain@@$4PPPPPPPM@A@EBAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800F7590 (-GetPresentStatisticsDWM@CLegacySwapChain@@$4PPPPPPPM@A@EBAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_.c)
 *     ?GetPresentStatisticsDWM@CLegacySwapChain@@$4PPPPPPPM@BI@EBAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800F7A30 (-GetPresentStatisticsDWM@CLegacySwapChain@@$4PPPPPPPM@BI@EBAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU.c)
 *     ?GetPresentStatisticsDWM@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800F7DB0 (-GetPresentStatisticsDWM@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180079DA4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::GetPresentStatisticsDWM(
        CLegacySwapChain *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this - 35);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v5 + 160LL))(v5, a2);
    v11 = v6;
    v8 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802CFAA0, 3u, v6, 0x141u, 0LL);
    a3->uiNumerator = *((_DWORD *)this - 46);
    a3->uiDenominator = *((_DWORD *)this - 45);
    TranslateDXGIorD3DErrorInContext(v8, 0LL, &v11);
    return v11;
  }
  else
  {
    v9 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_1802CFAA0, 3u, -2003304307, 0x14Cu, 0LL);
  }
  return v9;
}
