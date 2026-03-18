/*
 * XREFs of WmiVerifierTakeEventOwnership @ 0x1405A3E98
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x1409EB050 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall WmiVerifierTakeEventOwnership(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0x20000) == 0;
}
