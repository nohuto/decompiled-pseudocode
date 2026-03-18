/*
 * XREFs of ??1PFFREFOBJ@@QEAA@XZ @ 0x1C015B528
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1C0152FA0 (NtGdiGetFontFileInfo.c)
 *     NtGdiGetFontFileData @ 0x1C02BBCC0 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00DC92C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFREFOBJ::~PFFREFOBJ(PFFREFOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    if ( !*((_DWORD *)this + 4) )
      PFFOBJ::vDeleteRFONTRef(this);
  }
}
