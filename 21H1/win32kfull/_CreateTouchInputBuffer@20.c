/*
 * XREFs of _CreateTouchInputBuffer@20 @ 0x14B172
 * Callers:
 *     ?xxxSendToTouchStack@@YGXPAUDEVICEINFO@@IPAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x149ACB (-xxxSendToTouchStack@@YGXPAUDEVICEINFO@@IPAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

BOOL __fastcall CreateTouchInputBuffer(int a1, int a2, int a3, int a4, ULONG a5)
{
  int v5; // esi
  int v7; // eax
  CHAR *v8; // edi
  struct _HIDP_PREPARSED_DATA *v9; // ecx
  unsigned int v10; // ecx
  unsigned int v12; // eax
  int v13; // esi
  int v14; // eax
  ULONG v15; // esi
  ULONG v17; // [esp-4h] [ebp-D0h]
  ULONG v18[34]; // [esp+10h] [ebp-BCh] BYREF
  int v19; // [esp+9Ch] [ebp-30h]
  unsigned int v20; // [esp+A0h] [ebp-2Ch]
  ULONG v21; // [esp+A4h] [ebp-28h] BYREF
  ULONG v22; // [esp+A8h] [ebp-24h] BYREF
  ULONG UsageLength; // [esp+ACh] [ebp-20h] BYREF
  PCHAR Report; // [esp+B0h] [ebp-1Ch]
  USHORT LinkCollection[2]; // [esp+B4h] [ebp-18h]
  USHORT UsageList; // [esp+B8h] [ebp-14h] BYREF
  USHORT v27; // [esp+BAh] [ebp-12h] BYREF
  USHORT v28; // [esp+BCh] [ebp-10h] BYREF
  ULONG ReportLength; // [esp+C0h] [ebp-Ch]
  PHIDP_PREPARSED_DATA PreparsedData; // [esp+C4h] [ebp-8h]
  int v31; // [esp+D8h] [ebp+Ch]

  UsageList = 66;
  v27 = 50;
  LOWORD(v5) = 1;
  UsageLength = 2;
  v28 = 207;
  v7 = *(_DWORD *)(a1 + 276);
  v22 = 1;
  v21 = 1;
  v19 = a2;
  v9 = *(struct _HIDP_PREPARSED_DATA **)(v7 + 8);
  v17 = *(unsigned __int16 *)(v7 + 24);
  Report = *(PCHAR *)(v7 + 12);
  v8 = Report;
  PreparsedData = v9;
  ReportLength = v17;
  memset(Report, 0, v17);
  v10 = a2 - 1;
  *(_DWORD *)LinkCollection = 1;
  v20 = v10;
  do
  {
    v12 = a4 + (unsigned __int16)(v5 - 1);
    if ( v12 > v10 )
      break;
    qmemcpy(v18, (const void *)(a3 + 136 * v12), sizeof(v18));
    v8 = Report;
    v13 = *(_DWORD *)LinkCollection;
    if ( HidP_SetUsageValue(HidP_Input, 0xDu, LinkCollection[0], 0x51u, v18[1], PreparsedData, Report, ReportLength) < 0
      || HidP_SetUsageValue(HidP_Input, 1u, v13, 0x30u, v18[6], PreparsedData, v8, ReportLength) < 0
      || HidP_SetUsageValue(HidP_Input, 1u, v13, 0x31u, v18[7], PreparsedData, v8, ReportLength) < 0 )
    {
      return 0;
    }
    v14 = v18[3] & 4;
    v31 = v14;
    if ( (v18[3] & 4) != 0 )
    {
      if ( HidP_SetUsages(HidP_Input, 0xDu, v13, &UsageList, &UsageLength, PreparsedData, v8, ReportLength) < 0 )
        return 0;
      v14 = v31;
    }
    if ( (v18[3] & 2) != 0
      && !v14
      && HidP_SetUsages(HidP_Input, 0xDu, v13, &v27, &v22, PreparsedData, v8, ReportLength) < 0
      || (v18[3] & 0x8000) != 0
      && HidP_SetUsages(HidP_Input, 0xFF00u, v13, &v28, &v21, PreparsedData, v8, ReportLength) < 0
      || (v18[23] & 4) != 0
      && HidP_SetUsageValue(HidP_Input, 0xDu, v13, 0x30u, v18[33], PreparsedData, v8, ReportLength) < 0
      || (v18[23] & 2) != 0
      && HidP_SetUsageValue(HidP_Input, 0xDu, v13, 0x3Fu, v18[32], PreparsedData, v8, ReportLength) < 0
      || (v18[23] & 1) != 0
      && (HidP_SetUsageValue(HidP_Input, 0xDu, v13, 0x48u, abs32(v18[26] - v18[24]), PreparsedData, v8, ReportLength) < 0
       || HidP_SetUsageValue(HidP_Input, 0xDu, v13, 0x49u, abs32(v18[27] - v18[25]), PreparsedData, v8, ReportLength) < 0) )
    {
      return 0;
    }
    v5 = v13 + 1;
    *(_DWORD *)LinkCollection = v5;
    v10 = v20;
  }
  while ( (unsigned __int16)(v5 - 1) < 4u );
  v15 = ReportLength;
  return HidP_SetUsageValue(HidP_Input, 0xDu, 0, 0x54u, a4 == 0 ? v19 : 0, PreparsedData, v8, ReportLength) >= 0
      && (!a5 || HidP_SetUsageValue(HidP_Input, 0xDu, 0, 0x56u, a5, PreparsedData, v8, v15) >= 0);
}
