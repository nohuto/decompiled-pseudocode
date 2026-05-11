/*
 * XREFs of USBParseMixerUnit @ 0x1C00301E0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_3453068602__private_IsEnabledDeviceUsage @ 0x1C00043C4 (Feature_3453068602__private_IsEnabledDeviceUsage.c)
 *     Feature_3207179578__private_IsEnabledDeviceUsage @ 0x1C0004610 (Feature_3207179578__private_IsEnabledDeviceUsage.c)
 *     Feature_857582905__private_IsEnabledDeviceUsage @ 0x1C0004664 (Feature_857582905__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0013D80 (memset.c)
 *     BusApiBuildMixerFunctionUnit @ 0x1C002B7D0 (BusApiBuildMixerFunctionUnit.c)
 *     USBHwAllocateAndBag @ 0x1C002CC2C (USBHwAllocateAndBag.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C002F994 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseCountOutputChannelsForUnit_Old @ 0x1C002FAC0 (USBParseCountOutputChannelsForUnit_Old.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C002FB68 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetChannelConfigForUnit_Old @ 0x1C002FC80 (USBParseGetChannelConfigForUnit_Old.c)
 *     USBParseGetUnitString @ 0x1C002FD24 (USBParseGetUnitString.c)
 *     USBParseBuildSourceIdArray @ 0x1C002FF10 (USBParseBuildSourceIdArray.c)
 */

__int64 __fastcall USBParseMixerUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // r13
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int8 *v8; // rdi
  int UnitString; // ebx
  int v10; // ecx
  unsigned int i; // edx
  int v12; // r8d
  int v13; // eax
  int v14; // r15d
  unsigned __int64 v15; // rcx
  unsigned int v16; // r12d
  unsigned __int64 v17; // rcx
  __int64 v18; // r14
  int v19; // r14d
  unsigned int v20; // eax
  __int64 result; // rax
  unsigned int v22; // r14d
  void *v23; // rbx
  PVOID v24; // r15
  _BYTE *v25; // rcx
  __int64 v26; // rdx
  signed __int64 v27; // rdi
  int *v28; // r12
  int IsEnabledDeviceUsage; // eax
  int v30; // r8d
  char *v31; // rdx
  unsigned __int16 *v32; // rcx
  int v33; // eax
  unsigned int v34; // edi
  int ChannelConfigForUnit_Old; // ebx
  int v36; // r8d
  PVOID PoolWithTag; // [rsp+A8h] [rbp+50h] BYREF
  int v39; // [rsp+B0h] [rbp+58h] BYREF
  const WCHAR *v40; // [rsp+B8h] [rbp+60h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v5 = *(_QWORD *)(v4 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v4 + 40) + 2LL);
  if ( (unsigned int)Feature_3453068602__private_IsEnabledDeviceUsage() )
  {
    v6 = *a2;
    if ( (unsigned __int8)v6 < 5u || (unsigned __int64)&a2[v6] > v5 || (unsigned __int64)&a2[a2[4] + 9] > v5 )
      return 3221225473LL;
  }
  v7 = a2[4];
  v40 = 0LL;
  v8 = &a2[v7 + 5];
  UnitString = USBParseGetUnitString(a1, a2, &v40);
  if ( UnitString < 0 )
    return (unsigned int)UnitString;
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
  if ( UnitString < 0 )
    return (unsigned int)UnitString;
  LODWORD(PoolWithTag) = 0;
  v14 = 0;
  v39 = 0;
  if ( (unsigned int)Feature_857582905__private_IsEnabledDeviceUsage() )
  {
    v15 = *a2;
    if ( v15 < (unsigned __int64)a2[4] + 10 )
      return 3221225473LL;
  }
  else
  {
    LOBYTE(v15) = *a2;
  }
  v16 = (unsigned __int8)v15 - a2[4] - 10;
  if ( (unsigned int)Feature_3453068602__private_IsEnabledDeviceUsage() )
  {
    v17 = (unsigned __int64)&v8[v16 + 3];
    if ( v17 >= v5 || v17 <= (unsigned __int64)a2 || *a2 < (__int64)&v8[v16 - (_QWORD)a2 + 4] )
      return 3221225473LL;
  }
  v18 = 0LL;
  if ( !(unsigned int)Feature_3207179578__private_IsEnabledDeviceUsage() )
  {
    if ( a2[4] )
    {
      do
      {
        v14 += USBParseCountOutputChannelsForUnit_Old(*(unsigned __int16 **)(v4 + 40), *(char **)(v4 + 48), a2[v18 + 5]);
        v18 = (unsigned int)(v18 + 1);
      }
      while ( (unsigned int)v18 < a2[4] );
    }
    v19 = 0;
    v20 = v14 * *v8;
LABEL_29:
    LOBYTE(v19) = (v20 & 7) != 0;
    v22 = (v20 >> 3) + v19;
    if ( v22 <= v16 )
    {
      v24 = v8 + 4;
    }
    else
    {
      v23 = *(void **)(a1 + 8);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22, 0x41627845u);
      v24 = PoolWithTag;
      if ( PoolWithTag )
        UnitString = USBHwAllocateAndBag(&PoolWithTag, v23);
      else
        UnitString = -1073741670;
      if ( UnitString < 0 )
        return (unsigned int)-1073741670;
      memset(v24, 0, v22);
      if ( v16 )
      {
        v25 = v24;
        v26 = v16;
        v27 = v8 - (_BYTE *)v24;
        do
        {
          *v25 = v25[v27 + 4];
          ++v25;
          --v26;
        }
        while ( v26 );
      }
    }
    v28 = USBParseBuildSourceIdArray(a2[4], a2 + 5);
    if ( v28 )
    {
      IsEnabledDeviceUsage = Feature_3207179578__private_IsEnabledDeviceUsage();
      v30 = a2[3];
      v31 = *(char **)(v4 + 48);
      v32 = *(unsigned __int16 **)(v4 + 40);
      if ( IsEnabledDeviceUsage )
      {
        v39 = 0;
        LODWORD(PoolWithTag) = 0;
        UnitString = USBParseCountOutputChannelsForUnit(v32, v31, v30, &v39);
        if ( UnitString < 0 )
          goto LABEL_47;
        UnitString = USBParseGetChannelConfigForUnit(
                       *(unsigned __int16 **)(v4 + 40),
                       *(char **)(v4 + 48),
                       a2[3],
                       &PoolWithTag);
        if ( UnitString < 0 )
          goto LABEL_47;
        v33 = BusApiBuildMixerFunctionUnit(a1, a2[3], v39, (int)PoolWithTag, a2[4], v28, v40, v22, (char *)v24);
      }
      else
      {
        v34 = a2[4];
        ChannelConfigForUnit_Old = USBParseGetChannelConfigForUnit_Old(v32, v31, v30);
        v36 = USBParseCountOutputChannelsForUnit_Old(*(unsigned __int16 **)(v4 + 40), *(char **)(v4 + 48), a2[3]);
        v33 = BusApiBuildMixerFunctionUnit(a1, a2[3], v36, ChannelConfigForUnit_Old, v34, v28, v40, v22, (char *)v24);
      }
      UnitString = v33;
LABEL_47:
      ExFreePool(v28);
    }
    return (unsigned int)UnitString;
  }
  if ( !a2[4] )
  {
LABEL_28:
    v19 = 0;
    v20 = (_DWORD)PoolWithTag * *v8;
    goto LABEL_29;
  }
  while ( 1 )
  {
    result = USBParseCountOutputChannelsForUnit(*(unsigned __int16 **)(v4 + 40), *(char **)(v4 + 48), a2[v18 + 5], &v39);
    UnitString = result;
    if ( (int)result < 0 )
      return result;
    v18 = (unsigned int)(v18 + 1);
    LODWORD(PoolWithTag) = v39 + (_DWORD)PoolWithTag;
    if ( (unsigned int)v18 >= a2[4] )
      goto LABEL_28;
  }
}
