/*
 * XREFs of ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0069978
 * Callers:
 *     NtFlipObjectAddContent @ 0x1C0067CB0 (NtFlipObjectAddContent.c)
 *     NtFlipObjectAddPoolBuffer @ 0x1C0067E00 (NtFlipObjectAddPoolBuffer.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x1C0067F90 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectConsumerAdjustUsageReference @ 0x1C00680F0 (NtFlipObjectConsumerAdjustUsageReference.c)
 *     NtFlipObjectConsumerBeginProcessPresent @ 0x1C00681F0 (NtFlipObjectConsumerBeginProcessPresent.c)
 *     NtFlipObjectConsumerEndProcessPresent @ 0x1C0068320 (NtFlipObjectConsumerEndProcessPresent.c)
 *     NtFlipObjectConsumerPostMessage @ 0x1C00683C0 (NtFlipObjectConsumerPostMessage.c)
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x1C00684A0 (NtFlipObjectConsumerQueryBufferInfo.c)
 *     NtFlipObjectDisconnectEndpoint @ 0x1C0068720 (NtFlipObjectDisconnectEndpoint.c)
 *     NtFlipObjectEnablePresentStatisticsType @ 0x1C00687C0 (NtFlipObjectEnablePresentStatisticsType.c)
 *     NtFlipObjectOpen @ 0x1C0068860 (NtFlipObjectOpen.c)
 *     NtFlipObjectPresentCancel @ 0x1C00689B0 (NtFlipObjectPresentCancel.c)
 *     NtFlipObjectQueryBufferAvailableEvent @ 0x1C0068A80 (NtFlipObjectQueryBufferAvailableEvent.c)
 *     NtFlipObjectQueryEndpointConnected @ 0x1C0068BD0 (NtFlipObjectQueryEndpointConnected.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x1C0068CC0 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x1C0068DB0 (NtFlipObjectReadNextMessageToProducer.c)
 *     NtFlipObjectRemoveContent @ 0x1C0068EB0 (NtFlipObjectRemoveContent.c)
 *     NtFlipObjectRemovePoolBuffer @ 0x1C0068FA0 (NtFlipObjectRemovePoolBuffer.c)
 *     NtFlipObjectSetContent @ 0x1C0069090 (NtFlipObjectSetContent.c)
 *     NtFlipObjectSetMaximumBackchannelQueueDepth @ 0x1C0069220 (NtFlipObjectSetMaximumBackchannelQueueDepth.c)
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAPEAVCFlipTokenOperation@@@Z @ 0x1C0069574 (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAPEAVCFlipTokenOperation@@@Z.c)
 *     ?FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C0069608 (-FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerToke.c)
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C000FB34 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall FlipManagerObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        struct FlipManagerObject **a4)
{
  __int64 result; // rax
  struct FlipManagerObject *v6; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  result = DxgkCompositionObject::ResolveHandle(a1, a2, 1, 4, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
