/*
 * XREFs of BvgaIndicateProgress @ 0x140A8D780
 * Callers:
 *     <none>
 * Callees:
 *     BvgaUpdateProgressBar @ 0x1404FA5B0 (BvgaUpdateProgressBar.c)
 */

void BvgaIndicateProgress()
{
  unsigned int v0; // eax

  ++BvgaProgressIndicator;
  v0 = 100 * BvgaProgressIndicator / (unsigned int)dword_140D55184;
  if ( v0 > 0x63 )
    v0 = 99;
  if ( v0 != dword_140D55188 )
  {
    dword_140D55188 = v0;
    BvgaUpdateProgressBar(v0);
  }
}
