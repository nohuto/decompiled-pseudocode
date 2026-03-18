/*
 * XREFs of ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C02A69A4
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00659FC (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C01452C4 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0023EE8 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0025A70 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bInitSystemTT(RFONTOBJ *this, struct XDCOBJ *a2)
{
  unsigned int v3; // esi
  int v5; // ebx
  struct PFE *v6; // r8
  _OWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)this + 844LL);
  v9 = 0LL;
  memset(v8, 0, sizeof(v8));
  RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)v8, a2);
  v6 = *(struct PFE **)((char *)&gappfeSystemDBCS + (v5 != 0 ? 8 : 0));
  if ( !v6 )
    v6 = gappfeSystemDBCS;
  RFONTOBJ::vInit((RFONTOBJ *)&v9, a2, v6, (struct _EUDCLOGFONT *)v8);
  if ( v9 )
    *(_QWORD *)(*(_QWORD *)this + 720LL) = v9;
  LOBYTE(v3) = *(_QWORD *)(*(_QWORD *)this + 720LL) != 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
  return v3;
}
