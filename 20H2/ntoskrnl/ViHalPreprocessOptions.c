/*
 * XREFs of ViHalPreprocessOptions @ 0x1409D1C70
 * Callers:
 *     ADD_MAP_REGISTERS @ 0x1409CCBD0 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x1409CCCE0 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x1409CCD7C (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x1409CCE10 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x1409CCEA4 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x1409CCF3C (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x1409CCFDC (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x1409CD070 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x1409CD0FC (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1409CD17C (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x1409CE010 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409CE370 (VfBuildScatterGatherListEx.c)
 *     VfFlushAdapterBuffers @ 0x1409CE700 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x1409CF100 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409CF4C0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1409CF880 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409CFA40 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1409CFC40 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x1409D07E8 (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x1409D0CB0 (ViCheckPadding.c)
 *     ViCheckTag @ 0x1409D0E60 (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x1409D10EC (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x1409D1220 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x1409D1758 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x1409D194C (ViGetMdlBufferSa.c)
 *     ViGetRealDmaOperation @ 0x1409D1A60 (ViGetRealDmaOperation.c)
 *     ViMapDoubleBuffer @ 0x1409D20A4 (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x1409D2530 (ViReleaseDmaAdapter.c)
 * Callees:
 *     DbgPrintEx @ 0x14037EFE0 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x14059ECC4 (VfUtilDbgPrint.c)
 */

__int64 ViHalPreprocessOptions(_DWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  int v7; // ebx
  const CHAR *v8; // rdi
  __int64 result; // rax

  v7 = a3 & 0x10000000;
  v8 = a2;
  if ( (a3 & 0x10000000) != 0 )
    a3 = (unsigned int)a3 & 0xEFFFFFFF;
  result = (unsigned int)*a1;
  if ( (_DWORD)result == -1 )
  {
    if ( (unsigned int)a3 >= 0x26 )
    {
      result = 4LL;
    }
    else
    {
      a2 = (const char *)ViHalDefaultActions;
      result = *((unsigned int *)ViHalDefaultActions + a3);
    }
    *a1 = result;
  }
  if ( (_DWORD)result )
  {
    if ( (result & 0x10) != 0 )
      *a1 = 0;
    VfUtilDbgPrint("**************** HAL Verifier Detected Violation ****************\n", a2, a3);
    VfUtilDbgPrint("**\n");
    VfUtilDbgPrint("** VF: ");
    if ( v7 )
      DbgPrintEx(0x65u, 0, v8, a5, a6);
    else
      DbgPrintEx(0x65u, 0, v8, a4, a5, a6);
    VfUtilDbgPrint("\n");
    VfUtilDbgPrint("**\n");
    return VfUtilDbgPrint("*****************************************************************\n");
  }
  return result;
}
