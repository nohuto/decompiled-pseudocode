/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x1403CF28C
 * Callers:
 *     RtlStringCchPrintfExW @ 0x140267C48 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfExW @ 0x1402E4300 (RtlStringCbPrintfExW.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
