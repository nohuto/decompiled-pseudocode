/*
 * XREFs of ?FindBaseFontEntry@@YGPAU_FLENTRY@@PBG@Z @ 0xDD294
 * Callers:
 *     vLinkEudcPFEsWorker @ 0xDC252 (vLinkEudcPFEsWorker.c)
 *     ?bAddEntry@PFFMEMOBJ@@QAEHKPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z @ 0xDC606 (-bAddEntry@PFFMEMOBJ@@QAEHKPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOA.c)
 *     bAddFlEntry @ 0xDCD78 (bAddFlEntry.c)
 *     bDeleteFlEntry @ 0x1F84B8 (bDeleteFlEntry.c)
 *     _NtGdiGetEudcTimeStampEx@12 @ 0x1F9563 (_NtGdiGetEudcTimeStampEx@12.c)
 * Callees:
 *     <none>
 */

const wchar_t *__thiscall FindBaseFontEntry(const wchar_t *this)
{
  const wchar_t *v1; // esi
  const wchar_t *v3; // edi
  const wchar_t *v4; // eax

  v1 = (const wchar_t *)off_266348;
  v3 = 0;
  if ( off_266348 != (_UNKNOWN *)&off_266348 )
  {
    do
    {
      v3 = v1;
      v4 = this;
      if ( *this == 64 )
        v4 = this + 1;
      if ( !__wcsicmp(v4, &v1[(v1[8] == 64) + 8]) )
        break;
      v1 = *(const wchar_t **)v1;
      v3 = 0;
    }
    while ( v1 != (const wchar_t *)&off_266348 );
  }
  return v3;
}
