/*
 * XREFs of PnprAddDeviceResources @ 0x1408AF810
 * Callers:
 *     <none>
 * Callees:
 *     PnprAddMemoryResources @ 0x1408AF894 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x1408AFA94 (PnprAddProcessorResources.c)
 *     PnprIsMemoryDevice @ 0x1408B0650 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x1408B0708 (PnprIsProcessorDevice.c)
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
