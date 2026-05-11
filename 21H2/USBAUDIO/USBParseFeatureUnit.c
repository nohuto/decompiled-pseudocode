/*
 * XREFs of USBParseFeatureUnit @ 0x1C0030740
 * Callers:
 *     <none>
 * Callees:
 *     Feature_3207179578__private_IsEnabledDeviceUsage @ 0x1C0004610 (Feature_3207179578__private_IsEnabledDeviceUsage.c)
 *     Feature_3052163386__private_IsEnabledDeviceUsage @ 0x1C000470C (Feature_3052163386__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0013D80 (memset.c)
 *     BusApiBuildFunctionUnit @ 0x1C002B504 (BusApiBuildFunctionUnit.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C002F994 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseCountOutputChannelsForUnit_Old @ 0x1C002FAC0 (USBParseCountOutputChannelsForUnit_Old.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C002FB68 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetChannelConfigForUnit_Old @ 0x1C002FC80 (USBParseGetChannelConfigForUnit_Old.c)
 *     USBParseGetUnitString @ 0x1C002FD24 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseFeatureUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 result; // rax
  int v8; // r14d
  int UnitString; // ebx
  int IsEnabledDeviceUsage; // eax
  char *v11; // rdx
  unsigned __int16 *v12; // rcx
  int v13; // r8d
  int ChannelConfigForUnit_Old; // r8d
  int v15; // r13d
  unsigned __int64 v16; // r15
  unsigned int v17; // r12d
  int *PoolWithTag; // rax
  int *v19; // rsi
  __int64 v20; // rbx
  int *v21; // rcx
  __int16 v22; // r14
  int v23; // eax
  int v24; // edx
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // r8
  int *v28; // rdx
  __int64 v29; // r9
  __int64 v30; // r8
  int *v31; // [rsp+50h] [rbp-18h]
  PCWSTR SourceString[2]; // [rsp+58h] [rbp-10h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+50h] BYREF
  int v35; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+60h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v5 = *(_QWORD *)(v4 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v4 + 40) + 2LL);
  if ( (unsigned int)Feature_3052163386__private_IsEnabledDeviceUsage() )
  {
    v6 = *a2;
    if ( (unsigned __int8)v6 < 6u || (unsigned __int64)&a2[v6] > v5 )
      return 3221225473LL;
  }
  v8 = 0;
  LODWORD(v34) = 0;
  v35 = 0;
  UnitString = 0;
  SourceString[0] = 0LL;
  IsEnabledDeviceUsage = Feature_3207179578__private_IsEnabledDeviceUsage();
  v11 = *(char **)(v4 + 48);
  v12 = *(unsigned __int16 **)(v4 + 40);
  v13 = a2[3];
  if ( !IsEnabledDeviceUsage )
  {
    v15 = USBParseCountOutputChannelsForUnit_Old(v12, v11, v13);
    ChannelConfigForUnit_Old = USBParseGetChannelConfigForUnit_Old(
                                 *(unsigned __int16 **)(v4 + 40),
                                 *(char **)(v4 + 48),
                                 a2[3]);
    v35 = ChannelConfigForUnit_Old;
LABEL_10:
    v16 = ((unsigned __int64)*a2 - 7) / a2[5];
    if ( (_DWORD)v16 != v15 + 1 )
    {
      if ( ChannelConfigForUnit_Old )
      {
        if ( (unsigned int)v16 >= v15 + 1 )
          UnitString = -1073741438;
        else
          v8 = v15 - v16 + 1;
      }
      else
      {
        if ( (_DWORD)v16 != v15 )
          return (unsigned int)-1073741438;
        v8 = 1;
      }
    }
    if ( UnitString >= 0 )
    {
      UnitString = USBParseGetUnitString(a1, a2, SourceString);
      if ( UnitString >= 0 )
      {
        v17 = v8 + v16;
        PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 4LL * (unsigned int)(v8 + v16), 0x41627845u);
        v19 = PoolWithTag;
        if ( PoolWithTag )
        {
          LODWORD(v36) = a2[4];
          memset(PoolWithTag, 0, 4LL * (unsigned int)v16);
          v20 = 0LL;
          if ( (_DWORD)v16 )
          {
            v21 = v19;
            v31 = v19;
            while ( 1 )
            {
              v22 = 0;
              LODWORD(v34) = a2[5];
              if ( (_DWORD)v34 )
                break;
LABEL_28:
              v20 = (unsigned int)(v20 + 1);
              *v21++ = v22 & 3 | (4 * (v22 & 0xFFFC));
              v31 = v21;
              if ( (unsigned int)v20 >= (unsigned int)v16 )
                goto LABEL_29;
            }
            while ( 1 )
            {
              v23 = Feature_3052163386__private_IsEnabledDeviceUsage();
              v24 = a2[5];
              if ( v23 )
              {
                if ( *a2 < (unsigned __int64)(unsigned int)(v20 * v24 + v34 - 1) + 6 )
                  break;
              }
              v22 = a2[(unsigned int)(v34 + v20 * v24 - 1) + 6] | (unsigned __int16)(v22 << 8);
              LODWORD(v34) = v34 - 1;
              if ( !(_DWORD)v34 )
              {
                v21 = v31;
                goto LABEL_28;
              }
            }
            ExFreePool(v19);
            return 3221225473LL;
          }
LABEL_29:
          if ( (unsigned int)v20 < v17 )
            memset(&v19[v20], 0, 4LL * (v17 - (unsigned int)v20));
          v25 = a2[3];
          v34 = 0LL;
          UnitString = BusApiBuildFunctionUnit(
                         a1,
                         v25,
                         2,
                         v15,
                         v35,
                         1u,
                         (int *)&v36,
                         SourceString[0],
                         4 * v15 + 4,
                         &v34);
          if ( UnitString >= 0 )
          {
            v26 = v34;
            if ( v34 )
            {
              v27 = v34 + 108;
              *(_QWORD *)(v34 + 72) = v34 + 108;
              *(_BYTE *)(v26 + 64) = *v19 != 0;
              if ( v15 != -1 )
              {
                v28 = v19;
                v29 = (unsigned int)(v15 + 1);
                v30 = v27 - (_QWORD)v19;
                do
                {
                  *(_DWORD *)(v26 + 68) |= *v28;
                  *(int *)((char *)v28 + v30) = *v28;
                  ++v28;
                  --v29;
                }
                while ( v29 );
              }
            }
          }
          ExFreePool(v19);
        }
      }
    }
    return (unsigned int)UnitString;
  }
  result = USBParseCountOutputChannelsForUnit(v12, v11, v13, &v34);
  if ( (int)result >= 0 )
  {
    result = USBParseGetChannelConfigForUnit(*(unsigned __int16 **)(v4 + 40), *(char **)(v4 + 48), a2[3], &v35);
    UnitString = result;
    if ( (int)result >= 0 )
    {
      ChannelConfigForUnit_Old = v35;
      v15 = v34;
      goto LABEL_10;
    }
  }
  return result;
}
