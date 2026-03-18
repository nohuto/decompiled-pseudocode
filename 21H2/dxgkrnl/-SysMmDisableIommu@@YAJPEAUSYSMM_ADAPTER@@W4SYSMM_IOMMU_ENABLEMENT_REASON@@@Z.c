/*
 * XREFs of ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x1C03C0750
 * Callers:
 *     SysMmTestDisableIommu @ 0x1C0071350 (SysMmTestDisableIommu.c)
 *     ?DisableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C02C357C (-DisableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z @ 0x1C03C0080 (-SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C0025FEC (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ??$SmmAcquirePushLockExclusive@$0CF@@@YAXPEAU?$SYSMM_PUSHLOCK@$0CF@@@@Z @ 0x1C006D6F4 (--$SmmAcquirePushLockExclusive@$0CF@@@YAXPEAU-$SYSMM_PUSHLOCK@$0CF@@@@Z.c)
 *     ??$SmmReleasePushLockExclusive@$02@@YAXPEAU?$SYSMM_PUSHLOCK@$02@@@Z @ 0x1C006D73C (--$SmmReleasePushLockExclusive@$02@@YAXPEAU-$SYSMM_PUSHLOCK@$02@@@Z.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C01D4 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmTelemetryDisableIommu@@YAXPEBUSYSMM_ADAPTER@@II@Z @ 0x1C03C1EF8 (-SmmTelemetryDisableIommu@@YAXPEBUSYSMM_ADAPTER@@II@Z.c)
 */

__int64 __fastcall SysMmDisableIommu(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // [rsp+20h] [rbp-38h]

  v3 = a2;
  if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
  {
    WdLogSingleEntry1(3LL, 2495LL);
    return 3221225485LL;
  }
  else if ( SmmUseIommuV2Interface() )
  {
    v6 = 0;
    SmmAcquirePushLockExclusive<37>(v5 + 64);
    v9 = *(unsigned int *)(a1 + 84);
    if ( ((unsigned int)v9 & (unsigned int)v3) == 0 )
      WdLogSingleEntry5(0LL, 484LL, 3LL, a1, v9, v3);
    v10 = WdLogNewEntry5_WdTrace(v8, v7);
    *(_QWORD *)(v10 + 24) = a1;
    *(_QWORD *)(v10 + 32) = v3;
    if ( *(_DWORD *)(a1 + 84) != (_DWORD)v3 || (v6 = SmmIommuSwitchToPassthrough((struct SYSMM_ADAPTER *)a1), v6 >= 0) )
    {
      SmmTelemetryDisableIommu((const struct SYSMM_ADAPTER *)a1, v3, *(_DWORD *)(a1 + 84));
      if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
      {
        LODWORD(v12) = v3;
        McTemplateK0pt_EtwWriteTransfer(SysMmControlGuid_Context, (const EVENT_DESCRIPTOR *)"\n", v11, a1, v12);
      }
      *(_DWORD *)(a1 + 84) &= ~(_DWORD)v3;
    }
    SmmReleasePushLockExclusive<3>(a1 + 64);
    return (unsigned int)v6;
  }
  else
  {
    WdLogSingleEntry1(1LL, 2501LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Can only disable IOMMU from v2 interface",
      2501LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
}
