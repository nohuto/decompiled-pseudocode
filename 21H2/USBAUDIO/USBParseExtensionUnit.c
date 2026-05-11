/*
 * XREFs of USBParseExtensionUnit @ 0x1C0030D70
 * Callers:
 *     <none>
 * Callees:
 *     Feature_4140672313__private_IsEnabledDeviceUsage @ 0x1C000446C (Feature_4140672313__private_IsEnabledDeviceUsage.c)
 *     Feature_3207179578__private_IsEnabledDeviceUsage @ 0x1C0004610 (Feature_3207179578__private_IsEnabledDeviceUsage.c)
 *     BusApiBuildExtensionFunctionUnit @ 0x1C002B890 (BusApiBuildExtensionFunctionUnit.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C002F994 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseCountOutputChannelsForUnit_Old @ 0x1C002FAC0 (USBParseCountOutputChannelsForUnit_Old.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C002FB68 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetChannelConfigForUnit_Old @ 0x1C002FC80 (USBParseGetChannelConfigForUnit_Old.c)
 *     USBParseGetUnitString @ 0x1C002FD24 (USBParseGetUnitString.c)
 *     USBParseBuildSourceIdArray @ 0x1C002FF10 (USBParseBuildSourceIdArray.c)
 */

__int64 __fastcall USBParseExtensionUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ebp
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  int v12; // ecx
  unsigned __int8 *v13; // rdx
  int v14; // eax
  int UnitString; // ebx
  int *v16; // r12
  int IsEnabledDeviceUsage; // eax
  int v18; // r8d
  char *v19; // rdx
  unsigned __int16 *v20; // rcx
  int v21; // eax
  int v22; // edi
  unsigned int v23; // esi
  int ChannelConfigForUnit_Old; // ebx
  int v25; // r8d
  int v27; // [rsp+90h] [rbp+8h] BYREF
  int v28; // [rsp+98h] [rbp+10h] BYREF
  const WCHAR *v29; // [rsp+A0h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v5 = *(_QWORD *)(v4 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v4 + 40) + 2LL);
  if ( (unsigned int)Feature_4140672313__private_IsEnabledDeviceUsage() )
  {
    v7 = *a2;
    if ( (unsigned __int8)v7 < 7u )
      return 3221225473LL;
    if ( (unsigned __int64)&a2[v7] > v5 )
      return 3221225473LL;
    v6 = a2[6];
    if ( (unsigned __int64)&a2[v6 + 12] > v5 )
      return 3221225473LL;
  }
  else
  {
    LOBYTE(v6) = a2[6];
  }
  v8 = (__int64)&a2[(unsigned __int8)v6 + 7];
  v29 = 0LL;
  v9 = 0;
  if ( !(unsigned int)Feature_4140672313__private_IsEnabledDeviceUsage() )
  {
    LOBYTE(v10) = *(_BYTE *)(v8 + 4);
    goto LABEL_11;
  }
  v10 = *(unsigned __int8 *)(v8 + 4);
  v11 = v10 + v8 + 5;
  if ( v11 < v5 && v11 > (unsigned __int64)a2 && *a2 >= v8 + *(unsigned __int8 *)(v8 + 4) - (_QWORD)a2 + 6LL )
  {
LABEL_11:
    v12 = (unsigned __int8)v10;
    if ( (_BYTE)v10 )
    {
      v13 = (unsigned __int8 *)((unsigned __int8)v10 + v8 + 5);
      do
      {
        v14 = *v13--;
        v9 = v14 | (v9 << 8);
        --v12;
      }
      while ( v12 );
    }
    UnitString = USBParseGetUnitString(a1, a2, &v29);
    if ( UnitString < 0 )
      return (unsigned int)UnitString;
    v16 = USBParseBuildSourceIdArray(a2[6], a2 + 7);
    if ( !v16 )
      return (unsigned int)-1073741670;
    IsEnabledDeviceUsage = Feature_3207179578__private_IsEnabledDeviceUsage();
    v18 = a2[3];
    v19 = *(char **)(v4 + 48);
    v20 = *(unsigned __int16 **)(v4 + 40);
    if ( IsEnabledDeviceUsage )
    {
      v28 = 0;
      v27 = 0;
      UnitString = USBParseCountOutputChannelsForUnit(v20, v19, v18, &v28);
      if ( UnitString < 0 )
        goto LABEL_22;
      UnitString = USBParseGetChannelConfigForUnit(*(unsigned __int16 **)(v4 + 40), *(char **)(v4 + 48), a2[3], &v27);
      if ( UnitString < 0 )
        goto LABEL_22;
      v21 = BusApiBuildExtensionFunctionUnit(a1, a2[3], v28, v27, a2[6], v16, v29, *((unsigned __int16 *)a2 + 2), v9);
    }
    else
    {
      v22 = *((unsigned __int16 *)a2 + 2);
      v23 = a2[6];
      ChannelConfigForUnit_Old = USBParseGetChannelConfigForUnit_Old(v20, v19, v18);
      v25 = USBParseCountOutputChannelsForUnit_Old(*(unsigned __int16 **)(v4 + 40), *(char **)(v4 + 48), a2[3]);
      v21 = BusApiBuildExtensionFunctionUnit(a1, a2[3], v25, ChannelConfigForUnit_Old, v23, v16, v29, v22, v9);
    }
    UnitString = v21;
LABEL_22:
    ExFreePool(v16);
    return (unsigned int)UnitString;
  }
  return 3221225473LL;
}
