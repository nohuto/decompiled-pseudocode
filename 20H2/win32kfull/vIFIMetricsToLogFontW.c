/*
 * XREFs of vIFIMetricsToLogFontW @ 0x1C02A68BC
 * Callers:
 *     GetFontResourceInfoInternalW @ 0x1C02D9D28 (GetFontResourceInfoInternalW.c)
 * Callees:
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1C005CEF8 (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     ?lfOutPrecision@IFIOBJ@@QEBAEXZ @ 0x1C0112C80 (-lfOutPrecision@IFIOBJ@@QEBAEXZ.c)
 */

errno_t __fastcall vIFIMetricsToLogFontW(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rax
  char v6; // cl
  errno_t result; // eax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

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
  v5 = *(int *)(a2 + 40);
  if ( (_DWORD)v5 )
    v6 = *(_BYTE *)(v5 + a2);
  else
    v6 = *(_BYTE *)(a2 + 44);
  *(_BYTE *)(a1 + 23) = v6;
  *(_BYTE *)(a1 + 24) = IFIOBJ::lfOutPrecision((IFIOBJ *)v8);
  *(_WORD *)(a1 + 25) = 512;
  *(_BYTE *)(a1 + 27) = *(_BYTE *)(a2 + 45);
  result = wcsncpy_s((wchar_t *)(a1 + 28), 0x20uLL, (const wchar_t *)(a2 + *(int *)(a2 + 8)), 0x1FuLL);
  *(_WORD *)(a1 + 90) = 0;
  return result;
}
