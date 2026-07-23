/*
 * XREFs of AlpcpReferenceBlob @ 0x140655834
 * Callers:
 *     AlpcpExposeViewAttribute @ 0x1405F6AF0 (AlpcpExposeViewAttribute.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1405FA450 (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpCreateReserve @ 0x14060FCC4 (AlpcpCreateReserve.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406133B4 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpCreateSecurityContext @ 0x14065540C (AlpcpCreateSecurityContext.c)
 *     AlpcReferenceBlobByHandle @ 0x140655760 (AlpcReferenceBlobByHandle.c)
 *     AlpcpCreateView @ 0x140655960 (AlpcpCreateView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140656970 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x140656DD8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpCleanupProcessViews @ 0x14067DACC (AlpcpCleanupProcessViews.c)
 *     AlpcpCreateRegion @ 0x1406A9934 (AlpcpCreateRegion.c)
 *     AlpcpCreateSection @ 0x1406AB6BC (AlpcpCreateSection.c)
 *     AlpcpFormatConnectionRequest @ 0x1406CFA9C (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1406D079C (AlpcpAcceptConnectPort.c)
 *     AlpcpFlushResourcesPort @ 0x1406D196C (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushQueue @ 0x1406D1C30 (AlpcpFlushQueue.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1406D21B0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpExposeAttributes @ 0x1406D7AE0 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x1406D8320 (AlpcpReceiveMessagePort.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x1408C3AA4 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
