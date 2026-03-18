/*
 * XREFs of VfReportIssueWithOptions @ 0x14059C924
 * Callers:
 *     VfCheckImageCompliance @ 0x1409C490C (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x1409C4C04 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x1409C4CAC (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1409C4D54 (VfCheckPoolType.c)
 *     ADD_MAP_REGISTERS @ 0x1409C6BB0 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x1409C6CC0 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x1409C6D5C (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x1409C6DF0 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x1409C6E84 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x1409C6F1C (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x1409C6FBC (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x1409C7050 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x1409C70DC (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1409C715C (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x1409C7FF0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409C8350 (VfBuildScatterGatherListEx.c)
 *     VfFlushAdapterBuffers @ 0x1409C86E0 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x1409C90E0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409C94A0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1409C9860 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409C9A20 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1409C9C20 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x1409CA7C8 (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x1409CAC90 (ViCheckPadding.c)
 *     ViCheckTag @ 0x1409CAE40 (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x1409CB0CC (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x1409CB200 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x1409CB738 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x1409CB92C (ViGetMdlBufferSa.c)
 *     ViGetRealDmaOperation @ 0x1409CBA40 (ViGetRealDmaOperation.c)
 *     ViMapDoubleBuffer @ 0x1409CC084 (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x1409CC510 (ViReleaseDmaAdapter.c)
 *     VfDeadlockAcquireResource @ 0x1409DA5B8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1409DB328 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x1409DB828 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x1409DBB84 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x1409DCA3C (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x1409DCBD8 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrompt @ 0x140580200 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x14059B224 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorReleaseTriageInformation @ 0x1409D4FE8 (VfErrorReleaseTriageInformation.c)
 *     VfErrorStoreTriageInformation @ 0x1409D51AC (VfErrorStoreTriageInformation.c)
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
