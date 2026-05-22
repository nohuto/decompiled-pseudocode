/*
 * XREFs of _lambda_e899d24a1372ab43d53191ccbd314951_::_lambda_e899d24a1372ab43d53191ccbd314951_ @ 0x18013E024
 * Callers:
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x18013EFD8 (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_e899d24a1372ab43d53191ccbd314951_::_lambda_e899d24a1372ab43d53191ccbd314951_(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v6; // rax
  __int64 v7; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v6 = a2[1];
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = a2[1];
  *(_DWORD *)(a1 + 16) = *a3;
  *(_DWORD *)(a1 + 20) = *a4;
  *(_QWORD *)(a1 + 24) = *a5;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v7 = a6[1];
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  *(_QWORD *)(a1 + 32) = *a6;
  *(_QWORD *)(a1 + 40) = a6[1];
  return a1;
}
