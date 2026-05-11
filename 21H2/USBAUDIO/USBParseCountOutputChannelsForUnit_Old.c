/*
 * XREFs of USBParseCountOutputChannelsForUnit_Old @ 0x1C002FAC0
 * Callers:
 *     USBParseCountOutputChannelsForUnit_Old @ 0x1C002FAC0 (USBParseCountOutputChannelsForUnit_Old.c)
 *     USBParseTerminalUnit @ 0x1C002FF90 (USBParseTerminalUnit.c)
 *     USBParseMixerUnit @ 0x1C00301E0 (USBParseMixerUnit.c)
 *     USBParseSelectorUnit @ 0x1C0030560 (USBParseSelectorUnit.c)
 *     USBParseFeatureUnit @ 0x1C0030740 (USBParseFeatureUnit.c)
 *     USBParseProcessUnit @ 0x1C0030A60 (USBParseProcessUnit.c)
 *     USBParseExtensionUnit @ 0x1C0030D70 (USBParseExtensionUnit.c)
 * Callees:
 *     USBParseGetUnit @ 0x1C002F824 (USBParseGetUnit.c)
 *     USBParseCountOutputChannelsForUnit_Old @ 0x1C002FAC0 (USBParseCountOutputChannelsForUnit_Old.c)
 */

__int64 __fastcall USBParseCountOutputChannelsForUnit_Old(unsigned __int16 *a1, char *a2, int a3)
{
  unsigned int v5; // ebx
  unsigned __int8 *Unit; // rax
  __int64 v7; // r8

  v5 = 0;
  Unit = USBParseGetUnit(a1, a2, a3);
  if ( !Unit )
    return v5;
  switch ( Unit[2] )
  {
    case 2u:
      return Unit[7];
    case 3u:
      v7 = Unit[7];
      return (unsigned int)USBParseCountOutputChannelsForUnit_Old(a1, a2, v7);
    case 4u:
      return Unit[Unit[4] + 5];
    case 5u:
      v7 = Unit[5];
      return (unsigned int)USBParseCountOutputChannelsForUnit_Old(a1, a2, v7);
    case 6u:
      v7 = Unit[4];
      return (unsigned int)USBParseCountOutputChannelsForUnit_Old(a1, a2, v7);
  }
  if ( (unsigned int)Unit[2] - 7 <= 1 )
    return Unit[Unit[6] + 7];
  return v5;
}
