/*
 * XREFs of ?pql@PFEOBJ@@QAEPAU_QUICKLOOKUP@@XZ @ 0x1F8EB8
 * Callers:
 *     ?bIsLinkedGlyph@RFONTOBJ@@QAEHG@Z @ 0xC1064 (-bIsLinkedGlyph@RFONTOBJ@@QAEHG@Z.c)
 *     ?bComputeQuickLookup@@YGHPAU_QUICKLOOKUP@@PAVPFE@@H@Z @ 0x1F826B (-bComputeQuickLookup@@YGHPAU_QUICKLOOKUP@@PAVPFE@@H@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?bComputeQuickLookup@@YGHPAU_QUICKLOOKUP@@PAVPFE@@H@Z @ 0x1F826B (-bComputeQuickLookup@@YGHPAU_QUICKLOOKUP@@PAVPFE@@H@Z.c)
 */

struct _QUICKLOOKUP *__thiscall PFEOBJ::pql(int **this)
{
  int *v2; // eax
  struct PFE *v4; // [esp+0h] [ebp-8h]
  HSEMAPHORE v5; // [esp+4h] [ebp-4h] BYREF

  v2 = *this;
  if ( ((*this)[2] & 0x200) != 0 )
  {
    v5 = ghsemEUDC1;
    GreAcquireSemaphore(ghsemEUDC1);
    (*this)[2] &= ~0x200u;
    bComputeQuickLookup(*this, 0, 0, v4, (int)v5);
    SEMOBJ::vUnlock((SEMOBJ *)&v5);
    v2 = *this;
  }
  return (struct _QUICKLOOKUP *)(v2 + 17);
}
