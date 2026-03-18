/*
 * XREFs of AlpcpReferenceBlob @ 0x1405F3004
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x1405E730C (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1405E85DC (AlpcpAcceptConnectPort.c)
 *     AlpcpFlushResourcesPort @ 0x1405E97AC (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushQueue @ 0x1405E9A70 (AlpcpFlushQueue.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1405E9FF0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpExposeAttributes @ 0x1405EF9C0 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x1405F0200 (AlpcpReceiveMessagePort.c)
 *     AlpcpCreateSecurityContext @ 0x1405F2BD4 (AlpcpCreateSecurityContext.c)
 *     AlpcReferenceBlobByHandle @ 0x1405F2F30 (AlpcReferenceBlobByHandle.c)
 *     AlpcpCreateView @ 0x1405F4E04 (AlpcpCreateView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1405F7698 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x14064AA48 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpCleanupProcessViews @ 0x1406613EC (AlpcpCleanupProcessViews.c)
 *     AlpcpExposeViewAttribute @ 0x1406BCA0C (AlpcpExposeViewAttribute.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1406BE4C0 (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpCreateReserve @ 0x1406D2E24 (AlpcpCreateReserve.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406D5D24 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpCreateSection @ 0x1407098CC (AlpcpCreateSection.c)
 *     AlpcpCreateRegion @ 0x14070CF64 (AlpcpCreateRegion.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x1408C6184 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
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
