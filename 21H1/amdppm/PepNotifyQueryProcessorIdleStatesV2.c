/*
 * XREFs of PepNotifyQueryProcessorIdleStatesV2 @ 0x1C003204C
 * Callers:
 *     InitPepIdleStates @ 0x1C00312EC (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0004C5C (WPP_RECORDER_SF_DD.c)
 *     memset @ 0x1C000ED80 (memset.c)
 *     PepQueryName @ 0x1C003264C (PepQueryName.c)
 */

__int64 __fastcall PepNotifyQueryProcessorIdleStatesV2(__int64 a1, unsigned int **a2)
{
  unsigned int v2; // r15d
  unsigned int *PoolWithTag; // rax
  unsigned int *v5; // r14
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rsi
  char v9; // r9
  __int64 v10; // r8
  unsigned int v11; // ecx
  unsigned __int16 v12; // r9
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned __int16 v15; // r9
  char *v16; // rax
  char *v17; // rbx
  unsigned int v18; // edi
  char *v19; // rsi
  __int64 v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-48h]
  char v23; // [rsp+80h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 1116);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 12 * v2 + 4, 0x72637250u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 12 * v2 + 4);
    *v5 = v2;
    v7 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1104), 18LL, v5);
    v6 = v7;
    if ( v7 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xDu,
          (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids,
          v7);
      goto LABEL_64;
    }
    v8 = 0LL;
    v9 = 0;
    v6 = -1073741811;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= v2 )
      {
        if ( v9 )
        {
          v16 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v2, 0x72637250u);
          v17 = v16;
          if ( v16 )
          {
            memset(v16, 0, 16 * v2);
            v18 = 0;
            if ( v2 )
            {
              v19 = v17;
              do
              {
                PepQueryName(a1, v18++, 28LL, v19);
                v19 += 16;
              }
              while ( v18 < v2 );
            }
            *(_QWORD *)(a1 + 1144) = v17;
            *a2 = v5;
            v5 = 0LL;
            v6 = 0;
          }
          else
          {
            v6 = -1073741670;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x1Au,
              (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids);
          v6 = -1073741637;
        }
        goto LABEL_64;
      }
      v10 = *(_QWORD *)(a1 + 272);
      if ( (v10 & 0x200000000LL) == 0 && (v5[3 * v8 + 1] & 0x78) == 0 )
        break;
      if ( (v10 & 0x200) == 0 && (v5[3 * v8 + 1] & 0x78) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_64;
        v12 = 15;
        goto LABEL_37;
      }
      v11 = v5[3 * v8 + 1];
      if ( (v11 & 0x78) != 0 )
      {
        if ( (v11 & 1) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_64;
          v12 = 16;
          goto LABEL_37;
        }
        if ( (v11 & 2) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_64;
          v12 = 17;
          goto LABEL_37;
        }
        if ( (v11 & 4) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_64;
          v12 = 18;
          goto LABEL_37;
        }
        if ( (v11 & 0x80u) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_64;
          v12 = 19;
LABEL_37:
          LODWORD(v21) = v8;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v12,
            (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids,
            v21);
          goto LABEL_64;
        }
      }
      else if ( v5[3 * v8 + 2] == -1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_64;
        v12 = 20;
        goto LABEL_37;
      }
      if ( (v11 & 0x81) == 0x80 )
      {
        v6 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_64;
        v12 = 21;
        goto LABEL_37;
      }
      if ( (v11 & 1) != 0 )
        v9 = 1;
      v23 = v9;
      if ( (_DWORD)v8 )
      {
        v13 = v5[3 * v8 + 2];
        v14 = v5[3 * (unsigned int)(v8 - 1) + 2];
        if ( v13 == -1 )
        {
          if ( v14 != -1 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_64;
            v15 = 22;
            goto LABEL_28;
          }
        }
        else
        {
          if ( v13 < v14 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_64;
            v15 = 23;
            goto LABEL_28;
          }
          if ( v14 == -1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v22) = v8 - 1;
            LODWORD(v21) = v8;
            WPP_RECORDER_SF_DD(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x18u,
              (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids,
              v21,
              v22);
            v9 = v23;
          }
        }
        if ( v5[3 * v8 + 3] < v5[3 * (unsigned int)(v8 - 1) + 3] )
        {
          v6 = -1073741637;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_64;
          v15 = 25;
LABEL_28:
          LODWORD(v22) = v8 - 1;
          LODWORD(v21) = v8;
          WPP_RECORDER_SF_DD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v15,
            (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids,
            v21,
            v22);
          goto LABEL_64;
        }
      }
      v8 = (unsigned int)(v8 + 1);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 14;
      goto LABEL_37;
    }
LABEL_64:
    if ( v5 )
      ExFreePoolWithTag(v5, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
