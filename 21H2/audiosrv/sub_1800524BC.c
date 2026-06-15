/*
 * XREFs of sub_1800524BC @ 0x1800524BC
 * Callers:
 *     sub_18000DF70 @ 0x18000DF70 (sub_18000DF70.c)
 *     sub_18005248C @ 0x18005248C (sub_18005248C.c)
 *     sub_180056BF0 @ 0x180056BF0 (sub_180056BF0.c)
 *     sub_18006224C @ 0x18006224C (sub_18006224C.c)
 *     sub_18006825C @ 0x18006825C (sub_18006825C.c)
 *     sub_1800BC578 @ 0x1800BC578 (sub_1800BC578.c)
 *     sub_1800D12E4 @ 0x1800D12E4 (sub_1800D12E4.c)
 *     sub_1800F4C54 @ 0x1800F4C54 (sub_1800F4C54.c)
 *     sub_1800F4CBC @ 0x1800F4CBC (sub_1800F4CBC.c)
 *     sub_1800FED10 @ 0x1800FED10 (sub_1800FED10.c)
 *     sub_180112B7C @ 0x180112B7C (sub_180112B7C.c)
 *     sub_18013DD70 @ 0x18013DD70 (sub_18013DD70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800524BC(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = _o_free(a1);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
