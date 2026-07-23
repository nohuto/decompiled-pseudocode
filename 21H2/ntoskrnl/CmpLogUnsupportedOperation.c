/*
 * XREFs of CmpLogUnsupportedOperation @ 0x1408764AC
 * Callers:
 *     CmpPerformUnloadKey @ 0x1405DFA8C (CmpPerformUnloadKey.c)
 *     CmpCreateChild @ 0x14065C8F4 (CmpCreateChild.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmSaveKey @ 0x14072907C (CmSaveKey.c)
 *     NtCompactKeys @ 0x140868160 (NtCompactKeys.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmRestoreKey @ 0x14087C090 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14087CBF0 (CmSaveMergedKeys.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x14087673C (CmpSendUnsupportedOperationTelemetryEvent.c)
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
             (unsigned __int8 *)&word_140023B46,
             0LL,
             0LL,
             3u,
             &v4);
  }
  return result;
}
