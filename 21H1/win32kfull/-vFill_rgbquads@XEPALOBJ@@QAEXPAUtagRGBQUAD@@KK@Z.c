/*
 * XREFs of ?vFill_rgbquads@XEPALOBJ@@QAEXPAUtagRGBQUAD@@KK@Z @ 0x7B830
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBITMAP__@@IIPAEPAUtagBITMAPINFO@@III@Z @ 0x4B706 (-GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBI.c)
 *     _GreGetDIBColorTable@16 @ 0x7B6B4 (_GreGetDIBColorTable@16.c)
 * Callees:
 *     <none>
 */

void __thiscall XEPALOBJ::vFill_rgbquads(XEPALOBJ *this, struct tagRGBQUAD *a2, unsigned int a3, unsigned int a4)
{
  int v5; // edi
  int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // edx
  struct tagRGBQUAD *v9; // edi
  int v10; // ecx
  unsigned int v11; // [esp+18h] [ebp+10h]

  v5 = *(_DWORD *)this;
  v6 = *(_DWORD *)(*(_DWORD *)this + 16);
  if ( (v6 & 8) != 0 )
  {
    *a2 = (struct tagRGBQUAD)16711680;
    a2[1] = (struct tagRGBQUAD)65280;
    a2[2] = (struct tagRGBQUAD)255;
  }
  else if ( (v6 & 2) != 0 && a4 == 3 )
  {
    *a2 = **(struct tagRGBQUAD **)(v5 + 76);
    a2[1] = *(struct tagRGBQUAD *)(*(_DWORD *)(*(_DWORD *)this + 76) + 4);
    a2[2] = *(struct tagRGBQUAD *)(*(_DWORD *)(*(_DWORD *)this + 76) + 8);
  }
  else if ( (v6 & 4) != 0 )
  {
    *a2 = (struct tagRGBQUAD)255;
    a2[1] = (struct tagRGBQUAD)65280;
    a2[2] = (struct tagRGBQUAD)16711680;
  }
  else
  {
    v7 = a3;
    v8 = a3 + a4;
    if ( a3 + a4 >= *(_DWORD *)(v5 + 20) )
      v8 = *(_DWORD *)(v5 + 20);
    if ( a3 < v8 )
    {
      v9 = a2;
      HIBYTE(v11) = 0;
      do
      {
        v10 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 76) + 4 * v7);
        BYTE2(v11) = v10;
        ++v7;
        LOBYTE(v11) = BYTE2(v10);
        BYTE1(v11) = BYTE1(v10);
        *v9++ = (struct tagRGBQUAD)v11;
      }
      while ( v7 < v8 );
    }
  }
}
