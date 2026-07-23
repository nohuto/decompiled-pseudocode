/*
 * XREFs of AlpcpChargePagedPoolQuota @ 0x14065586C
 * Callers:
 *     AlpcpCreateReserve @ 0x14060FCC4 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x14065540C (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureMessageData @ 0x1406D34DC (AlpcpCaptureMessageData.c)
 *     AlpcpSendMessage @ 0x1406D3F60 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1406D57E0 (AlpcpCaptureMessageDataSafe.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x140695BB0 (PsChargeProcessPagedPoolQuota.c)
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
