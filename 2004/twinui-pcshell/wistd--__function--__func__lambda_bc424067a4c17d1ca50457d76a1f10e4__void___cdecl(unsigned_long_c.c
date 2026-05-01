/*
 * XREFs of wistd::__function::__func__lambda_bc424067a4c17d1ca50457d76a1f10e4__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1803486A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_bc424067a4c17d1ca50457d76a1f10e4__void___cdecl_unsigned_long_const____::operator()(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 688LL) + 104LL);
  *(_BYTE *)(result + 522) = *a2 != 0;
  return result;
}
