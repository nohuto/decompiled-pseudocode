/*
 * XREFs of sub_1800360F0 @ 0x1800360F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_1800360F0(__int64 a1, __int64 a2)
{
  return SetEvent(*(HANDLE *)(a2 + 16));
}
