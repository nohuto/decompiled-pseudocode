/*
 * XREFs of WmiVerifierTakeEventOwnership @ 0x14059FD08
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x1409E4FD0 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall WmiVerifierTakeEventOwnership(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0x20000) == 0;
}
