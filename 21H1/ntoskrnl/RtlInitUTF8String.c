/*
 * XREFs of RtlInitUTF8String @ 0x14057F9D0
 * Callers:
 *     PiGetDefaultMessageString @ 0x1407562E4 (PiGetDefaultMessageString.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140203280 (RtlInitAnsiString.c)
 */

void __fastcall RtlInitUTF8String(STRING *a1, const char *a2)
{
  RtlInitAnsiString(a1, a2);
}
