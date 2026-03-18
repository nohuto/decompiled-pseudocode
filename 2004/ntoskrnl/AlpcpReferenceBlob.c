/*
 * XREFs of AlpcpReferenceBlob @ 0x1406888F0
 * Callers:
 *     AlpcpCreateSection @ 0x14060D8B4 (AlpcpCreateSection.c)
 *     AlpcpCreateRegion @ 0x1406106C4 (AlpcpCreateRegion.c)
 *     AlpcpCleanupProcessViews @ 0x14061ADBC (AlpcpCleanupProcessViews.c)
 *     AlpcpFlushResourcesPort @ 0x140629370 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushQueue @ 0x140629634 (AlpcpFlushQueue.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140629BA8 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpAcceptConnectPort @ 0x14062A6A8 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x14062B0F8 (AlpcpFormatConnectionRequest.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14062EAF0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x140649380 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeAttributes @ 0x1406832E0 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x140683B20 (AlpcpReceiveMessagePort.c)
 *     AlpcReferenceBlobByHandle @ 0x140688820 (AlpcReferenceBlobByHandle.c)
 *     AlpcpCreateSecurityContext @ 0x140689E64 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateView @ 0x14068AC9C (AlpcpCreateView.c)
 *     AlpcpCreateReserve @ 0x1406E2DA4 (AlpcpCreateReserve.c)
 *     AlpcpExposeViewAttribute @ 0x1406E7180 (AlpcpExposeViewAttribute.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1406EA640 (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140702CE0 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x1408C0344 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
