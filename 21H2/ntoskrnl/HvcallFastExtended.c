/*
 * XREFs of HvcallFastExtended @ 0x14039DD80
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026A230 (MiFlushEntireTbDueToAttributeChange.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x14039DA74 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushListTb @ 0x14039DC8C (HvlpFastFlushListTb.c)
 *     HvlRestoreTime @ 0x1404175E0 (HvlRestoreTime.c)
 *     HvlpReadPerfRegister @ 0x140544A28 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x140545BD8 (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140545D80 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140545E50 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x140545F70 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140546040 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1405460D0 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x140546150 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140546300 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1405465C0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1405467D0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140546900 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlSetRootFaultReportingReady @ 0x1405484D0 (HvlSetRootFaultReportingReady.c)
 *     HvlSvmAttachPasidSpace @ 0x140548790 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x140548880 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1405488E0 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x140548960 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x140548A40 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x140548A90 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x140548B10 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x140548B70 (HvlSvmEnablePasid.c)
 *     HvlSvmSetDeviceEnabled @ 0x140548F40 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x140548FF0 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnblockDefaultDma @ 0x140549070 (HvlUnblockDefaultDma.c)
 *     HvlUnregisterDeviceId @ 0x1405491B0 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x140549218 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1405492D8 (HvlpDetachRootSvmDevice.c)
 *     HvlpFastAcknowledgePageRequest @ 0x14054934C (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x1405493A8 (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x140549468 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x140549510 (HvlpFlushPasidAddressSpace.c)
 *     HvlpProcessIommuPrq @ 0x14054B620 (HvlpProcessIommuPrq.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x14054CB14 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTbEx @ 0x14054CBD0 (HvlpFastFlushListTbEx.c)
 *     HvlpGetVtlCallVa @ 0x1406538B4 (HvlpGetVtlCallVa.c)
 *     HvlpAddRemovePhysicalMemory @ 0x140653AA4 (HvlpAddRemovePhysicalMemory.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140931378 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x14042BA10 (HvcallpExtendedFastHypercall.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x14042BA70 (HvcallpExtendedFastHypercallWithOutput.c)
 *     EtwTraceTimedEvent @ 0x14045FBE2 (EtwTraceTimedEvent.c)
 */

__int64 __fastcall HvcallFastExtended(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
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
  if ( (BYTE4(xmmword_140D06910) & 0x10) != 0 )
  {
    v9 = 1;
    EtwGetKernelTraceTimestamp((unsigned __int64)v17, 0xA0000010uLL);
  }
  else
  {
    v9 = 0;
  }
  if ( a5 )
    v10 = HvcallpExtendedFastHypercallWithOutput(a1, a2, (a3 + 15) >> 4, 0, a4, a5 >> 4);
  else
    v10 = HvcallpExtendedFastHypercall(a1, a2, a3);
  v11 = v10;
  if ( v9 )
  {
    v16 = 0;
    v13 = (unsigned __int16)a1;
    v14 = BYTE2(a1) & 1;
    v15 = (int)a1 < 0;
    EtwTraceTimedEvent(3954, -1610612720, (unsigned int)&v13, 8, 4200962, (__int64)v17);
  }
  return v11;
}
