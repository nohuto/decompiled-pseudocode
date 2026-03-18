/*
 * XREFs of bUnloadEudcFont @ 0xCD8F6
 * Callers:
 *     bDeleteAllFlEntry @ 0xCD72E (bDeleteAllFlEntry.c)
 *     ?CleanUpEUDC@@YGXXZ @ 0xCE864 (-CleanUpEUDC@@YGXXZ.c)
 *     GreEudcLoadLinkW @ 0x1F7AA9 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1F7CCC (GreEudcUnloadLinkW.c)
 *     bDeleteFlEntry @ 0x1F84B8 (bDeleteFlEntry.c)
 * Callees:
 *     ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x8A554 (-StringCchCopyW@@YGJPAGIPBG@Z.c)
 *     ?vFreePql@PFEOBJ@@QAEXXZ @ 0xCD998 (-vFreePql@PFEOBJ@@QAEXXZ.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z @ 0xCD9B6 (-bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z.c)
 *     vKillEudcRFONTs @ 0xCDC40 (vKillEudcRFONTs.c)
 *     prfntDeactivateEudcRFONTs @ 0xCDC5E (prfntDeactivateEudcRFONTs.c)
 *     ??0MALLOCOBJ@@QAE@K@Z @ 0xDD190 (--0MALLOCOBJ@@QAE@K@Z.c)
 */

int __thiscall bUnloadEudcFont(unsigned __int16 **this)
{
  unsigned __int16 *v2; // esi
  int v3; // edi
  int v4; // edx
  int v5; // eax
  unsigned int i; // ecx
  unsigned int v8; // [esp+0h] [ebp-10h]
  const unsigned __int16 *v9; // [esp+4h] [ebp-Ch]
  unsigned __int16 *v10; // [esp+Ch] [ebp-4h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v10, 0x20Au);
  v2 = v10;
  if ( !v10 )
    return 0;
  v10 = *this;
  v3 = 0;
  if ( StringCchCopyW(*(_DWORD *)(*(_DWORD *)v10 + 12), v8, v9) >= 0 )
  {
    v3 = 1;
    v4 = 0;
    if ( (dword_27436C & 0x10) != 0 || !bFinallyInitializeFontAssocDefault )
      goto LABEL_5;
    for ( i = 0; i < 1148; i += 164 )
    {
      if ( *(struct _FONT_DEFAULTASSOC **)((char *)&FontAssocDefaultTable + i * 4)
        && *(unsigned __int16 *)((char *)&word_26CBEC + i * 4)
        && (unsigned __int16 *)dword_26CDF8[i] == *this )
      {
        v4 = 1;
      }
    }
    if ( !v4 )
    {
LABEL_5:
      PFEOBJ::vFreePql((PFEOBJ *)&v10);
      v10 = this[1];
      if ( v10 )
        PFEOBJ::vFreePql((PFEOBJ *)&v10);
      v5 = prfntDeactivateEudcRFONTs(this);
      vKillEudcRFONTs(v5);
    }
    if ( !PFTOBJ::bUnloadEUDCFont((PFTOBJ *)(i * 4), v2) )
      v3 = 0;
  }
  Win32FreePool(v2);
  return v3;
}
