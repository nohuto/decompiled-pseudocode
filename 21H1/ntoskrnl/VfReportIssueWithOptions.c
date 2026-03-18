/*
 * XREFs of VfReportIssueWithOptions @ 0x14059C234
 * Callers:
 *     VfCheckImageCompliance @ 0x1409C48FC (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x1409C4BF4 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x1409C4C9C (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1409C4D44 (VfCheckPoolType.c)
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
 *     VfDeadlockAcquireResource @ 0x1409DA558 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1409DB2C8 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x1409DB7C8 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x1409DBB24 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x1409DC9DC (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x1409DCB78 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrompt @ 0x14057FAB0 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x14059AB34 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD34 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorReleaseTriageInformation @ 0x1409D4F88 (VfErrorReleaseTriageInformation.c)
 *     VfErrorStoreTriageInformation @ 0x1409D514C (VfErrorStoreTriageInformation.c)
 */

void __fastcall VfReportIssueWithOptions(
        ULONG a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR a5,
        _DWORD *Response)
{
  _DWORD *v6; // rbx
  int v7; // edi
  int v8; // esi
  int v10; // ebp
  int v11; // r10d

  v6 = Response;
  v7 = a4;
  v8 = a3;
  v10 = a2;
  v11 = *Response;
  if ( *Response && (v11 & 2) == 0 )
  {
    if ( (((v11 & 8) == 0) & !_bittest(&VfOptionFlags, 9u)) != 0 && (_BYTE)KdDebuggerEnabled )
    {
      if ( (v11 & 4) != 0 )
      {
        while ( 1 )
        {
          VfUtilDbgPrint("\n*** Verifier assertion failed ***\n");
          DbgPrompt("(B)reak, (I)gnore, (W)arn only, (R)emove assert? ", (PCH)&Response, 2u);
          switch ( (_BYTE)Response )
          {
            case 'B':
              goto LABEL_15;
            case 'I':
              return;
            case 'R':
              goto LABEL_16;
            case 'W':
              goto LABEL_14;
            case 'b':
LABEL_15:
              VfErrorStoreTriageInformation(a1, v10, v8, v7, a5);
              __debugbreak();
            case 'i':
              return;
          }
          if ( (_BYTE)Response == 114 )
            break;
          if ( (_BYTE)Response == 119 )
          {
LABEL_14:
            *v6 = 2;
            return;
          }
        }
LABEL_16:
        *v6 = 0;
      }
    }
    else
    {
      VerifierBugCheckIfAppropriate(a1, a2, a3, a4, a5);
    }
  }
}
