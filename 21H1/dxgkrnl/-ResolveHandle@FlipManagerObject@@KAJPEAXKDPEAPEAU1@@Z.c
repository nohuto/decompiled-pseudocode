/*
 * XREFs of ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0068918
 * Callers:
 *     NtFlipObjectAddContent @ 0x1C0066C50 (NtFlipObjectAddContent.c)
 *     NtFlipObjectAddPoolBuffer @ 0x1C0066DA0 (NtFlipObjectAddPoolBuffer.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x1C0066F30 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectConsumerAdjustUsageReference @ 0x1C0067090 (NtFlipObjectConsumerAdjustUsageReference.c)
 *     NtFlipObjectConsumerBeginProcessPresent @ 0x1C0067190 (NtFlipObjectConsumerBeginProcessPresent.c)
 *     NtFlipObjectConsumerEndProcessPresent @ 0x1C00672C0 (NtFlipObjectConsumerEndProcessPresent.c)
 *     NtFlipObjectConsumerPostMessage @ 0x1C0067360 (NtFlipObjectConsumerPostMessage.c)
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x1C0067440 (NtFlipObjectConsumerQueryBufferInfo.c)
 *     NtFlipObjectDisconnectEndpoint @ 0x1C00676C0 (NtFlipObjectDisconnectEndpoint.c)
 *     NtFlipObjectEnablePresentStatisticsType @ 0x1C0067760 (NtFlipObjectEnablePresentStatisticsType.c)
 *     NtFlipObjectOpen @ 0x1C0067800 (NtFlipObjectOpen.c)
 *     NtFlipObjectPresentCancel @ 0x1C0067950 (NtFlipObjectPresentCancel.c)
 *     NtFlipObjectQueryBufferAvailableEvent @ 0x1C0067A20 (NtFlipObjectQueryBufferAvailableEvent.c)
 *     NtFlipObjectQueryEndpointConnected @ 0x1C0067B70 (NtFlipObjectQueryEndpointConnected.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x1C0067C60 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x1C0067D50 (NtFlipObjectReadNextMessageToProducer.c)
 *     NtFlipObjectRemoveContent @ 0x1C0067E50 (NtFlipObjectRemoveContent.c)
 *     NtFlipObjectRemovePoolBuffer @ 0x1C0067F40 (NtFlipObjectRemovePoolBuffer.c)
 *     NtFlipObjectSetContent @ 0x1C0068030 (NtFlipObjectSetContent.c)
 *     NtFlipObjectSetMaximumBackchannelQueueDepth @ 0x1C00681C0 (NtFlipObjectSetMaximumBackchannelQueueDepth.c)
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAPEAVCFlipTokenOperation@@@Z @ 0x1C0068514 (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAPEAVCFlipTokenOperation@@@Z.c)
 *     ?FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C00685A8 (-FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerToke.c)
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C00032F4 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
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
