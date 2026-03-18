/*
 * XREFs of ?SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2W4SYSMM_LEGACY_IOMMU_FLAGS_MODE@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x1C0204DF0
 * Callers:
 *     ?ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z @ 0x1C0204D14 (-ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x1C03C08B4 (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 */

__int64 __fastcall SysMmFinalizeInitialization(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5,
        unsigned int *a6)
{
  int v6; // ebp
  __int64 v8; // r15
  int v9; // ecx
  __int64 v10; // r12
  int v12; // r14d

  v6 = 0;
  v8 = a4;
  v9 = *(_DWORD *)(a1 + 20);
  v10 = a3;
  *a6 = 0;
  if ( (v9 & 2) == 0 )
    goto LABEL_5;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 76) = (2 * a4) & 0xFFFB | a3 & 0xF9 | *(_DWORD *)(a1 + 76) & 0xFFFFFFF8;
  if ( (v9 & 1) != 0 )
    goto LABEL_5;
  if ( !a4 )
  {
    if ( a5 )
    {
      v12 = SysMmEnableIommu(a1, 8LL);
      if ( v12 < 0 && a5 != 1 )
        goto LABEL_10;
    }
LABEL_5:
    LOBYTE(v6) = *(_DWORD *)(a1 + 84) != 0;
    *a6 = (*a6 & 0xFFFFFFFE | v6) ^ ((unsigned __int8)(2 * *(_DWORD *)(a1 + 80)) ^ (unsigned __int8)(*(_BYTE *)a6 | v6)) & 2;
    return 0LL;
  }
  v12 = SysMmEnableIommu(a1, 32LL);
  if ( v12 >= 0 )
    goto LABEL_5;
LABEL_10:
  WdLogSingleEntry3(2LL, v10, v8, a5);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to enable IOMMU via legacy initialization. IommuSupported=%u, Required=%u, LegacyFlagMode=%u",
    v10,
    v8,
    a5,
    0LL,
    0LL);
  return (unsigned int)v12;
}
