/*
 * XREFs of ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180076EB8
 * Callers:
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x180076E08 (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800FE0C4 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFor.c)
 * Callees:
 *     _vsnwprintf @ 0x1801019B8 (_vsnwprintf.c)
 */

__int64 StringCbPrintfW(unsigned __int16 *a1, unsigned __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // rsi
  unsigned int v6; // edi
  int v7; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = a2 >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = vsnwprintf(a1, v3 - 1, a3, Args);
    if ( v7 < 0 || v7 > v5 )
    {
      v6 = -2147024774;
    }
    else if ( v7 != v5 )
    {
      return v6;
    }
    a1[v5] = 0;
    return v6;
  }
  v6 = -2147024809;
  if ( v3 )
    *a1 = 0;
  return v6;
}
