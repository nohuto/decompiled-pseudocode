/*
 * XREFs of ?flEudcFontBoldSimFlags@LFONTOBJ@@QBEKG@Z @ 0x207B2F
 * Callers:
 *     ?vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z @ 0x207D5B (-vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall LFONTOBJ::flEudcFontBoldSimFlags(LFONTOBJ *this, unsigned __int16 a2)
{
  int v2; // ecx
  int v3; // edx

  v2 = *(_DWORD *)(*(_DWORD *)this + 296);
  if ( !v2 )
    v2 = 400;
  v3 = 0;
  if ( a2 - v2 < 0 )
    return 0x2000;
  return v3;
}
