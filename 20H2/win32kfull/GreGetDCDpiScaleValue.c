/*
 * XREFs of GreGetDCDpiScaleValue @ 0x1C00FE8B4
 * Callers:
 *     NtGdiCreateDIBSection @ 0x1C0095C30 (NtGdiCreateDIBSection.c)
 *     GreCreateDIBitmapReal @ 0x1C00961AC (GreCreateDIBitmapReal.c)
 *     BitBltSysBmp @ 0x1C00FE3CC (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C00FE520 (NtUserBitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C00FE72C (PrepareHDCBITSBitmap.c)
 *     NtGdiGetDCDpiScaleValue @ 0x1C01567B0 (NtGdiGetDCDpiScaleValue.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GetCachedDpiScaleValue@DC@@QEBAJXZ @ 0x1C00FE908 (-GetCachedDpiScaleValue@DC@@QEBAJXZ.c)
 */

__int64 __fastcall GreGetDCDpiScaleValue(HDC a1)
{
  DC *v1; // rax
  unsigned int CachedDpiScaleValue; // ebx
  DC *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  v1 = v4[0];
  if ( v4[0] )
  {
    CachedDpiScaleValue = DC::GetCachedDpiScaleValue(v4[0]);
    v1 = v4[0];
  }
  else
  {
    CachedDpiScaleValue = 1;
  }
  if ( v1 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
  return CachedDpiScaleValue;
}
