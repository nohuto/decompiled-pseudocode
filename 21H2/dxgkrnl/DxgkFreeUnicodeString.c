/*
 * XREFs of DxgkFreeUnicodeString @ 0x1C0205754
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C00612C0 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0062480 (DpiMiracastTargetDeviceChange.c)
 *     DpiGetAdapterInfo @ 0x1C01FD7E8 (DpiGetAdapterInfo.c)
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C020271C (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0202E20 (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     DpiFreeAdapterInfo @ 0x1C0386FF4 (DpiFreeAdapterInfo.c)
 *     DpiFdoResetFdo @ 0x1C038B234 (DpiFdoResetFdo.c)
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
