/*
 * XREFs of _GreGetTextMetricsW@8 @ 0x84442
 * Callers:
 *     _NtGdiGetTextMetricsW@12 @ 0x61EA0 (_NtGdiGetTextMetricsW@12.c)
 *     __GetTextMetricsW@8 @ 0x8440E (__GetTextMetricsW@8.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     _xxxPSMTextOut@24 @ 0x1AF136 (_xxxPSMTextOut@24.c)
 *     ?DT_InitDrawTextInfo@@YGHPAUHDC__@@PAUtagRECT@@IPAUDRAWTEXTDATA@@PAUtagDRAWTEXTPARAMS@@@Z @ 0x1B7EEA (-DT_InitDrawTextInfo@@YGHPAUHDC__@@PAUtagRECT@@IPAUDRAWTEXTDATA@@PAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ?vGetTextMetrics@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAU_TMW_INTERNAL@@@Z @ 0x843AC (-vGetTextMetrics@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAU_TMW_INTERNAL@@@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 */

int __fastcall GreGetTextMetricsW(HDC a1, struct RFONTOBJ *a2)
{
  int v2; // esi
  struct DCOBJ *v5; // [esp+0h] [ebp-18h]
  struct _TMW_INTERNAL *v6; // [esp+4h] [ebp-14h]
  _DWORD v7[3]; // [esp+8h] [ebp-10h] BYREF
  int v8; // [esp+14h] [ebp-4h] BYREF

  v2 = 0;
  memset(v7, 0, sizeof(v7));
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v8 = 0;
    if ( RFONTOBJ::bInit((RFONTOBJ *)&v8, (struct XDCOBJ *)v7, 0, 2u) )
      GreAcquireSemaphore(*(_DWORD *)(v8 + 548));
    if ( v8 )
    {
      vGetTextMetrics((int)v7, (int)&v8, a2, v5, v6);
      v2 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
    if ( v7[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v2;
}
