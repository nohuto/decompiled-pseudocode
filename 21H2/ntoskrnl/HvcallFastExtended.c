/*
 * XREFs of HvcallFastExtended @ 0x140390450
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14030F0DC (MiFlushEntireTbDueToAttributeChange.c)
 *     HvlpFastFlushListTb @ 0x140390194 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x1403903E0 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlRestoreTime @ 0x1403F0C00 (HvlRestoreTime.c)
 *     HvlSetRootFaultReportingReady @ 0x1403F0CA0 (HvlSetRootFaultReportingReady.c)
 *     HvlpReadPerfRegister @ 0x1404F3340 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1404F4338 (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1404F43B0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1404F4460 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1404F4570 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1404F4600 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404F4770 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404F4A10 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1404F4C20 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404F4D50 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlSvmAttachPasidSpace @ 0x1404F69F0 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1404F6AE0 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1404F6B40 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1404F6BC0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1404F6CA0 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1404F6CF0 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1404F6D70 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1404F6DD0 (HvlSvmEnablePasid.c)
 *     HvlSvmSetDeviceEnabled @ 0x1404F7190 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1404F7240 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnregisterDeviceId @ 0x1404F7370 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x1404F73D8 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1404F7490 (HvlpDetachRootSvmDevice.c)
 *     HvlpFastAcknowledgePageRequest @ 0x1404F7500 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x1404F755C (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1404F761C (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x1404F76C4 (HvlpFlushPasidAddressSpace.c)
 *     HvlpProcessIommuPrq @ 0x1404F9810 (HvlpProcessIommuPrq.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1404FAD14 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTbEx @ 0x1404FADD0 (HvlpFastFlushListTbEx.c)
 *     HvlpGetVtlCallVa @ 0x1405C96CC (HvlpGetVtlCallVa.c)
 *     HvlpCondenseMicrocode @ 0x14088EA98 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088EB0C (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14022D15C (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x140409B60 (HvcallpExtendedFastHypercall.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x140409BC0 (HvcallpExtendedFastHypercallWithOutput.c)
 */

__int64 __fastcall HvcallFastExtended(__int64 a1, __int64 a2, unsigned int a3, int a4, unsigned int a5)
{
  char v9; // si
  __int64 v10; // rax
  __int64 v11; // rdi
  int v13; // [rsp+30h] [rbp-38h] BYREF
  char v14; // [rsp+34h] [rbp-34h]
  __int16 v15; // [rsp+35h] [rbp-33h]
  char v16; // [rsp+37h] [rbp-31h]
  _OWORD v17[2]; // [rsp+38h] [rbp-30h] BYREF

  memset(v17, 0, sizeof(v17));
  if ( (BYTE4(xmmword_140CFC490) & 0x10) != 0 )
  {
    v9 = 1;
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v17, 0xA0000010);
  }
  else
  {
    v9 = 0;
  }
  if ( a5 )
    v10 = HvcallpExtendedFastHypercallWithOutput(a1, a2, (a3 + 15) >> 4, a4, a5 >> 4);
  else
    v10 = HvcallpExtendedFastHypercall(a1, a2, a3);
  v11 = v10;
  if ( v9 )
  {
    v16 = 0;
    v13 = (unsigned __int16)a1;
    v14 = BYTE2(a1) & 1;
    v15 = (int)a1 < 0;
    EtwTraceTimedEvent(3954, 0xA0000010, (__int64)&v13, 8, 4200962, (__int64)v17);
  }
  return v11;
}
