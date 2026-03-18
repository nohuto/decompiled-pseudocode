/*
 * XREFs of HvcallFastExtended @ 0x14038FE30
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402E9FB8 (MiFlushEntireTbDueToAttributeChange.c)
 *     HvlpFastFlushListTb @ 0x14038FB74 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x14038FDC0 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlRestoreTime @ 0x1403EFFC0 (HvlRestoreTime.c)
 *     HvlSetRootFaultReportingReady @ 0x1403F0060 (HvlSetRootFaultReportingReady.c)
 *     HvlpReadPerfRegister @ 0x1404F1820 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1404F2818 (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1404F2890 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1404F2940 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1404F2A50 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1404F2AE0 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404F2C50 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404F2EF0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1404F3100 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404F3230 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlSvmAttachPasidSpace @ 0x1404F4ED0 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1404F4FC0 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1404F5020 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1404F50A0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1404F5180 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1404F51D0 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1404F5250 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1404F52B0 (HvlSvmEnablePasid.c)
 *     HvlSvmSetDeviceEnabled @ 0x1404F5670 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1404F5720 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnregisterDeviceId @ 0x1404F5850 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x1404F58B8 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1404F5970 (HvlpDetachRootSvmDevice.c)
 *     HvlpFastAcknowledgePageRequest @ 0x1404F59E0 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x1404F5A3C (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1404F5AFC (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x1404F5BA4 (HvlpFlushPasidAddressSpace.c)
 *     HvlpProcessIommuPrq @ 0x1404F7CF0 (HvlpProcessIommuPrq.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1404F91F4 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTbEx @ 0x1404F92B0 (HvlpFastFlushListTbEx.c)
 *     HvlpGetVtlCallVa @ 0x1405C7C6C (HvlpGetVtlCallVa.c)
 *     HvlpCondenseMicrocode @ 0x140891398 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14089140C (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402FB2A0 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14030EAD8 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1404072E0 (HvcallpExtendedFastHypercall.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x140407340 (HvcallpExtendedFastHypercallWithOutput.c)
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
