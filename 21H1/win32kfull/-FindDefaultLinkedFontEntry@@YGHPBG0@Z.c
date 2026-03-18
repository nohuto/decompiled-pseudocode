/*
 * XREFs of ?FindDefaultLinkedFontEntry@@YGHPBG0@Z @ 0x1F7A45
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QAEHPBGKPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z @ 0xDC500 (-bLoadFontFileTable@PFFMEMOBJ@@QAEHPBGKPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x8A554 (-StringCchCopyW@@YGJPAGIPBG@Z.c)
 */

int __fastcall FindDefaultLinkedFontEntry(const wchar_t *a1, size_t a2)
{
  unsigned __int16 *v3; // esi
  unsigned int v4; // edi
  unsigned int v6; // [esp+0h] [ebp-10h]
  const unsigned __int16 *v7; // [esp+4h] [ebp-Ch]

  v3 = &word_26CBEC;
  v4 = 0;
  while ( !*((_DWORD *)v3 - 31) || *v3 || __wcsicmp(a1, v3 - 33) || StringCchCopyW(a2, v6, v7) >= 0 )
  {
    v4 += 656;
    v3 += 328;
    if ( v4 >= 0x11F0 )
      return 1;
  }
  return 0;
}
