/*
 * XREFs of AlpcpReferenceBlob @ 0x1407A7F84
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140665B68 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x140668084 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateSection @ 0x14066BC7C (AlpcpCreateSection.c)
 *     AlpcpCreateRegion @ 0x14066C6AC (AlpcpCreateRegion.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1406BBDFC (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpCreateReserve @ 0x1406CBB84 (AlpcpCreateReserve.c)
 *     AlpcpFlushResourcesPort @ 0x14074DC30 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushQueue @ 0x14074DEF4 (AlpcpFlushQueue.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14074E474 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14074EB48 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpPrepareViewForDelivery @ 0x1407A4774 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1407A4E8C (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x1407A66CC (AlpcpCreateView.c)
 *     AlpcpExposeViewAttribute @ 0x1407A717C (AlpcpExposeViewAttribute.c)
 *     AlpcpCreateSecurityContext @ 0x1407A74A4 (AlpcpCreateSecurityContext.c)
 *     AlpcReferenceBlobByHandle @ 0x1407A7EB0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpReceiveMessagePort @ 0x1407A8B00 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x1407A9220 (AlpcpExposeAttributes.c)
 *     AlpcpCleanupProcessViews @ 0x1407E0D28 (AlpcpCleanupProcessViews.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x1409676FC (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
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
