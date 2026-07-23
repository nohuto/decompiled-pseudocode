/*
 * XREFs of BvgaIndicateProgress @ 0x140A908D0
 * Callers:
 *     <none>
 * Callees:
 *     BvgaUpdateProgressBar @ 0x1404FFFB0 (BvgaUpdateProgressBar.c)
 */

void BvgaIndicateProgress()
{
  unsigned int v0; // eax

  ++BvgaProgressIndicator;
  v0 = 100 * BvgaProgressIndicator / (unsigned int)dword_140D58184;
  if ( v0 > 0x63 )
    v0 = 99;
  if ( v0 != dword_140D58188 )
  {
    dword_140D58188 = v0;
    BvgaUpdateProgressBar(v0);
  }
}
