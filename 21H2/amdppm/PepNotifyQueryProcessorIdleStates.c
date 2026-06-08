/*
 * XREFs of PepNotifyQueryProcessorIdleStates @ 0x1C0034168
 * Callers:
 *     InitPepIdleStates @ 0x1C00336CC (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003B54 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

__int64 __fastcall PepNotifyQueryProcessorIdleStates(__int64 a1, unsigned int **a2)
{
  unsigned int v2; // esi
  unsigned int *PoolWithTag; // rax
  unsigned int *v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  char v9; // cl
  __int64 i; // rdx
  __int64 v11; // r10
  unsigned int v12; // eax
  unsigned __int16 v13; // r9

  v2 = *(_DWORD *)(a1 + 1116);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v2 + 8, 0x72637250u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 4 * v2 + 8);
    *v6 = v2;
    v8 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1104), 2LL, v6);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v7 = -1073741811;
      if ( v6[1] <= 0x500 )
      {
        v9 = 0;
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          if ( (unsigned int)i >= v2 )
          {
            if ( v9 )
            {
              *a2 = v6;
              v6 = 0LL;
              v7 = 0;
            }
            else
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  1u,
                  0x22u,
                  (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids);
              v7 = -1073741637;
            }
            goto LABEL_38;
          }
          v11 = *(_QWORD *)(a1 + 272);
          if ( (v11 & 0x100000000LL) == 0 && (v6[i + 2] & 0x78) == 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_38;
            v13 = 29;
            goto LABEL_24;
          }
          if ( (v11 & 0x100) == 0 && (v6[i + 2] & 0x78) != 0 )
            break;
          v12 = v6[i + 2];
          if ( (v12 & 0x78) != 0 )
          {
            if ( (v12 & 1) == 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v13 = 31;
                goto LABEL_24;
              }
              goto LABEL_38;
            }
            if ( (v12 & 2) == 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v13 = 32;
                goto LABEL_24;
              }
              goto LABEL_38;
            }
            if ( (v12 & 4) == 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v13 = 33;
                goto LABEL_24;
              }
              goto LABEL_38;
            }
          }
          if ( (v12 & 1) != 0 )
            v9 = 1;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v13 = 30;
LABEL_24:
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v13,
            (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids,
            i);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x1Cu,
          (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        2u,
        0x1Bu,
        (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids,
        v8);
    }
LABEL_38:
    if ( v6 )
      ExFreePoolWithTag(v6, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
