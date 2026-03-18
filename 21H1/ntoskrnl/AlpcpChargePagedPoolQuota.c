/*
 * XREFs of AlpcpChargePagedPoolQuota @ 0x140611E60
 * Callers:
 *     AlpcpSendMessage @ 0x14060D070 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14060E870 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCreateSecurityContext @ 0x140611CE0 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateReserve @ 0x1406C2824 (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x1406C2A78 (AlpcpCaptureMessageData.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x140671A50 (PsChargeProcessPagedPoolQuota.c)
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
