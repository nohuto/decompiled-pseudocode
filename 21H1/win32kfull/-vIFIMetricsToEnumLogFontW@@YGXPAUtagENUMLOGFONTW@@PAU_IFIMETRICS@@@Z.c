/*
 * XREFs of ?vIFIMetricsToEnumLogFontW@@YGXPAUtagENUMLOGFONTW@@PAU_IFIMETRICS@@@Z @ 0x89836
 * Callers:
 *     ?bIFIMetricsToLogFontW2@@YGHAAVDCOBJ@@PAUtagENUMLOGFONTEXW@@PAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x897A0 (-bIFIMetricsToLogFontW2@@YGHAAVDCOBJ@@PAUtagENUMLOGFONTEXW@@PAU_IFIMETRICS@@VEFLOATEXT@@@Z.c)
 *     _vIFIMetricsToEnumLogFontExDvW@8 @ 0xDBF4C (_vIFIMetricsToEnumLogFontExDvW@8.c)
 * Callees:
 *     ?lfOrientation@IFIOBJ@@QAEJXZ @ 0x8991C (-lfOrientation@IFIOBJ@@QAEJXZ.c)
 */

void __fastcall vIFIMetricsToEnumLogFontW(int a1, int a2)
{
  int v4; // eax
  char v5; // al
  _DWORD v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  v6[0] = a2;
  *(_DWORD *)a1 = *(__int16 *)(a2 + 60) + *(__int16 *)(a2 + 62);
  *(_DWORD *)(a1 + 4) = *(__int16 *)(a2 + 76);
  *(_DWORD *)(a1 + 16) = *(unsigned __int16 *)(a2 + 46);
  *(_BYTE *)(a1 + 20) = -((*(_BYTE *)(a2 + 52) & 1) != 0);
  *(_BYTE *)(a1 + 21) = *(_BYTE *)(a2 + 52) & 2;
  *(_BYTE *)(a1 + 22) = *(_BYTE *)(a2 + 52) & 0x10;
  *(_BYTE *)(a1 + 23) = *(_BYTE *)(a2 + 44);
  *(_DWORD *)(a1 + 8) = IFIOBJ::lfOrientation((IFIOBJ *)v6);
  *(_DWORD *)(a1 + 12) = IFIOBJ::lfOrientation((IFIOBJ *)v6);
  *(_BYTE *)(a1 + 27) = *(_BYTE *)(a2 + 45);
  v4 = *(_DWORD *)(a2 + 48);
  if ( (v4 & 1) == 0 )
  {
    if ( (v4 & 2) != 0 )
    {
      v5 = 1;
      goto LABEL_3;
    }
    if ( (v4 & 4) == 0 )
    {
      v5 = (v4 & 8) != 0 ? 3 : 0;
      goto LABEL_3;
    }
  }
  v5 = 3;
LABEL_3:
  *(_BYTE *)(a1 + 24) = v5;
  *(_WORD *)(a1 + 25) = 258;
  _wcsncpy_s((wchar_t *)(a1 + 28), 0x20u, (const wchar_t *)(a2 + *(_DWORD *)(a2 + 8)), 0x1Fu);
  *(_WORD *)(a1 + 90) = 0;
  _wcsncpy_s((wchar_t *)(a1 + 92), 0x40u, (const wchar_t *)(a2 + *(_DWORD *)(a2 + 16)), 0x3Fu);
  *(_WORD *)(a1 + 218) = 0;
  _wcsncpy_s((wchar_t *)(a1 + 220), 0x20u, (const wchar_t *)(a2 + *(_DWORD *)(a2 + 12)), 0x1Fu);
  *(_WORD *)(a1 + 282) = 0;
}
