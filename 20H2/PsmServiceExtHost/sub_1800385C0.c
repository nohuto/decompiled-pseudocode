/*
 * XREFs of sub_1800385C0 @ 0x1800385C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800385C0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 == -1 )
    return sub_1800385F4(&byte_1800B4010, a1, a2);
  else
    return sub_180038A00(&byte_1800B4010, a1, a2, a3);
}
