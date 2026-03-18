/*
 * XREFs of ExQueryRaiseUMExceptionOnInvalidHandleClose @ 0x14076F790
 * Callers:
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExQueryRaiseUMExceptionOnInvalidHandleClose(__int64 a1)
{
  return (*(_BYTE *)(a1 + 44) & 0x10) != 0;
}
