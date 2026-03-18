/*
 * XREFs of ViHalPreprocessOptions @ 0x1409CBC40
 * Callers:
 *     ADD_MAP_REGISTERS @ 0x1409C6BA0 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x1409C6CB0 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x1409C6D4C (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x1409C6DE0 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x1409C6E74 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x1409C6F0C (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x1409C6FAC (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x1409C7040 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x1409C70CC (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1409C714C (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x1409C7FE0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409C8340 (VfBuildScatterGatherListEx.c)
 *     VfFlushAdapterBuffers @ 0x1409C86D0 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x1409C90D0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409C9490 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1409C9850 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409C9A10 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1409C9C10 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x1409CA7B8 (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x1409CAC80 (ViCheckPadding.c)
 *     ViCheckTag @ 0x1409CAE30 (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x1409CB0BC (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x1409CB1F0 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x1409CB728 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x1409CB91C (ViGetMdlBufferSa.c)
 *     ViGetRealDmaOperation @ 0x1409CBA30 (ViGetRealDmaOperation.c)
 *     ViMapDoubleBuffer @ 0x1409CC074 (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x1409CC500 (ViReleaseDmaAdapter.c)
 * Callees:
 *     DbgPrintEx @ 0x14037C640 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x14059AB34 (VfUtilDbgPrint.c)
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
