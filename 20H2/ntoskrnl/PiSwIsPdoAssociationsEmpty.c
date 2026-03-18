/*
 * XREFs of PiSwIsPdoAssociationsEmpty @ 0x1405CCE10
 * Callers:
 *     PiSwCloseDescendants @ 0x140741D68 (PiSwCloseDescendants.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiSwIsPdoAssociationsEmpty(__int64 a1)
{
  return *(_QWORD *)(a1 + 128) == a1 + 128;
}
