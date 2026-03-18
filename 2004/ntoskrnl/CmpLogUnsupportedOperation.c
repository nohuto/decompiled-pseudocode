/*
 * XREFs of CmpLogUnsupportedOperation @ 0x140872E88
 * Callers:
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpPerformUnloadKey @ 0x1406503FC (CmpPerformUnloadKey.c)
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 *     CmSaveKey @ 0x14071717C (CmSaveKey.c)
 *     NtCompactKeys @ 0x1408649C0 (NtCompactKeys.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmRestoreKey @ 0x140878A38 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14087958C (CmSaveMergedKeys.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x14087311C (CmpSendUnsupportedOperationTelemetryEvent.c)
 */

NTSTATUS __fastcall CmpLogUnsupportedOperation(unsigned int a1)
{
  NTSTATUS result; // eax
  unsigned int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  result = _InterlockedIncrement(&CmpUnsupportedOperationHits[a1]);
  if ( result == 0x7FFFFFFF && _InterlockedExchange(&CmpUnsupportedOperationHits[a1], 0) )
    result = CmpSendUnsupportedOperationTelemetryEvent(a1);
  if ( (unsigned int)dword_140C02130 > 5 )
  {
    v7 = 0;
    v5 = (int *)&v3;
    v3 = a1;
    v6 = 4;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140C02130,
             (unsigned __int8 *)&dword_140022ADF,
             0LL,
             0LL,
             3u,
             &v4);
  }
  return result;
}
