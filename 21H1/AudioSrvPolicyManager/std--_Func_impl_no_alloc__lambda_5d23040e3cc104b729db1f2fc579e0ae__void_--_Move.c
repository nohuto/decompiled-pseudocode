/*
 * XREFs of std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Move @ 0x18002A230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)a2 = off_1800443A8;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a2 + 8) = v2;
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 20);
  return a2;
}
