/*
 * XREFs of ?vFill_triples@XEPALOBJ@@QAEXPAUtagRGBTRIPLE@@KK@Z @ 0x2234CE
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBITMAP__@@IIPAEPAUtagBITMAPINFO@@III@Z @ 0x4B706 (-GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBI.c)
 * Callees:
 *     <none>
 */

void __thiscall XEPALOBJ::vFill_triples(XEPALOBJ *this, struct tagRGBTRIPLE *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // edx
  unsigned int v5; // ebx
  int v7; // eax
  __int16 v8; // [esp+18h] [ebp+10h]

  v4 = a4;
  v5 = 0;
  if ( a4 >= *(_DWORD *)(*(_DWORD *)this + 20) )
    v4 = *(_DWORD *)(*(_DWORD *)this + 20);
  if ( v4 )
  {
    do
    {
      v7 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 76) + 4 * v5);
      LOBYTE(v8) = BYTE2(v7);
      ++v5;
      HIBYTE(v8) = BYTE1(v7);
      *(_WORD *)&a2->rgbtBlue = v8;
      ++a2;
      a2[-1].rgbtRed = v7;
    }
    while ( v5 < v4 );
  }
}
