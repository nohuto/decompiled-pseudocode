/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C005D9FC
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C0016F2C (ACPIGpeBuildEventMasks.c)
 *     ACPIRangeValidatePciMemoryResource @ 0x1C002B1B0 (ACPIRangeValidatePciMemoryResource.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008F9E0 (ACPIRegReadAMLRegistryEntry.c)
 *     IrqArbAddAllocation @ 0x1C0092500 (IrqArbAddAllocation.c)
 *     PnpBiosResourcesToNtResources @ 0x1C009CBE0 (PnpBiosResourcesToNtResources.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00B219C (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00B2420 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1C00B2948 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C00B2B8C (OSReadNextRegValue.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00B6FEC (IrqArbpAssignIrqFromLinkNode.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7), 43LL, a5, a4, va, 4LL, 0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, va);
}
