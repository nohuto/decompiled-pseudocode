/*
 * XREFs of PiSwIsPdoAssociationsEmpty @ 0x1405CEF0C
 * Callers:
 *     PiSwCloseDescendants @ 0x140738E64 (PiSwCloseDescendants.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiSwIsPdoAssociationsEmpty(__int64 a1)
{
  return *(_QWORD *)(a1 + 128) == a1 + 128;
}
