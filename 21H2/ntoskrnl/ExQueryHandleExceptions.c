/*
 * XREFs of ExQueryHandleExceptions @ 0x14094CA64
 * Callers:
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExQueryHandleExceptions(__int64 a1)
{
  return (*(_BYTE *)(a1 + 44) & 2) != 0;
}
