/*
 * XREFs of RtlInitUTF8StringEx @ 0x140580100
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1403B5740 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __fastcall RtlInitUTF8StringEx(STRING *a1, const char *a2)
{
  return RtlInitAnsiStringEx(a1, a2);
}
