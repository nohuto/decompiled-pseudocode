/*
 * XREFs of USBParseSelectorUnit @ 0x1C0030560
 * Callers:
 *     <none>
 * Callees:
 *     Feature_3207179578__private_IsEnabledDeviceUsage @ 0x1C0004610 (Feature_3207179578__private_IsEnabledDeviceUsage.c)
 *     Feature_3052163386__private_IsEnabledDeviceUsage @ 0x1C000470C (Feature_3052163386__private_IsEnabledDeviceUsage.c)
 *     BusApiBuildFunctionUnit @ 0x1C002B504 (BusApiBuildFunctionUnit.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C002F994 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseCountOutputChannelsForUnit_Old @ 0x1C002FAC0 (USBParseCountOutputChannelsForUnit_Old.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C002FB68 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetChannelConfigForUnit_Old @ 0x1C002FC80 (USBParseGetChannelConfigForUnit_Old.c)
 *     USBParseGetUnitString @ 0x1C002FD24 (USBParseGetUnitString.c)
 *     USBParseBuildSourceIdArray @ 0x1C002FF10 (USBParseBuildSourceIdArray.c)
 */

__int64 __fastcall USBParseSelectorUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  int UnitString; // ebx
  const WCHAR *SourceString; // r12
  int v10; // eax
  int *v12; // r15
  int IsEnabledDeviceUsage; // eax
  int v14; // r8d
  char *v15; // rdx
  unsigned __int16 *v16; // rcx
  int v17; // eax
  unsigned int v18; // edi
  int ChannelConfigForUnit_Old; // ebx
  int v20; // eax
  unsigned int v21; // [rsp+28h] [rbp-28h]
  __int64 v22; // [rsp+90h] [rbp+40h] BYREF
  int v23; // [rsp+98h] [rbp+48h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+50h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v5 = *(_QWORD *)(v4 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v4 + 40) + 2LL);
  if ( !(unsigned int)Feature_3052163386__private_IsEnabledDeviceUsage() )
  {
    LOBYTE(v6) = a2[4];
    goto LABEL_6;
  }
  v7 = *a2;
  if ( (unsigned __int8)v7 >= 5u && (unsigned __int64)&a2[v7] <= v5 )
  {
    v6 = a2[4];
    if ( (unsigned __int64)&a2[v6 + 5] <= v5 )
    {
LABEL_6:
      v22 = 0LL;
      UnitString = 0;
      SourceString = 0LL;
      if ( !(_BYTE)v6 )
        return (unsigned int)-1073741670;
      v10 = *a2 - 6;
      if ( v10 == (unsigned __int8)v6 )
      {
        UnitString = USBParseGetUnitString(a1, a2, &v22);
        if ( UnitString < 0 )
          return (unsigned int)-1073741670;
        SourceString = (const WCHAR *)v22;
      }
      else if ( v10 + 1 != (unsigned __int8)v6 )
      {
        return (unsigned int)-1073741670;
      }
      v12 = USBParseBuildSourceIdArray(a2[4], a2 + 5);
      if ( !v12 )
        return (unsigned int)UnitString;
      IsEnabledDeviceUsage = Feature_3207179578__private_IsEnabledDeviceUsage();
      v14 = a2[3];
      v15 = *(char **)(v4 + 48);
      v16 = *(unsigned __int16 **)(v4 + 40);
      if ( IsEnabledDeviceUsage )
      {
        v23 = 0;
        LODWORD(v22) = 0;
        UnitString = USBParseCountOutputChannelsForUnit(v16, v15, v14, &v23);
        if ( UnitString < 0 )
          goto LABEL_20;
        UnitString = USBParseGetChannelConfigForUnit(*(unsigned __int16 **)(v4 + 40), *(char **)(v4 + 48), a2[3], &v22);
        if ( UnitString < 0 )
          goto LABEL_20;
        v21 = a2[4];
        v24 = 0LL;
        v17 = BusApiBuildFunctionUnit(a1, a2[3], 3, v23, v22, v21, v12, SourceString, 0, &v24);
      }
      else
      {
        v18 = a2[4];
        ChannelConfigForUnit_Old = USBParseGetChannelConfigForUnit_Old(v16, v15, v14);
        v20 = USBParseCountOutputChannelsForUnit_Old(*(unsigned __int16 **)(v4 + 40), *(char **)(v4 + 48), a2[3]);
        v22 = 0LL;
        v17 = BusApiBuildFunctionUnit(a1, a2[3], 3, v20, ChannelConfigForUnit_Old, v18, v12, SourceString, 0, &v22);
      }
      UnitString = v17;
LABEL_20:
      ExFreePool(v12);
      return (unsigned int)UnitString;
    }
  }
  return 3221225473LL;
}
