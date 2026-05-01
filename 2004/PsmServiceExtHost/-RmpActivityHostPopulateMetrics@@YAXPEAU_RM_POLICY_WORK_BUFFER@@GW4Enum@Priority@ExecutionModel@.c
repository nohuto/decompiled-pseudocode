/*
 * XREFs of ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x18006B240
 * Callers:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180071A28 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 * Callees:
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180021B98 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180029DA8 (-RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z @ 0x1800328C8 (-RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z.c)
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x180032994 (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180063D1C (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@ExecutionModel@@@Z @ 0x18006B4F0 (-RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@Execution.c)
 */

void __fastcall RmpActivityHostPopulateMetrics(__int64 a1, __int16 a2, int a3)
{
  int v4; // r12d
  __int16 v5; // r14
  struct _RM_ACTIVITY_HOST_METRICS *v6; // r15
  int v7; // r8d
  unsigned int v8; // esi
  unsigned int v9; // ebp
  bool v10; // dl
  __int64 v11; // rax
  char *v12; // rbx
  __int16 v13; // r13
  struct _RM_ACTIVITY_HOST *v14; // rcx
  int Commit; // eax
  int EffectivePriority; // eax
  unsigned __int64 v17; // rax
  unsigned int v18; // ebp
  char *v19; // rbx
  struct _RM_ACTIVITY_HOST *v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+30h] [rbp-58h]
  unsigned int v22; // [rsp+90h] [rbp+8h] BYREF
  __int16 v23; // [rsp+98h] [rbp+10h]
  int v24; // [rsp+A0h] [rbp+18h]
  bool v25; // [rsp+A8h] [rbp+20h]

  v24 = a3;
  v23 = a2;
  v4 = a3;
  v5 = a2;
  if ( *(_DWORD *)(a1 + 36) )
  {
    v6 = *(struct _RM_ACTIVITY_HOST_METRICS **)a1;
    LOWORD(v7) = 1;
    v8 = 0;
    v9 = 0;
    v10 = (a2 & 2) != 0;
    v11 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
    LOBYTE(v22) = (v5 & 1) != 0;
    v25 = v10;
    v21 = *(_QWORD *)(v11 + 48);
    do
    {
      v12 = (char *)v6 + 64 * (unsigned __int64)v9;
      v13 = *((_WORD *)v12 + 31);
      v14 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)v12 + 6);
      v20 = v14;
      if ( !_bittest16(&v13, v7) && v10 )
      {
        Commit = RmpActivityHostQueryCommit(
                   v14,
                   (unsigned __int64 *)v12 + 1,
                   0LL,
                   (unsigned __int64 *)v6 + 8 * (unsigned __int64)v9);
        v14 = v20;
        if ( Commit >= 0 )
          *((_WORD *)v12 + 31) |= 2u;
      }
      if ( (((v13 & 1) == 0) & (unsigned __int8)v22) != 0 )
      {
        EffectivePriority = RmpActivityHostQueryEffectivePriority(
                              v14,
                              *(_QWORD *)v12,
                              (enum ExecutionModel::Priority::Enum *)(v12 + 56));
        v4 = v24;
        if ( EffectivePriority >= 0 )
          *((_WORD *)v12 + 31) |= 1u;
        else
          *((_DWORD *)v12 + 14) = 101;
      }
      if ( (v5 & 1) == 0 || (int)RmpEmPriorityCompare(*((_DWORD *)v12 + 14), v4) < 0 )
      {
        if ( (v13 & 0x40) == 0
          && (v5 & 0x40) != 0
          && (int)RmpActivityHostQueryOfferedMemory(v20, (unsigned __int64 *)v12 + 5) >= 0 )
        {
          *((_WORD *)v12 + 31) |= 0x40u;
        }
        if ( v9 != v8 )
        {
          v17 = (unsigned __int64)v8 << 6;
          *(_OWORD *)((char *)v6 + v17) = *(_OWORD *)v12;
          *(_OWORD *)((char *)v6 + v17 + 16) = *((_OWORD *)v12 + 1);
          *(_OWORD *)((char *)v6 + v17 + 32) = *((_OWORD *)v12 + 2);
          *(_OWORD *)((char *)v6 + v17 + 48) = *((_OWORD *)v12 + 3);
        }
        v7 = 1;
        ++v8;
      }
      v10 = v25;
      v9 += v7;
    }
    while ( v9 < *(_DWORD *)(a1 + 36) );
    *(_DWORD *)(a1 + 36) = v8;
    if ( (v5 & 0x2C) != 0 )
    {
      RmpSystemQueryMemUtilMetricsForHosts(v6, v8, v5 & 0x2C);
      v8 = *(_DWORD *)(a1 + 36);
    }
    v18 = 0;
    if ( v8 )
    {
      do
      {
        v19 = (char *)v6 + 64 * (unsigned __int64)v18;
        if ( (v5 & 0x10) != 0
          && (v19[62] & 0x10) == 0
          && (v19[62] & 8) != 0
          && (int)RmpSystemIsActivityHostTooLargeForSwap(
                    (struct _RM_ACTIVITY_HOST_METRICS *)((char *)v6 + 64 * (unsigned __int64)v18),
                    *(unsigned int *)(v21 + 528),
                    &v22) >= 0 )
        {
          *((_WORD *)v19 + 31) |= 0x10u;
          if ( v22 )
            *((_WORD *)v19 + 30) |= 1u;
        }
        ++v18;
      }
      while ( v18 < *(_DWORD *)(a1 + 36) );
      v5 = v23;
    }
  }
  *(_WORD *)(a1 + 44) |= v5;
}
