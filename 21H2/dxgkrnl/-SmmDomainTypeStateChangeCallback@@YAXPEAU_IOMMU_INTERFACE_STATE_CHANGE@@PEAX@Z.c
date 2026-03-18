/*
 * XREFs of ?SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z @ 0x1C03C0080
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??$SmmAcquirePushLockExclusive@$0EA@@@YAXPEAU?$SYSMM_PUSHLOCK@$0EA@@@@Z @ 0x1C006D714 (--$SmmAcquirePushLockExclusive@$0EA@@@YAXPEAU-$SYSMM_PUSHLOCK@$0EA@@@@Z.c)
 *     ??$SmmReleasePushLockExclusive@$0EA@@@YAXPEAU?$SYSMM_PUSHLOCK@$0EA@@@@Z @ 0x1C006D75C (--$SmmReleasePushLockExclusive@$0EA@@@YAXPEAU-$SYSMM_PUSHLOCK@$0EA@@@@Z.c)
 *     ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x1C03C0750 (-SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 */

void __fastcall SmmDomainTypeStateChangeCallback(struct _IOMMU_INTERFACE_STATE_CHANGE *a1, _DWORD *a2)
{
  SmmAcquirePushLockExclusive<64>();
  if ( (a2[22] & 2) == 0 && (*((_DWORD *)a1 + 1) & 2) != 0 )
  {
    if ( (a2[21] & 1) == 0 )
    {
      WdLogSingleEntry1(1LL, 2227LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pAdapter->Iommu.EnablementBitmask & SYSMM_IOMMU_ENABLEMENT_REASON_DMA_REMAPPING_POLICY) != 0",
        2227LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)SysMmDisableIommu(a2, 1LL) < 0 )
    {
      WdLogSingleEntry1(1LL, 2235LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(((NTSTATUS)(Status)) >= 0)", 2235LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  a2[22] = *((_DWORD *)a1 + 1);
  SmmReleasePushLockExclusive<64>();
}
