/*
 * XREFs of _GreSetDIBits@28 @ 0x226C73
 * Callers:
 *     ?xxxDIBtoBMP@@YGPAUHBITMAP__@@PAUtagBITMAPINFOHEADER@@PAUHPALETTE__@@K@Z @ 0x182318 (-xxxDIBtoBMP@@YGPAUHBITMAP__@@PAUtagBITMAPINFOHEADER@@PAUHPALETTE__@@K@Z.c)
 * Callees:
 *     _pbmiConvertInfo@8 @ 0x214467 (_pbmiConvertInfo@8.c)
 *     _GreSetDIBitsInternal@40 @ 0x226CEF (_GreSetDIBitsInternal@40.c)
 */

int __thiscall GreSetDIBits(void *this, int a2, int a3, int a4, PATHOBJ *a5, int a6)
{
  PATHOBJ *v6; // edi
  unsigned int fl; // eax
  char *v8; // eax
  FLONG v9; // eax
  int v11; // ebx
  void *v12; // [esp+10h] [ebp-4h]

  v12 = this;
  v6 = a5;
  if ( !a5 )
    goto LABEL_8;
  fl = a5->fl;
  if ( a5->fl == 12 )
  {
    v8 = pbmiConvertInfo((unsigned __int16 *)a5);
    this = v12;
    v6 = (PATHOBJ *)v8;
    fl = a5->fl;
  }
  if ( fl >= 0x28 && ((v9 = a5[2].fl, v9 == 4) || v9 == 5) )
  {
    EngSetLastError(0x57u);
    return 0;
  }
  else
  {
LABEL_8:
    v11 = GreSetDIBitsInternal(this, a3, a4, v6, 0, -1, -1, 0);
    if ( v6 )
    {
      if ( v6 != a5 )
        Win32FreePool(v6);
    }
    return v11;
  }
}
