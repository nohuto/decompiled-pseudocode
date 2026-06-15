/*
 * XREFs of sub_1800337FC @ 0x1800337FC
 * Callers:
 *     sub_18003CEDC @ 0x18003CEDC (sub_18003CEDC.c)
 * Callees:
 *     sub_1800361E8 @ 0x1800361E8 (sub_1800361E8.c)
 */

__int64 __fastcall sub_1800337FC(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    sub_1800361E8(v2, a1[1]);
    return _o_free(*a1);
  }
  return result;
}
