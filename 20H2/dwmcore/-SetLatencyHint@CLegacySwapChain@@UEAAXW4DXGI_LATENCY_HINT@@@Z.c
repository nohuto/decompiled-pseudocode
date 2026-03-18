/*
 * XREFs of ?SetLatencyHint@CLegacySwapChain@@UEAAXW4DXGI_LATENCY_HINT@@@Z @ 0x1802479BC
 * Callers:
 *     ?SetLatencyHint@CLegacySwapChain@@$4PPPPPPPM@A@EAAXW4DXGI_LATENCY_HINT@@@Z @ 0x1800F18F0 (-SetLatencyHint@CLegacySwapChain@@$4PPPPPPPM@A@EAAXW4DXGI_LATENCY_HINT@@@Z.c)
 *     ?SetLatencyHint@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAXW4DXGI_LATENCY_HINT@@@Z @ 0x1800F21E0 (-SetLatencyHint@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAXW4DXGI_LATENCY_HINT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::SetLatencyHint(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 - 280) + 224LL))(*(_QWORD *)(a1 - 280));
}
