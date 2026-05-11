/*
 * XREFs of USBParseGetChannelConfigForUnit @ 0x1C002FB68
 * Callers:
 *     USBParseTerminalUnit @ 0x1C002FF90 (USBParseTerminalUnit.c)
 *     USBParseMixerUnit @ 0x1C00301E0 (USBParseMixerUnit.c)
 *     USBParseSelectorUnit @ 0x1C0030560 (USBParseSelectorUnit.c)
 *     USBParseFeatureUnit @ 0x1C0030740 (USBParseFeatureUnit.c)
 *     USBParseProcessUnit @ 0x1C0030A60 (USBParseProcessUnit.c)
 *     USBParseExtensionUnit @ 0x1C0030D70 (USBParseExtensionUnit.c)
 * Callees:
 *     USBParseGetUnit @ 0x1C002F824 (USBParseGetUnit.c)
 */

__int64 __fastcall USBParseGetChannelConfigForUnit(unsigned __int16 *a1, char *a2, int a3, _DWORD *a4)
{
  unsigned int v4; // edi
  unsigned __int8 *v6; // rsi
  unsigned __int8 *Unit; // rax
  unsigned __int64 v10; // rdx
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // cl
  __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // r8

  *a4 = 0;
  v4 = 0;
  v6 = (unsigned __int8 *)a1 + a1[1];
  while ( 1 )
  {
    Unit = USBParseGetUnit(a1, a2, a3);
    if ( !Unit )
      return 0LL;
    v10 = *Unit;
    if ( &Unit[v10] > v6 )
      return 3221225473LL;
    v11 = Unit[2];
    switch ( v11 )
    {
      case 2u:
        if ( (unsigned __int8)v10 < 0xCu )
          return 3221225473LL;
        v15 = *((unsigned __int16 *)Unit + 4);
LABEL_26:
        *a4 = v15;
        return 0LL;
      case 3u:
        if ( (unsigned __int8)v10 < 9u )
          return 3221225473LL;
        v12 = Unit[7];
        goto LABEL_15;
      case 4u:
        if ( (unsigned __int8)v10 < 5u )
          return 3221225473LL;
        v16 = Unit[4];
        if ( v10 < v16 + 9 )
          return 3221225473LL;
        v15 = *(unsigned __int16 *)&Unit[v16 + 6];
        goto LABEL_26;
      case 5u:
        if ( (unsigned __int8)v10 <= 5u )
          return 3221225473LL;
        v12 = Unit[5];
        goto LABEL_15;
    }
    if ( v11 != 6 )
      break;
    if ( (unsigned __int8)v10 < 6u )
      return 3221225473LL;
    v12 = Unit[4];
LABEL_15:
    ++v4;
    a3 = v12;
    if ( v4 >= 0x3E8 )
      return 0LL;
  }
  if ( (unsigned __int8)(v11 - 7) > 1u )
    return 0LL;
  if ( (unsigned __int8)v10 >= 7u )
  {
    v14 = Unit[6];
    if ( v10 >= v14 + 12 )
    {
      v15 = *(unsigned __int16 *)&Unit[v14 + 8];
      goto LABEL_26;
    }
  }
  return 3221225473LL;
}
