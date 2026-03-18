/*
 * XREFs of GreMarkDeletableBitmap @ 0x1C0032540
 * Callers:
 *     <none>
 * Callees:
 *     HmgMarkDeletable @ 0x1C0032590 (HmgMarkDeletable.c)
 */

__int64 __fastcall GreMarkDeletableBitmap(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 5;
  return HmgMarkDeletable(a1, a2);
}
