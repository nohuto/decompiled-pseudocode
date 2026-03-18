/*
 * XREFs of ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x1C03C08B4
 * Callers:
 *     SysMmTestEnableIommu @ 0x1C0071370 (SysMmTestEnableIommu.c)
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x1C01F5A3C (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUS.c)
 *     ?SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2W4SYSMM_LEGACY_IOMMU_FLAGS_MODE@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x1C0204DF0 (-SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2W4SYSMM_LEGACY_IOMMU_FLA.c)
 *     DxgpEnableIommuFromReference @ 0x1C02C3B38 (DxgpEnableIommuFromReference.c)
 *     ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C05BC (-SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ??$SmmAcquirePushLockExclusive@$0CF@@@YAXPEAU?$SYSMM_PUSHLOCK@$0CF@@@@Z @ 0x1C006D6F4 (--$SmmAcquirePushLockExclusive@$0CF@@@YAXPEAU-$SYSMM_PUSHLOCK@$0CF@@@@Z.c)
 *     ??$SmmReleasePushLockExclusive@$02@@YAXPEAU?$SYSMM_PUSHLOCK@$02@@@Z @ 0x1C006D73C (--$SmmReleasePushLockExclusive@$02@@YAXPEAU-$SYSMM_PUSHLOCK@$02@@@Z.c)
 *     SmmIommuSwitchToTranslation @ 0x1C03C028C (SmmIommuSwitchToTranslation.c)
 *     ?SmmTelemetryEnableIommu@@YAXPEBUSYSMM_ADAPTER@@II@Z @ 0x1C03C1FAC (-SmmTelemetryEnableIommu@@YAXPEBUSYSMM_ADAPTER@@II@Z.c)
 */

__int64 __fastcall SysMmEnableIommu(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // [rsp+20h] [rbp-18h]

  v3 = a2;
  if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
  {
    WdLogSingleEntry1(3LL, 2412LL);
    return 3221225485LL;
  }
  v5 = 0;
  SmmAcquirePushLockExclusive<37>(a1 + 64);
  v8 = *(unsigned int *)(a1 + 84);
  if ( ((unsigned int)v8 & (unsigned int)v3) != 0 )
    WdLogSingleEntry5(0LL, 484LL, 2LL, a1, v8, v3);
  v9 = WdLogNewEntry5_WdTrace(v7, v6);
  *(_QWORD *)(v9 + 24) = a1;
  *(_QWORD *)(v9 + 32) = v3;
  if ( *(_DWORD *)(a1 + 84) )
    goto LABEL_8;
  if ( (*(_DWORD *)(a1 + 20) & 4) != 0 )
  {
    v5 = SmmIommuSwitchToTranslation(a1);
    if ( v5 >= 0 )
    {
LABEL_8:
      SmmTelemetryEnableIommu((const struct SYSMM_ADAPTER *)a1, v3, *(_DWORD *)(a1 + 84));
      if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
      {
        LODWORD(v11) = v3;
        McTemplateK0pt_EtwWriteTransfer(SysMmControlGuid_Context, &EnableIommu, v10, a1, v11);
      }
      *(_DWORD *)(a1 + 84) |= v3;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, a1);
    v5 = -1073741637;
  }
  SmmReleasePushLockExclusive<3>(a1 + 64);
  return (unsigned int)v5;
}
