/*
 * XREFs of ndisGetMiniportFromObject @ 0x1C0121C54
 * Callers:
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1C0121C88 (ndisReportTimeoutWaitingForExternalDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetMiniportFromObject(__int64 a1)
{
  if ( a1 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 5:
        return *(_QWORD *)(a1 + 32);
      case 0x11:
        return a1;
      case 0x12:
        return *(_QWORD *)(a1 + 16);
    }
  }
  return 0LL;
}
