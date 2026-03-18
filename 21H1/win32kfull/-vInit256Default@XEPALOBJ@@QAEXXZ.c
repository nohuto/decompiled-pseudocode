/*
 * XREFs of ?vInit256Default@XEPALOBJ@@QAEXXZ @ 0xB7702
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBITMAP__@@IIPAEPAUtagBITMAPINFO@@III@Z @ 0x4B706 (-GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBI.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QAEXXZ @ 0xB7624 (-vInit256Rainbow@XEPALOBJ@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall XEPALOBJ::vInit256Default(XEPALOBJ *this)
{
  unsigned int v1; // esi
  int v2; // edi

  v1 = 0;
  v2 = 1020;
  do
  {
    *(_DWORD *)(v1 + *(_DWORD *)(*(_DWORD *)this + 76)) = *(_DWORD *)(v1 + logDefaultPal + 4);
    v1 += 4;
    *(_DWORD *)(v2 + *(_DWORD *)(*(_DWORD *)this + 76)) = *(_DWORD *)(v2 + logDefaultPal - 940);
    v2 -= 4;
  }
  while ( v1 < 0x28 );
}
