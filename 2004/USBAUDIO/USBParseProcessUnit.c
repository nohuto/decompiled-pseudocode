/*
 * XREFs of USBParseProcessUnit @ 0x1C002FBB0
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C002B054 (BusApiBuildFunctionUnit.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C002F128 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C002F1D0 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C002F274 (USBParseGetUnitString.c)
 *     USBParseBuildSourceIdArray @ 0x1C002F3D4 (USBParseBuildSourceIdArray.c)
 */

__int64 __fastcall USBParseProcessUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // r13d
  __int64 v5; // r14
  int v6; // r13d
  __int64 v7; // rdi
  int UnitString; // ebx
  __int64 v9; // rcx
  int v10; // r15d
  char *v11; // rsi
  unsigned int v12; // edi
  __int64 v13; // r12
  char *PoolWithTag; // rax
  unsigned __int16 *v15; // rdx
  int v16; // ecx
  int *v17; // r14
  __int64 v18; // r12
  int ChannelConfigForUnit; // ebx
  int v20; // eax
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v27; // [rsp+A8h] [rbp+10h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 16);
  SourceString = 0LL;
  v4 = *(unsigned __int16 *)(a2 + 4);
  v5 = *(unsigned __int8 *)(a2 + 6) + a2 + 7;
  v27 = *(_QWORD *)(v2 + 72);
  v6 = v4 + 1;
  v7 = *(unsigned __int8 *)(v5 + 4);
  v29 = v7;
  UnitString = USBParseGetUnitString(a1, (unsigned __int8 *)a2, &SourceString);
  if ( UnitString >= 0 )
  {
    v9 = *(unsigned __int8 *)(v5 + 4);
    v10 = 0;
    v11 = 0LL;
    while ( --v9 >= 0 )
      v10 = *(unsigned __int8 *)(v5 + v9 + 5) | (v10 << 8);
    if ( (unsigned int)(v6 - 2) <= 1 )
    {
      v12 = *(unsigned __int8 *)(v7 + v5 + 6);
      if ( v12 )
      {
        v13 = v12;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 4LL * v12, 0x41627845u);
        v11 = PoolWithTag;
        if ( PoolWithTag )
        {
          v15 = (unsigned __int16 *)(v5 + v29 + 7);
          do
          {
            v16 = *v15++;
            *(_DWORD *)PoolWithTag = v16;
            PoolWithTag += 4;
            --v13;
          }
          while ( v13 );
        }
        else
        {
          UnitString = -1073741670;
        }
      }
    }
    else
    {
      v12 = 0;
    }
    if ( UnitString >= 0 )
    {
      v17 = USBParseBuildSourceIdArray(*(unsigned __int8 *)(a2 + 6), (unsigned __int8 *)(a2 + 7));
      if ( v17 )
      {
        v18 = *(unsigned __int8 *)(a2 + 6);
        ChannelConfigForUnit = USBParseGetChannelConfigForUnit(
                                 *(unsigned __int16 **)(v27 + 40),
                                 *(char **)(v27 + 48),
                                 *(unsigned __int8 *)(a2 + 3));
        v20 = USBParseCountOutputChannelsForUnit(
                *(unsigned __int16 **)(v27 + 40),
                *(char **)(v27 + 48),
                *(unsigned __int8 *)(a2 + 3));
        v21 = *(unsigned __int8 *)(a2 + 3);
        v27 = 0LL;
        UnitString = BusApiBuildFunctionUnit(
                       a1,
                       v21,
                       4,
                       v20,
                       ChannelConfigForUnit,
                       v18,
                       v17,
                       SourceString,
                       4 * v12,
                       &v27);
        if ( UnitString >= 0 )
        {
          v22 = v27;
          if ( v27 )
          {
            *(_DWORD *)(v27 + 64) = v6;
            *(_DWORD *)(v22 + 76) = v10;
            *(_DWORD *)(v22 + 80) = v12;
            if ( v12 )
            {
              v23 = v12;
              v24 = 0LL;
              *(_QWORD *)(v22 + 88) = v22 + 12 * (v18 + 8);
              do
              {
                *(_DWORD *)(v24 + *(_QWORD *)(v22 + 88)) = *(_DWORD *)&v11[v24];
                v24 += 4LL;
                --v23;
              }
              while ( v23 );
            }
          }
        }
        ExFreePool(v17);
      }
      else
      {
        UnitString = -1073741670;
      }
    }
    if ( v11 )
      ExFreePool(v11);
  }
  return (unsigned int)UnitString;
}
