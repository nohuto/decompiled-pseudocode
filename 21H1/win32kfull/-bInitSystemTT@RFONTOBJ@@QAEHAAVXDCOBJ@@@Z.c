/*
 * XREFs of ?bInitSystemTT@RFONTOBJ@@QAEHAAVXDCOBJ@@@Z @ 0x2078D5
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z @ 0xC0F30 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QAEHAAVXDCOBJ@@PAU_UNIVERSAL_FONT_ID@@H@Z @ 0x207544 (-GetLinkedFontUFIs@RFONTOBJ@@QAEHAAVXDCOBJ@@PAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QAEXPAU_EUDCLOGFONT@@AAVXDCOBJ@@@Z @ 0x206DB5 (-ComputeEUDCLogfont@RFONTOBJ@@QAEXPAU_EUDCLOGFONT@@AAVXDCOBJ@@@Z.c)
 *     ?vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z @ 0x207D5B (-vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z.c)
 */

BOOL __thiscall RFONTOBJ::bInitSystemTT(RFONTOBJ *this, struct XDCOBJ *a2)
{
  int v3; // esi
  int v4; // ecx
  struct PFE *v5; // eax
  BOOL v6; // ebx
  int v8; // [esp+10h] [ebp-30h] BYREF
  struct XDCOBJ *v9; // [esp+14h] [ebp-2Ch]
  _BYTE v10[36]; // [esp+18h] [ebp-28h] BYREF

  v9 = a2;
  v3 = *(_DWORD *)(*(_DWORD *)this + 784);
  v8 = 0;
  memset(v10, 0, sizeof(v10));
  RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)v10, (HDC **)a2);
  v5 = *(struct PFE **)((char *)&gappfeSystemDBCS + (v3 != 0 ? 4 : 0));
  if ( !v5 )
    v5 = (struct PFE *)gappfeSystemDBCS;
  RFONTOBJ::vInit((RFONTOBJ *)&v8, v9, v5, (struct _EUDCLOGFONT *)v10, v4);
  if ( v8 )
    *(_DWORD *)(*(_DWORD *)this + 716) = v8;
  v6 = *(_DWORD *)(*(_DWORD *)this + 716) != 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
  return v6;
}
