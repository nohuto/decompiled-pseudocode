/*
 * XREFs of USBParseSelectorUnit @ 0x1C002F7B0
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C002AFD4 (BusApiBuildFunctionUnit.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C002F0A8 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C002F150 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C002F1F4 (USBParseGetUnitString.c)
 *     USBParseBuildSourceIdArray @ 0x1C002F354 (USBParseBuildSourceIdArray.c)
 */

__int64 __fastcall USBParseSelectorUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  const WCHAR *SourceString; // rbp
  int v5; // edx
  __int64 v7; // r13
  int UnitString; // ebx
  int v9; // eax
  int *v10; // r15
  unsigned int v11; // edi
  int ChannelConfigForUnit; // ebx
  int v13; // eax
  int v14; // edx
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  SourceString = 0LL;
  v16 = 0LL;
  v5 = a2[4];
  v7 = *(_QWORD *)(v2 + 72);
  if ( !(_BYTE)v5 )
    return (unsigned int)-1073741438;
  v9 = *a2 - 6;
  if ( v9 == v5 )
  {
    UnitString = USBParseGetUnitString(a1, a2, &v16);
    if ( UnitString < 0 )
      return (unsigned int)UnitString;
    SourceString = (const WCHAR *)v16;
  }
  else if ( v9 + 1 != v5 )
  {
    return (unsigned int)-1073741438;
  }
  v10 = USBParseBuildSourceIdArray(a2[4], a2 + 5);
  if ( v10 )
  {
    v11 = a2[4];
    ChannelConfigForUnit = USBParseGetChannelConfigForUnit(*(unsigned __int16 **)(v7 + 40), *(char **)(v7 + 48), a2[3]);
    v13 = USBParseCountOutputChannelsForUnit(*(unsigned __int16 **)(v7 + 40), *(char **)(v7 + 48), a2[3]);
    v14 = a2[3];
    v16 = 0LL;
    UnitString = BusApiBuildFunctionUnit(a1, v14, 3, v13, ChannelConfigForUnit, v11, v10, SourceString, 0, &v16);
    ExFreePool(v10);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)UnitString;
}
