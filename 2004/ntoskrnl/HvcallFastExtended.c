/*
 * XREFs of HvcallFastExtended @ 0x14038D940
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402F4E60 (MiFlushEntireTbDueToAttributeChange.c)
 *     HvlpFastFlushListTb @ 0x14038D684 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x14038D8D0 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlSetRootFaultReportingReady @ 0x1403ED110 (HvlSetRootFaultReportingReady.c)
 *     HvlpReadPerfRegister @ 0x1404EDFB4 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1404EEFBC (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1404EF040 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1404EF0F0 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1404EF200 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1404EF290 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404EF400 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404EF6A0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1404EF8B0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404EF9E0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlSvmAttachPasidSpace @ 0x1404F1660 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1404F1750 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1404F17B0 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1404F1830 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1404F1910 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1404F1960 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1404F19E0 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1404F1A40 (HvlSvmEnablePasid.c)
 *     HvlSvmSetDeviceEnabled @ 0x1404F1E00 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1404F1EB0 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnregisterDeviceId @ 0x1404F1FE0 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x1404F2048 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1404F2100 (HvlpDetachRootSvmDevice.c)
 *     HvlpFastAcknowledgePageRequest @ 0x1404F2170 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x1404F21CC (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1404F228C (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x1404F2334 (HvlpFlushPasidAddressSpace.c)
 *     HvlpProcessIommuPrq @ 0x1404F4480 (HvlpProcessIommuPrq.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1404F5964 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTbEx @ 0x1404F5A20 (HvlpFastFlushListTbEx.c)
 *     HvlpGetVtlCallVa @ 0x1405C3FDC (HvlpGetVtlCallVa.c)
 *     HvlpCondenseMicrocode @ 0x14088B848 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088B8BC (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140328270 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14033BE50 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x140400EE0 (HvcallpExtendedFastHypercall.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x140400F40 (HvcallpExtendedFastHypercallWithOutput.c)
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
    EtwTraceTimedEvent(0xF72u, 0xA0000010, (__int64)&v13, 8, 0x401A02u, (__int64)v17);
  }
  return v11;
}
