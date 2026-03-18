/*
 * XREFs of NtGdiPtInRegion @ 0x1C0149290
 * Callers:
 *     <none>
 * Callees:
 *     GrePtInRegion @ 0x1C001E180 (GrePtInRegion.c)
 */

__int64 __fastcall NtGdiPtInRegion(HRGN a1, LONG a2, LONG a3)
{
  return GrePtInRegion(a1, a2, a3);
}
