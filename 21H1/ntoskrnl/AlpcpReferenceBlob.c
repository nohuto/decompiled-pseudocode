/*
 * XREFs of AlpcpReferenceBlob @ 0x140610770
 * Callers:
 *     AlpcpExposeAttributes @ 0x14060B170 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x14060B9B0 (AlpcpReceiveMessagePort.c)
 *     AlpcReferenceBlobByHandle @ 0x1406106A0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpCreateSecurityContext @ 0x140611CE0 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateView @ 0x140612B1C (AlpcpCreateView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140615DDC (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateSection @ 0x140642A04 (AlpcpCreateSection.c)
 *     AlpcpCreateRegion @ 0x1406458E4 (AlpcpCreateRegion.c)
 *     AlpcpFlushResourcesPort @ 0x140646F20 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushQueue @ 0x1406471E4 (AlpcpFlushQueue.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140647758 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpAcceptConnectPort @ 0x140648258 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x140648CA8 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCleanupProcessViews @ 0x1406604DC (AlpcpCleanupProcessViews.c)
 *     AlpcpCreateReserve @ 0x1406C2824 (AlpcpCreateReserve.c)
 *     AlpcpExposeViewAttribute @ 0x1406C6888 (AlpcpExposeViewAttribute.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1406C9490 (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406DFF50 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpPrepareViewForDelivery @ 0x14070A820 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x1408BEFF4 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  __int64 v2; // r8

  _m_prefetchw((const void *)(BugCheckParameter2 - 24));
  result = *(_QWORD *)(BugCheckParameter2 - 24);
  while ( result > 0 )
  {
    v2 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 - 24), result + 1, result);
    if ( result == v2 )
      return ++result;
  }
  if ( result )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x20uLL, result);
  return result;
}
