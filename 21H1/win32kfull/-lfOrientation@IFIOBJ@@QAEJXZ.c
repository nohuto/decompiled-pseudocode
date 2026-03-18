/*
 * XREFs of ?lfOrientation@IFIOBJ@@QAEJXZ @ 0x8991C
 * Callers:
 *     ?vIFIMetricsToEnumLogFontW@@YGXPAUtagENUMLOGFONTW@@PAU_IFIMETRICS@@@Z @ 0x89836 (-vIFIMetricsToEnumLogFontW@@YGXPAUtagENUMLOGFONTW@@PAU_IFIMETRICS@@@Z.c)
 *     ?bInit@PFEMEMOBJ@@QAEHPAVPFF@@KPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KHPAU_UNIVERSAL_FONT_ID@@H@Z @ 0xDC780 (-bInit@PFEMEMOBJ@@QAEHPAVPFF@@KPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KHPAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     _vIFIMetricsToLogFontW@8 @ 0x206CAD (_vIFIMetricsToLogFontW@8.c)
 * Callees:
 *     ??XEFLOATEXT@@QAEXJ@Z @ 0x89976 (--XEFLOATEXT@@QAEXJ@Z.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     ?vArctan@@YGXVEFLOAT@@0AAV1@AAJ@Z @ 0x215329 (-vArctan@@YGXVEFLOAT@@0AAV1@AAJ@Z.c)
 */

int __thiscall IFIOBJ::lfOrientation(IFIOBJ *this)
{
  int v2; // esi
  int v3; // edx
  int v4; // ecx
  int v6; // eax
  int v7; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v8[2]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v9[2]; // [esp+18h] [ebp-10h] BYREF
  _DWORD v10[2]; // [esp+20h] [ebp-8h] BYREF

  v2 = *(_DWORD *)this;
  v3 = (*(_DWORD *)(*(_DWORD *)this + 120) > 0) - (*(_DWORD *)(*(_DWORD *)this + 120) >> 31);
  v4 = (*(_DWORD *)(*(_DWORD *)this + 124) > 0) - (*(_DWORD *)(*(_DWORD *)this + 124) >> 31);
  if ( (((unsigned __int8)v3 ^ (unsigned __int8)v4) & 1) != 0 )
    return v3 & 0x708 | v4 & 0xA8C | -v4 & 0x384;
  v7 = 0;
  ltoef_c(*(_DWORD *)(v2 + 120), v10);
  ltoef_c(*(_DWORD *)(*(_DWORD *)this + 124), v9);
  v8[0] = 0;
  v8[1] = 0;
  vArctan(v8, &v7, v10[0], v10[1], v9[0], v9[1]);
  EFLOATEXT::operator*=(10);
  v6 = eftol_c(v8, &v7, 1);
  return v6 != 0 ? v7 : 0;
}
