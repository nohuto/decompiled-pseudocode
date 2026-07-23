/*
 * XREFs of _RtlCopyExtendedContext@12 @ 0x4B35B760
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpCopyExtendedContext@24 @ 0x4B35BC77 (_RtlpCopyExtendedContext@24.c)
 */

NTSTATUS __cdecl RtlCopyExtendedContext(PCONTEXT_EX Destination, ULONG ContextFlags, PCONTEXT_EX Source)
{
  int v3; // ecx

  return RtlpCopyExtendedContext(v3, ContextFlags, Source, v3);
}
