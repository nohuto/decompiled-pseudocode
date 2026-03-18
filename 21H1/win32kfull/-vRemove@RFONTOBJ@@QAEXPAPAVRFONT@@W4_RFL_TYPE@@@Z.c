/*
 * XREFs of ?vRemove@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z @ 0xA3954
 * Callers:
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QAEHPAPAVRFONT@@@Z @ 0x8D4E8 (-bMakeInactiveHelper@RFONTOBJ@@QAEHPAPAVRFONT@@@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0xCDC5E (prfntDeactivateEudcRFONTs.c)
 *     prfntKillList @ 0xCE282 (prfntKillList.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924 (-vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z.c)
 *     ?bFindRFONT@RFONTOBJ@@QAEHPAU_FD_XFORM@@KKAAVPDEVOBJ@@PAVEXFORMOBJ@@PAVPFE@@HHHK@Z @ 0x209285 (-bFindRFONT@RFONTOBJ@@QAEHPAU_FD_XFORM@@KKAAVPDEVOBJ@@PAVEXFORMOBJ@@PAVPFE@@HHHK@Z.c)
 *     _vRemoveAllInactiveRFONTs@4 @ 0x209F01 (_vRemoveAllInactiveRFONTs@4.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall RFONTOBJ::vRemove(void *this, _DWORD *a2, int a3)
{
  _DWORD *result; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // ebx
  int v6; // edi
  int v7; // edx
  _DWORD *v8; // ecx

  if ( a3 )
  {
    result = (_DWORD *)(a3 - 1);
    if ( a3 != 1 )
      return result;
    v4 = (_DWORD *)(*(_DWORD *)this + 664);
    v5 = (_DWORD *)*v4;
    v6 = *(_DWORD *)(*(_DWORD *)this + 668);
    v7 = *v4 != 0 ? *v4 + 664 : 0;
    result = (_DWORD *)(v6 + 664);
  }
  else
  {
    v4 = (_DWORD *)(*(_DWORD *)this + 540);
    v5 = (_DWORD *)*v4;
    v6 = *(_DWORD *)(*(_DWORD *)this + 544);
    v7 = *v4 != 0 ? *v4 + 540 : 0;
    result = (_DWORD *)(v6 + 540);
  }
  v8 = v6 != 0 ? result : 0;
  if ( v5 )
  {
    *(_DWORD *)(v7 + 4) = v6;
    if ( v8 )
    {
      result = (_DWORD *)*v4;
      *v8 = *v4;
    }
  }
  else
  {
    result = a2;
    *a2 = v6;
    if ( v8 )
      *v8 = 0;
  }
  return result;
}
