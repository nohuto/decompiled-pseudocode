/*
 * XREFs of VfReportIssueWithOptions @ 0x1405A03C4
 * Callers:
 *     VfCheckImageCompliance @ 0x1409CA92C (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x1409CAC24 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x1409CACCC (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1409CAD74 (VfCheckPoolType.c)
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
 *     VfDeadlockAcquireResource @ 0x1409E05D8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1409E1348 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x1409E1848 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x1409E1BA4 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x1409E2A5C (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x1409E2BF8 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrompt @ 0x140583B60 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x14059ECC4 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorReleaseTriageInformation @ 0x1409DB008 (VfErrorReleaseTriageInformation.c)
 *     VfErrorStoreTriageInformation @ 0x1409DB1CC (VfErrorStoreTriageInformation.c)
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
