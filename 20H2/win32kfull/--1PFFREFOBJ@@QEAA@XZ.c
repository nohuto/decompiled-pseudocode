/*
 * XREFs of ??1PFFREFOBJ@@QEAA@XZ @ 0x1C015EA7C
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1C01558D0 (NtGdiGetFontFileInfo.c)
 *     NtGdiGetFontFileData @ 0x1C02BA760 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00646D8 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFREFOBJ::~PFFREFOBJ(PFFREFOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    if ( !*((_DWORD *)this + 4) )
      PFFOBJ::vDeleteRFONTRef(this);
  }
}
