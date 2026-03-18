/*
 * XREFs of ?bCleanupFontTable@@YGHPAPAVPFT@@@Z @ 0xCD626
 * Callers:
 *     ?MultiUserGreCleanupAllFonts@@YGXXZ @ 0xCD5E0 (-MultiUserGreCleanupAllFonts@@YGXXZ.c)
 * Callees:
 *     ?bCleanupFontHash@@YGHPAPAU_FONTHASH@@@Z @ 0xCD688 (-bCleanupFontHash@@YGHPAPAU_FONTHASH@@@Z.c)
 *     ?bDelete@PFTOBJ@@QAEHXZ @ 0xCD70C (-bDelete@PFTOBJ@@QAEHXZ.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QAEHH@Z @ 0xCDD06 (-bUnloadAllButPermanentFonts@PFTOBJ@@QAEHH@Z.c)
 */

int __thiscall bCleanupFontTable(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // edi
  int v4; // esi
  struct _FONTHASH **v6; // [esp+0h] [ebp-10h]
  _DWORD *v7; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  v3 = (_DWORD *)*this;
  v7 = v3;
  if ( v3 )
  {
    v4 = PFTOBJ::bUnloadAllButPermanentFonts((PFTOBJ *)&v7, (int)this);
    if ( v3[1] )
      v4 &= bCleanupFontHash(v6);
    if ( *v3 )
      v4 &= bCleanupFontHash(v6);
    if ( v3[2] )
      v4 &= bCleanupFontHash(v6);
    v2 = PFTOBJ::bDelete((PFTOBJ *)&v7) & v4;
    *this = 0;
  }
  return v2;
}
