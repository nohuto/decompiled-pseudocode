/*
 * XREFs of ?vInsert@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z @ 0x851B6
 * Callers:
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 *     prfntDeactivateEudcRFONTs @ 0xCDC5E (prfntDeactivateEudcRFONTs.c)
 *     prfntKillList @ 0xCE282 (prfntKillList.c)
 *     ?bFindRFONT@RFONTOBJ@@QAEHPAU_FD_XFORM@@KKAAVPDEVOBJ@@PAVEXFORMOBJ@@PAVPFE@@HHHK@Z @ 0x209285 (-bFindRFONT@RFONTOBJ@@QAEHPAU_FD_XFORM@@KKAAVPDEVOBJ@@PAVEXFORMOBJ@@PAVPFE@@HHHK@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall RFONTOBJ::vInsert(int *this, int *a2, int a3)
{
  int result; // eax
  int *v5; // ebx
  _DWORD *v6; // edx
  int v7; // edi
  int *v8; // ecx

  if ( a3 )
  {
    result = a3 - 1;
    if ( a3 != 1 )
      return result;
    v5 = a2;
    v6 = (_DWORD *)(*this + 664);
    v7 = *a2;
    result = *a2 + 664;
  }
  else
  {
    v5 = a2;
    v6 = (_DWORD *)(*this + 540);
    v7 = *a2;
    result = *a2 + 540;
  }
  v8 = v7 != 0 ? (int *)result : 0;
  if ( v6 )
  {
    *v6 = 0;
    v6[1] = v7;
    if ( v8 )
      *v8 = *this;
    result = *this;
    *v5 = *this;
  }
  return result;
}
