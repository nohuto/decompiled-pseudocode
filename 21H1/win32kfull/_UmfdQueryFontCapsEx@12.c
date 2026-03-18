/*
 * XREFs of _UmfdQueryFontCapsEx@12 @ 0x84678
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 * Callees:
 *     <none>
 */

int __thiscall UmfdQueryFontCapsEx(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  int v4; // eax
  int v5; // eax

  v2 = this[1];
  *a2 = 2;
  if ( !v2 )
  {
    a2[1] = 3;
    return 2;
  }
  v4 = v2 - 1;
  if ( !v4 )
  {
    a2[1] = 2;
    return 2;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    a2[1] = 1;
    return 2;
  }
  if ( v5 == 1 )
  {
    a2[1] = 7;
    return 2;
  }
  *a2 = 0;
  return -1;
}
