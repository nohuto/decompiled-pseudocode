/*
 * XREFs of CmpHasKcbBeenMirrored @ 0x1402BBFC8
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406556B0 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpHasKcbBeenMirrored(__int64 a1)
{
  return (*(_DWORD *)(a1 + 184) & 0x800000) != 0;
}
