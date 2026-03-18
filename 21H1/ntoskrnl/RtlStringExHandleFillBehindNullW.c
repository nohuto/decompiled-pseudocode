/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x1403CB7F8
 * Callers:
 *     RtlStringCchPrintfExW @ 0x1402E5EAC (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfExW @ 0x1402E63CC (RtlStringCbPrintfExW.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
