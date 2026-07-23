/*
 * XREFs of PnprAddDeviceResources @ 0x1408ACF40
 * Callers:
 *     <none>
 * Callees:
 *     PnprAddMemoryResources @ 0x1408ACFC4 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x1408AD1C4 (PnprAddProcessorResources.c)
 *     PnprIsMemoryDevice @ 0x1408ADD80 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x1408ADE38 (PnprIsProcessorDevice.c)
 */

__int64 __fastcall PnprAddDeviceResources(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v2; // rbx
  __int64 v3; // rdi
  __int64 v5; // rcx

  v2 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v3 = *(_QWORD *)(a2 + 8);
  if ( (unsigned __int8)PnprIsMemoryDevice(v2) )
    return PnprAddMemoryResources(v2, v3 + 24);
  if ( (unsigned __int8)PnprIsProcessorDevice(v2) )
    return PnprAddProcessorResources(v5, 0LL, 0LL, v3 + 16);
  return 0LL;
}
