/*
 * XREFs of USBParseMixerUnit @ 0x1C002F590
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0014140 (memset.c)
 *     BusApiBuildFunctionUnit @ 0x1C002B054 (BusApiBuildFunctionUnit.c)
 *     USBHwAllocateAndBag @ 0x1C002C4DC (USBHwAllocateAndBag.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C002F128 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C002F1D0 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C002F274 (USBParseGetUnitString.c)
 *     USBParseBuildSourceIdArray @ 0x1C002F3D4 (USBParseBuildSourceIdArray.c)
 */

__int64 __fastcall USBParseMixerUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int8 *v8; // r15
  int UnitString; // ebx
  int v10; // ecx
  unsigned int i; // edx
  int v12; // r8d
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // r14d
  unsigned int v16; // esi
  unsigned int v17; // r12d
  __int64 v18; // r13
  int v19; // eax
  unsigned int v20; // r14d
  void *v21; // rbx
  char *v22; // rsi
  char *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r15
  int *v26; // r15
  __int64 v27; // r12
  int ChannelConfigForUnit; // ebx
  int v29; // eax
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // r8
  char v33; // al
  __int64 v35; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+10h]
  PCWSTR SourceString; // [rsp+B0h] [rbp+18h] BYREF
  char *PoolWithTag; // [rsp+B8h] [rbp+20h] BYREF

  v35 = a1;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = a1;
  v4 = 0LL;
  SourceString = 0LL;
  v6 = *(_QWORD *)(v2 + 72);
  v7 = a2[4];
  v36 = v6;
  v8 = &a2[v7 + 5];
  UnitString = USBParseGetUnitString(v3, a2, &SourceString);
  if ( UnitString >= 0 )
  {
    if ( *(_WORD *)(v8 + 1) )
    {
      v10 = 0;
      for ( i = 0; i < 0x10; ++i )
      {
        v13 = v10 + 1;
        v12 = *(unsigned __int16 *)(v8 + 1);
        if ( !_bittest(&v12, i) )
          v13 = v10;
        v10 = v13;
      }
      if ( v13 != *v8 )
        UnitString = -1073741438;
    }
    if ( UnitString >= 0 )
    {
      v14 = a2[4];
      v15 = 0;
      v16 = 0;
      v17 = *a2 - v14 - 10;
      if ( a2[4] )
      {
        v18 = v36;
        do
        {
          v19 = USBParseCountOutputChannelsForUnit(*(unsigned __int16 **)(v18 + 40), *(char **)(v18 + 48), a2[v16 + 5]);
          v14 = a2[4];
          v15 += v19;
          ++v16;
        }
        while ( v16 < v14 );
        v3 = v35;
      }
      v20 = ((v15 * (unsigned int)*v8) >> 3) + ((((_BYTE)v15 * *v8) & 7) != 0);
      if ( v20 <= v17 )
      {
        v22 = (char *)(v8 + 4);
      }
      else
      {
        v21 = *(void **)(v3 + 8);
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v20, 0x41627845u);
        v22 = PoolWithTag;
        if ( PoolWithTag )
          UnitString = USBHwAllocateAndBag((PVOID *)&PoolWithTag, v21);
        else
          UnitString = -1073741670;
        if ( UnitString < 0 )
          return (unsigned int)-1073741670;
        memset(v22, 0, v20);
        if ( v17 )
        {
          v23 = v22;
          v24 = v17;
          v25 = v8 - (unsigned __int8 *)v22;
          do
          {
            *v23 = v23[v25 + 4];
            ++v23;
            --v24;
          }
          while ( v24 );
        }
        LOBYTE(v14) = a2[4];
        v3 = v35;
      }
      v26 = USBParseBuildSourceIdArray((unsigned __int8)v14, a2 + 5);
      if ( v26 )
      {
        v27 = a2[4];
        ChannelConfigForUnit = USBParseGetChannelConfigForUnit(
                                 *(unsigned __int16 **)(v36 + 40),
                                 *(char **)(v36 + 48),
                                 a2[3]);
        v29 = USBParseCountOutputChannelsForUnit(*(unsigned __int16 **)(v36 + 40), *(char **)(v36 + 48), a2[3]);
        v30 = a2[3];
        v35 = 0LL;
        UnitString = BusApiBuildFunctionUnit(v3, v30, 5, v29, ChannelConfigForUnit, v27, v26, SourceString, v20, &v35);
        if ( UnitString >= 0 )
        {
          v31 = v35;
          if ( v35 )
          {
            *(_DWORD *)(v35 + 68) = v20;
            *(_QWORD *)(v31 + 72) = v31 + 12 * (v27 + 8);
            if ( v20 )
            {
              v32 = v20;
              do
              {
                v33 = *v22++;
                *(_BYTE *)(v4 + *(_QWORD *)(v31 + 72)) = v33;
                ++v4;
                --v32;
              }
              while ( v32 );
            }
          }
        }
        ExFreePool(v26);
      }
    }
  }
  return (unsigned int)UnitString;
}
