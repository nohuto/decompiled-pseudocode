/*
 * XREFs of PepNotifyQueryProcessorIdleStates @ 0x1C0038038
 * Callers:
 *     InitPepIdleStates @ 0x1C00375A0 (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00047C0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000A334 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall PepNotifyQueryProcessorIdleStates(__int64 a1, unsigned int **a2)
{
  unsigned int v2; // ebp
  unsigned int *PoolWithTag; // rax
  unsigned int *v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rdx
  char v10; // cl
  unsigned int v11; // eax
  unsigned __int16 v12; // r9

  v2 = *(_DWORD *)(a1 + 1116);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v2 + 8, 0x72637250u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 4 * v2 + 8);
  *v6 = v2;
  v8 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1104), 2LL, v6);
  v7 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        2u,
        0x1Bu,
        (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids,
        v8);
    goto LABEL_37;
  }
  v7 = -1073741811;
  if ( v6[1] > 0x500 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x1Cu,
        (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids);
    goto LABEL_37;
  }
  v9 = 0LL;
  v10 = 0;
  if ( !v2 )
  {
LABEL_34:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x22u,
        (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids);
    v7 = -1073741637;
    goto LABEL_37;
  }
  do
  {
    if ( (*(_QWORD *)(a1 + 272) & 0x100000000LL) == 0 && (v6[v9 + 2] & 0x78) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v12 = 29;
      goto LABEL_25;
    }
    if ( (*(_QWORD *)(a1 + 272) & 0x100LL) == 0 && (v6[v9 + 2] & 0x78) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v12 = 30;
LABEL_25:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v12,
        (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids,
        v9);
      goto LABEL_37;
    }
    v11 = v6[v9 + 2];
    if ( (v11 & 0x78) == 0 )
      goto LABEL_18;
    if ( (v11 & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v12 = 31;
      goto LABEL_25;
    }
    if ( (v11 & 2) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v12 = 32;
      goto LABEL_25;
    }
    if ( (v11 & 4) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v12 = 33;
      goto LABEL_25;
    }
LABEL_18:
    if ( (v11 & 1) != 0 )
      v10 = 1;
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < v2 );
  if ( !v10 )
    goto LABEL_34;
  *a2 = v6;
  v6 = 0LL;
  v7 = 0;
LABEL_37:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  return v7;
}
