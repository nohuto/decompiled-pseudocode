/*
 * XREFs of wistd::__function::__func__lambda_025d670431b0b6098eb2d1c47c9e9598__void___cdecl(unsigned_char_const_&)_::__move @ 0x1802C9670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_025d670431b0b6098eb2d1c47c9e9598__void___cdecl_unsigned_char_const____::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  *a2 = &off_180494490;
  a2[1] = 0LL;
  a2[2] = 0LL;
  a2[1] = *(_QWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 16);
  a2[2] = result;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
