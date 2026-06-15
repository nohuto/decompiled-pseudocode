/*
 * XREFs of sub_18004D2E0 @ 0x18004D2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004D2E0(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = off_180155698;
  *(_BYTE *)(a2 + 8) = *(_BYTE *)(a1 + 8);
  return a2;
}
