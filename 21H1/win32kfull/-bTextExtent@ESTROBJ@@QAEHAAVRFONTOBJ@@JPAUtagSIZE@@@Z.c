/*
 * XREFs of ?bTextExtent@ESTROBJ@@QAEHAAVRFONTOBJ@@JPAUtagSIZE@@@Z @ 0xF85EB
 * Callers:
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     _GreGetTextExtentExW@32 @ 0xF83A4 (_GreGetTextExtentExW@32.c)
 * Callees:
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 */

int __thiscall ESTROBJ::bTextExtent(ESTROBJ *this, struct RFONTOBJ *a2, int a3, struct tagSIZE *a4)
{
  bool v5; // zf
  int v6; // ecx
  _DWORD *v7; // ecx
  int v8; // eax
  LONG v9; // edx
  int v10; // eax
  LONG cx; // ecx

  v5 = (*((_BYTE *)this + 192) & 8) == 0;
  v6 = **((_DWORD **)this + 11);
  if ( v5 )
  {
    a4->cx = lCvt(*(_DWORD *)(v6 + 424), *(_DWORD *)(v6 + 428), *((_DWORD *)this + 23));
    v7 = (_DWORD *)**((_DWORD **)this + 11);
    v8 = 16 * v7[90];
  }
  else
  {
    a4->cx = lCvt(*(_DWORD *)(v6 + 424), *(_DWORD *)(v6 + 428), *((_DWORD *)this + 21) - *((_DWORD *)this + 19));
    v7 = (_DWORD *)**((_DWORD **)this + 11);
    v8 = *((_DWORD *)this + 20) - *((_DWORD *)this + 22);
  }
  v9 = lCvt(v7[115], v7[116], v8);
  a4->cy = v9;
  if ( _gbDBCSCodePage )
  {
    if ( *(_DWORD *)(*(_DWORD *)a2 + 184) == 1 )
    {
      v10 = *(_DWORD *)(*(_DWORD *)a2 + 712);
      if ( (v10 & 0x14) == 0 && (((unsigned int)&loc_1FFFFC + 4) & v10) != 0 && (a3 == 900 || a3 == 2700) )
      {
        cx = a4->cx;
        a4->cx = v9;
        a4->cy = cx;
      }
    }
  }
  return 1;
}
