/*
 * XREFs of USBParseCountOutputChannelsForUnit @ 0x1C002F994
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

__int64 __fastcall USBParseCountOutputChannelsForUnit(unsigned __int16 *a1, char *a2, int a3, _DWORD *a4)
{
  unsigned int v4; // edi
  unsigned __int8 *v6; // rsi
  unsigned __int8 *Unit; // rax
  unsigned __int64 v10; // r8
  unsigned __int8 v11; // cl
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rdx

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
    if ( Unit[2] == 2 )
    {
      if ( (unsigned __int8)v10 >= 0xCu )
      {
        v14 = Unit[7];
        goto LABEL_27;
      }
      return 3221225473LL;
    }
    if ( Unit[2] == 3 )
    {
      if ( (unsigned __int8)v10 < 9u )
        return 3221225473LL;
      v11 = Unit[7];
      goto LABEL_15;
    }
    if ( Unit[2] == 4 )
      break;
    if ( Unit[2] == 5 )
    {
      if ( (unsigned __int8)v10 <= 5u )
        return 3221225473LL;
      v11 = Unit[5];
    }
    else
    {
      if ( Unit[2] != 6 )
      {
        if ( (unsigned int)Unit[2] - 7 >= 2 )
        {
          *a4 = 0;
          return 0LL;
        }
        if ( (unsigned __int8)v10 >= 7u )
        {
          v13 = Unit[6];
          if ( v10 >= v13 + 7 )
          {
            v14 = Unit[v13 + 7];
LABEL_27:
            *a4 = v14;
            return 0LL;
          }
        }
        return 3221225473LL;
      }
      if ( (unsigned __int8)v10 < 6u )
        return 3221225473LL;
      v11 = Unit[4];
    }
LABEL_15:
    ++v4;
    a3 = v11;
    if ( v4 >= 0x3E8 )
      return 0LL;
  }
  if ( (unsigned __int8)v10 >= 5u )
  {
    v15 = Unit[4];
    if ( v10 >= v15 + 5 )
    {
      v14 = Unit[v15 + 5];
      goto LABEL_27;
    }
  }
  return 3221225473LL;
}
