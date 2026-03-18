/*
 * XREFs of ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C01D4
 * Callers:
 *     ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C05BC (-SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x1C03C0750 (-SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     SmmAssignDomain @ 0x1C006D784 (SmmAssignDomain.c)
 *     SmmClearPageManager @ 0x1C006D7E8 (SmmClearPageManager.c)
 *     SmmIommuDeleteDomain @ 0x1C03C01B0 (SmmIommuDeleteDomain.c)
 *     SmmSwapDomains @ 0x1C03C04D4 (SmmSwapDomains.c)
 */

__int64 __fastcall SmmIommuSwitchToPassthrough(struct SYSMM_ADAPTER *a1)
{
  int v2; // edi
  __int64 v3; // rsi

  if ( (dword_1C0130B0C & 2) != 0 )
  {
    v2 = -1073741823;
LABEL_4:
    WdLogSingleEntry2(3LL, a1, v2);
    return (unsigned int)v2;
  }
  v2 = SmmSwapDomains(a1, qword_1C0130B00, *((_QWORD *)a1 + 12));
  if ( v2 < 0 )
    goto LABEL_4;
  if ( *((_QWORD *)a1 + 42) )
    (*((void (__fastcall **)(struct SYSMM_ADAPTER *))a1 + 39))(a1);
  SmmClearPageManager((volatile LONG *)a1 + 28);
  v3 = *((_QWORD *)a1 + 12);
  SmmAssignDomain((__int64)a1, qword_1C0130B00, 1);
  if ( v3 )
    SmmIommuDeleteDomain();
  return (unsigned int)v2;
}
