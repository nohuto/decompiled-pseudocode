/*
 * XREFs of MiIsTargetFullyRetpolined @ 0x14053E4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsTargetFullyRetpolined(__int64 a1)
{
  return _bittest64((const signed __int64 *)qword_140C4CBA0, (unsigned __int64)(a1 + 0x800000000000LL) >> 16);
}
