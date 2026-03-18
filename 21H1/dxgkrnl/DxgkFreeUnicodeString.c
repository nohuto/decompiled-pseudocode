/*
 * XREFs of DxgkFreeUnicodeString @ 0x1C0188EC0
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C00517A0 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0052A10 (DpiMiracastTargetDeviceChange.c)
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0178BC4 (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C01792CC (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     DpiGetAdapterInfo @ 0x1C017A47C (DpiGetAdapterInfo.c)
 *     DpiFreeAdapterInfo @ 0x1C02C1BB4 (DpiFreeAdapterInfo.c)
 *     DpiFdoResetFdo @ 0x1C02C7344 (DpiFdoResetFdo.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkFreeUnicodeString(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_OWORD *)a1 = 0LL;
  }
}
