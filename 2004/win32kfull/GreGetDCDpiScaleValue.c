/*
 * XREFs of GreGetDCDpiScaleValue @ 0x1C0102144
 * Callers:
 *     NtGdiCreateDIBSection @ 0x1C00669D0 (NtGdiCreateDIBSection.c)
 *     GreCreateDIBitmapReal @ 0x1C0066F4C (GreCreateDIBitmapReal.c)
 *     BitBltSysBmp @ 0x1C0101C5C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C0101DB0 (NtUserBitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C0101FBC (PrepareHDCBITSBitmap.c)
 *     NtGdiGetDCDpiScaleValue @ 0x1C0153E80 (NtGdiGetDCDpiScaleValue.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GetCachedDpiScaleValue@DC@@QEBAJXZ @ 0x1C0102198 (-GetCachedDpiScaleValue@DC@@QEBAJXZ.c)
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
