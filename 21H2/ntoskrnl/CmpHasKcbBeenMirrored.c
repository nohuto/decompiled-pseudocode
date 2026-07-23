/*
 * XREFs of CmpHasKcbBeenMirrored @ 0x14023A1D8
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14064A4D0 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpHasKcbBeenMirrored(__int64 a1)
{
  return (*(_DWORD *)(a1 + 184) & 0x800000) != 0;
}
