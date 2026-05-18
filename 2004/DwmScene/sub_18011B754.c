/*
 * XREFs of sub_18011B754 @ 0x18011B754
 * Callers:
 *     sub_18011A980 @ 0x18011A980 (sub_18011A980.c)
 * Callees:
 *     sub_1800899B4 @ 0x1800899B4 (sub_1800899B4.c)
 *     sub_180118D90 @ 0x180118D90 (sub_180118D90.c)
 *     sub_18011B81C @ 0x18011B81C (sub_18011B81C.c)
 */

__int64 __fastcall sub_18011B754(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  __int64 result; // rax

  *a1 = *(_DWORD *)a2;
  v3 = (__int64)(a1 + 2);
  try
  {
    sub_180118D90(v3, **(_QWORD ***)(a2 + 8), *(_QWORD **)(a2 + 8));
    v4 = sub_1800899B4((__int64)a1);
    result = sub_18011B81C(a1, v4);
  }
  catch ( ... )
  {
    sub_18011B9E8(a1);
    throw;
  }
  return result;
}
