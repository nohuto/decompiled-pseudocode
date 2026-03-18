/*
 * XREFs of ?bCheckFamilyName@PFEOBJ@@QAEHPBGHPAH@Z @ 0xDDD0C
 * Callers:
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 *     vLinkEudcPFEsWorker @ 0xDC252 (vLinkEudcPFEsWorker.c)
 *     ?bAddEntry@PFFMEMOBJ@@QAEHKPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z @ 0xDC606 (-bAddEntry@PFFMEMOBJ@@QAEHKPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOA.c)
 *     ?vGetEUDC@PFFOBJ@@QAEXPAU_EUDCLOAD@@@Z @ 0xDDC50 (-vGetEUDC@PFFOBJ@@QAEXPAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall PFEOBJ::bCheckFamilyName(PFEOBJ *this, wchar_t *Str1, int a3, int *a4)
{
  const wchar_t *v5; // esi
  BOOL v6; // ecx
  const wchar_t *v7; // esi

  if ( a4 )
    *a4 = 0;
  v5 = (const wchar_t *)(*(_DWORD *)(*(_DWORD *)this + 20) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 20) + 8));
  if ( a3 && *v5 == 64 )
    ++v5;
  if ( !__wcsicmp(Str1, v5) )
    return 1;
  v6 = 0;
  if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 20) + 48) & 0x8000000) != 0 )
  {
    v7 = &v5[wcslen(v5) + 1];
    do
    {
      if ( !*v7 )
        break;
      if ( a3 && *v7 == 64 )
        ++v7;
      v6 = __wcsicmp(Str1, v7) == 0;
      v7 += wcslen(v7) + 1;
    }
    while ( !v6 );
    if ( a4 )
      *a4 = v6;
  }
  return v6;
}
