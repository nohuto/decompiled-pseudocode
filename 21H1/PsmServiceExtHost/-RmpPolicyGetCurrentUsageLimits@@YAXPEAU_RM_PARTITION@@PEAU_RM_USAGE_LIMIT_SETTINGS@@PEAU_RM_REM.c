/*
 * XREFs of ?RmpPolicyGetCurrentUsageLimits@@YAXPEAU_RM_PARTITION@@PEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180034B88
 * Callers:
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180034B1C (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 * Callees:
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18000FE60 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180017480 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

void __fastcall RmpPolicyGetCurrentUsageLimits(
        struct _RM_PARTITION *a1,
        struct _RM_USAGE_LIMIT_SETTINGS *a2,
        struct _RM_REMEDIATION_ACTIONS *a3,
        struct _RM_RESOURCE_USAGE_LIMITS *a4,
        struct _RM_SYSTEM_MEMORY_METRICS *a5)
{
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  unsigned __int64 v12[2]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v13; // [rsp+40h] [rbp-68h]
  __int128 v14; // [rsp+50h] [rbp-58h]
  __int128 v15; // [rsp+60h] [rbp-48h]
  __int128 v16; // [rsp+70h] [rbp-38h]

  RmpSystemMemoryMetricsQuery(a1, (struct _RM_SYSTEM_MEMORY_METRICS *)v12);
  RmpPolicyComputeUsageLimits(a2, a3, (struct _RM_SYSTEM_MEMORY_METRICS *)v12, v12[0], a4);
  if ( a5 )
  {
    v8 = v13;
    *(_OWORD *)a5 = *(_OWORD *)v12;
    v9 = v14;
    *((_OWORD *)a5 + 1) = v8;
    v10 = v15;
    *((_OWORD *)a5 + 2) = v9;
    v11 = v16;
    *((_OWORD *)a5 + 3) = v10;
    *((_OWORD *)a5 + 4) = v11;
  }
}
