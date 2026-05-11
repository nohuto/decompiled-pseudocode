/*
 * XREFs of USBParseTerminalUnit @ 0x1C002FF90
 * Callers:
 *     <none>
 * Callees:
 *     Feature_3207179578__private_IsEnabledDeviceUsage @ 0x1C0004610 (Feature_3207179578__private_IsEnabledDeviceUsage.c)
 *     Feature_3052163386__private_IsEnabledDeviceUsage @ 0x1C000470C (Feature_3052163386__private_IsEnabledDeviceUsage.c)
 *     BusApiBuildTerminalFunctionUnit @ 0x1C002B63C (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C002F314 (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C002F6C8 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C002F994 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseCountOutputChannelsForUnit_Old @ 0x1C002FAC0 (USBParseCountOutputChannelsForUnit_Old.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C002FB68 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetChannelConfigForUnit_Old @ 0x1C002FC80 (USBParseGetChannelConfigForUnit_Old.c)
 *     USBParseGetUnitString @ 0x1C002FD24 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseTerminalUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  int UnitString; // ebx
  __int64 v4; // r15
  int v5; // r12d
  __int64 v8; // r14
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // edi
  int MicArrayDescriptor; // eax
  __int64 v13; // rax
  int v15; // eax
  int v16; // r8d
  char *v17; // rdx
  unsigned __int16 *v18; // rcx
  unsigned __int16 v19; // cx
  int PinIndexForStreamingTerminal; // eax
  unsigned __int16 v22; // cx
  int v23; // eax
  int v24; // ebx
  int ChannelConfigForUnit_Old; // edi
  int v26; // r9d
  int v27; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v28; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v29; // [rsp+C0h] [rbp+58h] BYREF
  const WCHAR *v30; // [rsp+C8h] [rbp+60h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  UnitString = 0;
  v30 = 0LL;
  v4 = 0LL;
  v5 = -1;
  v29 = 0LL;
  v8 = *(_QWORD *)(v2 + 72);
  v9 = *(_QWORD *)(v8 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v8 + 40) + 2LL);
  if ( a2[2] != 2 )
  {
    if ( !(unsigned int)Feature_3052163386__private_IsEnabledDeviceUsage()
      || (v13 = *a2, (unsigned __int8)v13 >= 9u) && (unsigned __int64)&a2[v13] <= v9 )
    {
      v15 = a2[7];
      v11 = 1;
      v28 = 1;
      v27 = v15;
      goto LABEL_13;
    }
    return 3221225473LL;
  }
  if ( (unsigned int)Feature_3052163386__private_IsEnabledDeviceUsage() )
  {
    v10 = *a2;
    if ( (unsigned __int8)v10 < 0xCu || (unsigned __int64)&a2[v10] > v9 )
      return 3221225473LL;
  }
  v11 = 0;
  v27 = -1;
  v28 = 0;
  if ( *((_WORD *)a2 + 2) == 517 )
  {
    MicArrayDescriptor = USBParseGetMicArrayDescriptor(a1, (__int64)a2, &v29);
    v4 = v29;
    UnitString = MicArrayDescriptor;
    if ( MicArrayDescriptor == -1073741275 )
      UnitString = 0;
LABEL_13:
    if ( UnitString < 0 )
      return (unsigned int)UnitString;
  }
  UnitString = USBParseGetUnitString(a1, a2, &v30);
  if ( UnitString >= 0 )
  {
    if ( (unsigned int)Feature_3207179578__private_IsEnabledDeviceUsage() )
    {
      v16 = a2[3];
      v17 = *(char **)(v8 + 48);
      v18 = *(unsigned __int16 **)(v8 + 40);
      LODWORD(v29) = 0;
      v28 = 0;
      UnitString = USBParseCountOutputChannelsForUnit(v18, v17, v16, &v29);
      if ( UnitString < 0 )
        return (unsigned int)UnitString;
      UnitString = USBParseGetChannelConfigForUnit(*(unsigned __int16 **)(v8 + 40), *(char **)(v8 + 48), a2[3], &v28);
      if ( UnitString < 0 )
        return (unsigned int)UnitString;
      v19 = *((_WORD *)a2 + 2);
      if ( v19 == 257 )
      {
        PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(v8, a2, 0);
        v19 = *((_WORD *)a2 + 2);
        v5 = PinIndexForStreamingTerminal;
      }
      return (unsigned int)BusApiBuildTerminalFunctionUnit(a1, a2[3], v11, v29, v28, v11, &v27, v30, v4, v19, 1, v5);
    }
    else
    {
      v22 = *((_WORD *)a2 + 2);
      if ( v22 == 257 )
      {
        v23 = USBParseGetPinIndexForStreamingTerminal(v8, a2, 0);
        v22 = *((_WORD *)a2 + 2);
        v5 = v23;
      }
      v24 = v22;
      ChannelConfigForUnit_Old = USBParseGetChannelConfigForUnit_Old(
                                   *(unsigned __int16 **)(v8 + 40),
                                   *(char **)(v8 + 48),
                                   a2[3]);
      v26 = USBParseCountOutputChannelsForUnit_Old(*(unsigned __int16 **)(v8 + 40), *(char **)(v8 + 48), a2[3]);
      return (unsigned int)BusApiBuildTerminalFunctionUnit(
                             a1,
                             a2[3],
                             v28,
                             v26,
                             ChannelConfigForUnit_Old,
                             v28,
                             &v27,
                             v30,
                             v4,
                             v24,
                             1,
                             v5);
    }
  }
  return (unsigned int)UnitString;
}
