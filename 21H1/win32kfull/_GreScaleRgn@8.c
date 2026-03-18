/*
 * XREFs of _GreScaleRgn@8 @ 0x1FD560
 * Callers:
 *     _NtGdiScaleRgn@8 @ 0x213F4C (_NtGdiScaleRgn@8.c)
 * Callees:
 *     ??1RGNOBJAPI@@QAE@XZ @ 0x24D20 (--1RGNOBJAPI@@QAE@XZ.c)
 *     ?bDpiScaleTransform@DC@@QBEHXZ @ 0x4F3AC (-bDpiScaleTransform@DC@@QBEHXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __fastcall GreScaleRgn(HDC a1, HRGN a2)
{
  int v2; // edi
  DC *v4; // ecx
  _DWORD v6[3]; // [esp+18h] [ebp-18h] BYREF
  DC *v7[3]; // [esp+24h] [ebp-Ch] BYREF

  v2 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, a2, 0);
  memset(v7, 0, sizeof(v7));
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  v4 = v7[0];
  if ( v6[0] )
  {
    if ( !v7[0] )
      goto LABEL_8;
    if ( DC::bDpiScaleTransform(v7[0]) )
    {
      RGNOBJ::vScale(v6, *((_DWORD *)v4 + 131), *((_DWORD *)v4 + 132), *((_DWORD *)v4 + 133), *((_DWORD *)v4 + 134));
      v4 = v7[0];
    }
    v2 = 1;
  }
  if ( v4 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
LABEL_8:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
  return v2;
}
