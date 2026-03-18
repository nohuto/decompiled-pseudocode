/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x1403CC5F0
 * Callers:
 *     RtlStringCchPrintfExW @ 0x1402029D8 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfExW @ 0x14026A460 (RtlStringCbPrintfExW.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
