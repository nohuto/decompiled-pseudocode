/*
 * XREFs of ??1PFFREFOBJ@@QAE@XZ @ 0xF830F
 * Callers:
 *     _NtGdiGetFontFileInfo@20 @ 0xACC7C (_NtGdiGetFontFileInfo@20.c)
 *     _NtGdiGetFontFileData@20 @ 0x221DD2 (_NtGdiGetFontFileData@20.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QAEXXZ @ 0xACDB4 (-vDeleteRFONTRef@PFFOBJ@@QAEXXZ.c)
 */

void __thiscall PFFREFOBJ::~PFFREFOBJ(PFFREFOBJ *this)
{
  if ( *(_DWORD *)this )
  {
    if ( !*((_DWORD *)this + 2) )
      PFFOBJ::vDeleteRFONTRef(this);
  }
}
