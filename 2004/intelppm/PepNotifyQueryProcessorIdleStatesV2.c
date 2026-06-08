/*
 * XREFs of PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0038310
 * Callers:
 *     InitPepIdleStates @ 0x1C00375A0 (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00047C0 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0009C90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C000A334 (WPP_RECORDER_SF_d.c)
 *     PepQueryName @ 0x1C00388F4 (PepQueryName.c)
 */

__int64 __fastcall PepNotifyQueryProcessorIdleStatesV2(__int64 a1, unsigned int **a2)
{
  unsigned int v2; // r15d
  unsigned int *PoolWithTag; // rax
  unsigned int *v5; // r14
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // esi
  char v9; // dl
  int *v10; // r12
  __int64 v11; // rcx
  int v12; // ecx
  unsigned __int16 v13; // r9
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned __int16 v16; // r9
  char *v17; // rax
  char *v18; // rbx
  unsigned int v19; // edi
  char *v20; // rsi
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  char v24; // [rsp+80h] [rbp+8h]

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
    v8 = 0;
    v9 = 0;
    v6 = -1073741811;
    if ( !v2 )
      goto LABEL_61;
    v10 = (int *)(v5 + 1);
    while ( 1 )
    {
      v11 = *(_QWORD *)(a1 + 272);
      if ( (v11 & 0x200000000LL) == 0 && (*v10 & 0x78) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v13 = 14;
          goto LABEL_41;
        }
        goto LABEL_64;
      }
      if ( (v11 & 0x200) == 0 && (*v10 & 0x78) != 0 )
        break;
      v12 = *v10;
      if ( (*v10 & 0x78) != 0 )
      {
        if ( (v12 & 1) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_64;
          v13 = 16;
          goto LABEL_41;
        }
        if ( (v12 & 2) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_64;
          v13 = 17;
          goto LABEL_41;
        }
        if ( (v12 & 4) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_64;
          v13 = 18;
          goto LABEL_41;
        }
        if ( (v12 & 0x80u) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_64;
          v13 = 19;
LABEL_41:
          LODWORD(v22) = v8;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v13,
            (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids,
            v22);
          goto LABEL_64;
        }
      }
      else if ( v10[1] == -1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_64;
        v13 = 20;
        goto LABEL_41;
      }
      if ( (v12 & 0x81) == 0x80 )
      {
        v6 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_64;
        v13 = 21;
        goto LABEL_41;
      }
      if ( (v12 & 1) != 0 )
        v9 = 1;
      v24 = v9;
      if ( v8 )
      {
        v14 = v10[1];
        v15 = v5[3 * v8 - 1];
        if ( v14 == -1 )
        {
          if ( v15 != -1 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_64;
            v16 = 22;
            goto LABEL_28;
          }
        }
        else
        {
          if ( v14 < v15 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_64;
            v16 = 23;
            goto LABEL_28;
          }
          if ( v15 == -1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v23) = v8 - 1;
            LODWORD(v22) = v8;
            WPP_RECORDER_SF_dd(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x18u,
              (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids,
              v22,
              v23);
          }
        }
        if ( v10[2] < v5[3 * v8] )
        {
          v6 = -1073741637;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_64;
          v16 = 25;
LABEL_28:
          LODWORD(v23) = v8 - 1;
          LODWORD(v22) = v8;
          WPP_RECORDER_SF_dd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v16,
            (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids,
            v22,
            v23);
          goto LABEL_64;
        }
        v9 = v24;
      }
      ++v8;
      v10 += 3;
      if ( v8 >= v2 )
      {
        if ( v9 )
        {
          v17 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v2, 0x72637250u);
          v18 = v17;
          if ( v17 )
          {
            memset(v17, 0, 16 * v2);
            v19 = 0;
            v20 = v18;
            do
            {
              PepQueryName(a1, v19++, 28LL, v20);
              v20 += 16;
            }
            while ( v19 < v2 );
            *(_QWORD *)(a1 + 1144) = v18;
            *a2 = v5;
            v5 = 0LL;
            v6 = 0;
          }
          else
          {
            v6 = -1073741670;
          }
          goto LABEL_64;
        }
LABEL_61:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x1Au,
            (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids);
        v6 = -1073741637;
        goto LABEL_64;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 15;
      goto LABEL_41;
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
