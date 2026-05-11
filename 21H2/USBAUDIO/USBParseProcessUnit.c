/*
 * XREFs of USBParseProcessUnit @ 0x1C0030A60
 * Callers:
 *     <none>
 * Callees:
 *     Feature_28420408__private_IsEnabledDeviceUsage @ 0x1C0004514 (Feature_28420408__private_IsEnabledDeviceUsage.c)
 *     Feature_3207179578__private_IsEnabledDeviceUsage @ 0x1C0004610 (Feature_3207179578__private_IsEnabledDeviceUsage.c)
 *     BusApiBuildProcessFunctionUnit @ 0x1C002B6E4 (BusApiBuildProcessFunctionUnit.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C002F994 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseCountOutputChannelsForUnit_Old @ 0x1C002FAC0 (USBParseCountOutputChannelsForUnit_Old.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C002FB68 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetChannelConfigForUnit_Old @ 0x1C002FC80 (USBParseGetChannelConfigForUnit_Old.c)
 *     USBParseGetUnitString @ 0x1C002FD24 (USBParseGetUnitString.c)
 *     USBParseBuildSourceIdArray @ 0x1C002FF10 (USBParseBuildSourceIdArray.c)
 */

__int64 __fastcall USBParseProcessUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // r13
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int8 *v8; // r14
  unsigned __int8 *v9; // r15
  int UnitString; // ebx
  int v11; // r12d
  PVOID PoolWithTag; // rbp
  __int64 i; // rcx
  __int64 v14; // r14
  __int64 v15; // rdx
  unsigned __int8 *v16; // rax
  _DWORD *v18; // rcx
  unsigned __int16 *v19; // r15
  __int64 v20; // rdx
  int v21; // eax
  int *v22; // r15
  int IsEnabledDeviceUsage; // eax
  int v24; // r8d
  char *v25; // rdx
  unsigned __int16 *v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  unsigned int v29; // edi
  int ChannelConfigForUnit_Old; // ebx
  int v31; // eax
  __int64 v32; // r8
  __int64 v33; // [rsp+50h] [rbp-78h]
  const WCHAR *v34; // [rsp+70h] [rbp-58h] BYREF
  int v36; // [rsp+D8h] [rbp+10h]
  int v37; // [rsp+E0h] [rbp+18h] BYREF
  int v38; // [rsp+E8h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v5 = *(_QWORD *)(v4 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v4 + 40) + 2LL);
  if ( (unsigned int)Feature_28420408__private_IsEnabledDeviceUsage() )
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
  v34 = 0LL;
  v8 = &a2[(unsigned __int8)v6];
  v9 = &v8[v8[11] + 13];
  v36 = *((unsigned __int16 *)a2 + 2) + 1;
  UnitString = USBParseGetUnitString(a1, a2, &v34);
  if ( UnitString >= 0 )
  {
    v11 = 0;
    PoolWithTag = 0LL;
    if ( (unsigned int)Feature_28420408__private_IsEnabledDeviceUsage() && (unsigned __int64)v9 >= v5 )
      return 3221225473LL;
    for ( i = v8[11]; --i >= 0; v11 = v8[i + 12] | (v11 << 8) )
      ;
    if ( (unsigned int)(v36 - 2) > 1 )
    {
      LODWORD(v14) = 0;
      goto LABEL_27;
    }
    v14 = *v9;
    if ( *v9 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * *v9, 0x41627845u);
      if ( PoolWithTag )
      {
        if ( (unsigned int)Feature_28420408__private_IsEnabledDeviceUsage() )
        {
          v15 = 2LL * (unsigned int)(v14 - 1);
          v16 = &v9[v15 + 1];
          if ( (unsigned __int64)v16 >= v5 || v16 <= a2 || *a2 < (__int64)&v9[v15 - (_QWORD)a2 + 2] )
          {
            ExFreePool(PoolWithTag);
            return 3221225473LL;
          }
        }
        if ( (_DWORD)v14 )
        {
          v18 = PoolWithTag;
          v19 = (unsigned __int16 *)(v9 + 1);
          v20 = v14;
          do
          {
            v21 = *v19++;
            *v18++ = v21;
            --v20;
          }
          while ( v20 );
        }
      }
      else
      {
        UnitString = -1073741670;
      }
    }
LABEL_27:
    if ( UnitString < 0 )
      goto LABEL_37;
    v22 = USBParseBuildSourceIdArray(a2[6], a2 + 7);
    if ( !v22 )
    {
      UnitString = -1073741670;
LABEL_37:
      if ( PoolWithTag )
        ExFreePool(PoolWithTag);
      return (unsigned int)UnitString;
    }
    IsEnabledDeviceUsage = Feature_3207179578__private_IsEnabledDeviceUsage();
    v24 = a2[3];
    v25 = *(char **)(v4 + 48);
    v26 = *(unsigned __int16 **)(v4 + 40);
    if ( IsEnabledDeviceUsage )
    {
      v38 = 0;
      v37 = 0;
      UnitString = USBParseCountOutputChannelsForUnit(v26, v25, v24, &v38);
      if ( UnitString < 0 )
        goto LABEL_35;
      UnitString = USBParseGetChannelConfigForUnit(*(unsigned __int16 **)(v4 + 40), *(char **)(v4 + 48), a2[3], &v37);
      if ( UnitString < 0 )
        goto LABEL_35;
      v28 = BusApiBuildProcessFunctionUnit(
              a1,
              a2[3],
              v27,
              v36,
              v38,
              v37,
              a2[6],
              v22,
              v34,
              v11,
              v33,
              v14,
              (__int64)PoolWithTag);
    }
    else
    {
      v29 = a2[6];
      ChannelConfigForUnit_Old = USBParseGetChannelConfigForUnit_Old(v26, v25, v24);
      v31 = USBParseCountOutputChannelsForUnit_Old(*(unsigned __int16 **)(v4 + 40), *(char **)(v4 + 48), a2[3]);
      v28 = BusApiBuildProcessFunctionUnit(
              a1,
              a2[3],
              v32,
              v36,
              v31,
              ChannelConfigForUnit_Old,
              v29,
              v22,
              v34,
              v11,
              v33,
              v14,
              (__int64)PoolWithTag);
    }
    UnitString = v28;
LABEL_35:
    ExFreePool(v22);
    goto LABEL_37;
  }
  return (unsigned int)UnitString;
}
