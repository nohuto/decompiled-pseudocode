/*
 * XREFs of ?GetEUDCDefaultFontPFE@RFONTOBJ@@AAEPAVPFE@@I@Z @ 0x2074B9
 * Callers:
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QAEHAAVXDCOBJ@@PAU_UNIVERSAL_FONT_ID@@H@Z @ 0x207544 (-GetLinkedFontUFIs@RFONTOBJ@@QAEHAAVXDCOBJ@@PAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x208150 (-vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

struct PFE *__thiscall RFONTOBJ::GetEUDCDefaultFontPFE(RFONTOBJ *this, unsigned int a2)
{
  int v2; // esi
  int v3; // eax
  unsigned __int8 v4; // cl
  unsigned int v5; // edx
  unsigned int v6; // ecx

  v2 = 0;
  v3 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 80) + 20);
  v4 = *(_BYTE *)(v3 + 44);
  v5 = *(unsigned __int8 *)(v3 + 45) >> 4;
  if ( (!v4 || v4 == 2 || v4 == 255) && ((unsigned __int8)fFontAssocStatus & (unsigned __int8)(v4 + 2) & 0xF) != 0 )
  {
    if ( v5 >= 7 || !*(&FontAssocDefaultTable + 164 * v5) )
      v5 = 6;
    v6 = a2;
    if ( a2 == 1 && !dword_26CDFC[164 * v5] )
      v6 = dword_26CDF8[164 * v5] == 0;
    return (struct PFE *)dword_26CDF8[164 * v5 + v6];
  }
  return (struct PFE *)v2;
}
