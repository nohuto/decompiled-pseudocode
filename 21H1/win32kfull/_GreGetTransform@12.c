/*
 * XREFs of _GreGetTransform@12 @ 0x21D5A2
 * Callers:
 *     _NtGdiGetTransform@12 @ 0x2133EA (_NtGdiGetTransform@12.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?vInitPageToDevice@EXFORMOBJ@@QAEXAAVXDCOBJ@@PAVMATRIX@@@Z @ 0x21D3B8 (-vInitPageToDevice@EXFORMOBJ@@QAEXAAVXDCOBJ@@PAVMATRIX@@@Z.c)
 */

int __fastcall GreGetTransform(HDC a1, int a2, struct _XFORML *a3)
{
  int v3; // esi
  EFLOAT *v6[3]; // [esp+Ch] [ebp-58h] BYREF
  _DWORD v7[3]; // [esp+18h] [ebp-4Ch] BYREF
  _BYTE v8[60]; // [esp+24h] [ebp-40h] BYREF

  v3 = 0;
  memset(v7, 0, sizeof(v7));
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v6, (struct XDCOBJ *)v7, a2 | 0x80000000);
    memset(v8, 0, sizeof(v8));
    if ( v6[0] || a2 == 772 && (EXFORMOBJ::vInitPageToDevice(v6, (struct XDCOBJ *)v7, (struct MATRIX *)v8), v6[0]) )
    {
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)v6, a3);
      v3 = 1;
    }
    if ( v7[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v3;
}
