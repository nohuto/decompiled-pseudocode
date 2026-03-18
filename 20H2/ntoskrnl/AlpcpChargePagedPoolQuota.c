/*
 * XREFs of AlpcpChargePagedPoolQuota @ 0x1405F303C
 * Callers:
 *     AlpcpCaptureMessageData @ 0x1405EB31C (AlpcpCaptureMessageData.c)
 *     AlpcpSendMessage @ 0x1405EBDA0 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1405ED620 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCreateSecurityContext @ 0x1405F2BD4 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateReserve @ 0x1406D2E24 (AlpcpCreateReserve.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x1406F5A00 (PsChargeProcessPagedPoolQuota.c)
 */

__int64 __fastcall AlpcpChargePagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 2072));
  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 2072);
    if ( v2 < a2 )
      break;
    v3 = *(_QWORD *)(a1 + 2072);
    if ( v3 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2072), v2 - a2, v2) )
      return 0LL;
  }
  return PsChargeProcessPagedPoolQuota();
}
