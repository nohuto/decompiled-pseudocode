/*
 * XREFs of ?RmpOfferLazyDecommitQueuePartitionHosts@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180072FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18000FE60 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180071A28 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 */

__int64 __fastcall RmpOfferLazyDecommitQueuePartitionHosts(struct _RM_PARTITION *a1, _QWORD *a2)
{
  unsigned int v2; // edi
  char *v3; // rsi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  _BYTE v13[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+38h] [rbp-50h]
  __int64 v15; // [rsp+70h] [rbp-18h]

  v2 = 0;
  v3 = (char *)a1 + 144;
  *((_WORD *)a1 + 94) = 0;
  RmpPolicyPopulateActivityHostMetrics(a1, 0, (__int64)a1 + 144, 64, 0LL, 0LL);
  RmpSystemMemoryMetricsQuery(a1, (struct _RM_SYSTEM_MEMORY_METRICS *)v13);
  v6 = v14 * (unsigned __int64)*((unsigned int *)a2 + 12) / 0x64 / RmpPageSize;
  if ( *((_DWORD *)v3 + 9) )
  {
    do
    {
      v7 = *(_QWORD *)v3 + ((unsigned __int64)v2 << 6);
      if ( *(_QWORD *)(v7 + 40) >= (unsigned __int64)*((unsigned int *)a2 + 11) )
      {
        v8 = *(_QWORD *)(v7 + 48);
        if ( v15 - *(_QWORD *)(v8 + 1224) >= v6 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 16)) <= 1 )
            __fastfail(0xEu);
          v9 = a2 + 1;
          v10 = (_QWORD *)(v8 + 1272);
          v11 = a2[1];
          if ( *(_QWORD **)(v11 + 8) != a2 + 1 )
            __fastfail(3u);
          *v10 = v11;
          v10[1] = v9;
          *(_QWORD *)(v11 + 8) = v10;
          *v9 = v10;
        }
      }
      ++v2;
    }
    while ( v2 < *((_DWORD *)v3 + 9) );
  }
  return 0LL;
}
