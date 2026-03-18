/*
 * XREFs of RtlInitUTF8StringEx @ 0x140583A60
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1403B6800 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __fastcall RtlInitUTF8StringEx(STRING *a1, const char *a2)
{
  return RtlInitAnsiStringEx(a1, a2);
}
