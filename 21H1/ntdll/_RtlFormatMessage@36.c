/*
 * XREFs of _RtlFormatMessage@36 @ 0x4B3625E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFormatMessageEx@40 @ 0x4B2E0E20 (_RtlFormatMessageEx@40.c)
 */

NTSTATUS __cdecl RtlFormatMessage(
        PWSTR MessageFormat,
        ULONG MaximumWidth,
        BOOLEAN IgnoreInserts,
        BOOLEAN ArgumentsAreAnsi,
        BOOLEAN ArgumentsAreAnArray,
        va_list *Arguments,
        PWSTR Buffer,
        ULONG Length,
        PULONG ReturnLength)
{
  return RtlFormatMessageEx(
           MessageFormat,
           MaximumWidth,
           IgnoreInserts,
           ArgumentsAreAnsi,
           ArgumentsAreAnArray,
           Arguments,
           Buffer,
           Length,
           ReturnLength,
           0);
}
