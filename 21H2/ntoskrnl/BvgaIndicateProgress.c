/*
 * XREFs of BvgaIndicateProgress @ 0x140B4EF40
 * Callers:
 *     <none>
 * Callees:
 *     BvgaUpdateProgressBar @ 0x140551CA0 (BvgaUpdateProgressBar.c)
 */

void BvgaIndicateProgress()
{
  unsigned int v0; // eax

  ++BvgaProgressIndicator;
  v0 = 100 * BvgaProgressIndicator / (unsigned int)dword_140D68184;
  if ( v0 > 0x63 )
    v0 = 99;
  if ( v0 != dword_140D68188 )
  {
    dword_140D68188 = v0;
    BvgaUpdateProgressBar(v0);
  }
}
