/*
 * XREFs of PsIsGuiThread @ 0x14090A0F4
 * Callers:
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

char __fastcall PsIsGuiThread(__int64 a1)
{
  return *(_BYTE *)(a1 + 120) >> 7;
}
