/*
 * XREFs of _vIFIMetricsToLogFontW@8 @ 0x206CAD
 * Callers:
 *     _GetFontResourceInfoInternalW@28 @ 0x24757E (_GetFontResourceInfoInternalW@28.c)
 * Callees:
 *     ?lfOrientation@IFIOBJ@@QAEJXZ @ 0x8991C (-lfOrientation@IFIOBJ@@QAEJXZ.c)
 *     ?lfOutPrecision@IFIOBJ@@QBEEXZ @ 0x8999C (-lfOutPrecision@IFIOBJ@@QBEEXZ.c)
 */

int __fastcall vIFIMetricsToLogFontW(int a1, int a2)
{
  int v4; // eax
  int v5; // eax
  char v6; // al
  int result; // eax
  _DWORD v8[3]; // [esp+8h] [ebp-Ch] BYREF

  v8[0] = a2;
  if ( (*(_DWORD *)(a2 + 48) & 0x3000010) != 0 )
  {
    *(_DWORD *)a1 = -24;
    v4 = 0;
  }
  else
  {
    *(_DWORD *)a1 = *(__int16 *)(a2 + 60) + *(__int16 *)(a2 + 62);
    v4 = *(__int16 *)(a2 + 76);
  }
  *(_DWORD *)(a1 + 4) = v4;
  *(_DWORD *)(a1 + 16) = *(unsigned __int16 *)(a2 + 46);
  *(_BYTE *)(a1 + 20) = -((*(_BYTE *)(a2 + 52) & 1) != 0);
  *(_BYTE *)(a1 + 21) = *(_BYTE *)(a2 + 52) & 2;
  *(_BYTE *)(a1 + 22) = *(_BYTE *)(a2 + 52) & 0x10;
  *(_DWORD *)(a1 + 8) = IFIOBJ::lfOrientation((IFIOBJ *)v8);
  *(_DWORD *)(a1 + 12) = IFIOBJ::lfOrientation((IFIOBJ *)v8);
  v5 = *(_DWORD *)(a2 + 40);
  if ( v5 )
    v6 = *(_BYTE *)(v5 + a2);
  else
    v6 = *(_BYTE *)(a2 + 44);
  *(_BYTE *)(a1 + 23) = v6;
  *(_BYTE *)(a1 + 24) = IFIOBJ::lfOutPrecision((IFIOBJ *)v8);
  *(_WORD *)(a1 + 25) = 512;
  *(_BYTE *)(a1 + 27) = *(_BYTE *)(a2 + 45);
  _wcsncpy_s((wchar_t *)(a1 + 28), 0x20u, (const wchar_t *)(a2 + *(_DWORD *)(a2 + 8)), 0x1Fu);
  result = 0;
  *(_WORD *)(a1 + 90) = 0;
  return result;
}
