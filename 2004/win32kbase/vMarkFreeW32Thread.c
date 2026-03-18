/*
 * XREFs of vMarkFreeW32Thread @ 0x1C004D480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vMarkFreeW32Thread(__int64 a1)
{
  *(_DWORD *)(a1 + 1224) |= 0x1000u;
}
