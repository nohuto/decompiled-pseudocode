/*
 * XREFs of _lambda_ba6101031141f0d6e8e74a4c358feff2_::_lambda_ba6101031141f0d6e8e74a4c358feff2_ @ 0x18013E494
 * Callers:
 *     ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x18013F320 (-CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_ba6101031141f0d6e8e74a4c358feff2_::_lambda_ba6101031141f0d6e8e74a4c358feff2_(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v7; // rax
  __int64 v8; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v7 = a2[1];
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = a2[1];
  *(_DWORD *)(a1 + 16) = *a3;
  *(_DWORD *)(a1 + 20) = *a4;
  *(_QWORD *)(a1 + 24) = *a5;
  *(_QWORD *)(a1 + 32) = *a6;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  v8 = a7[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *(_QWORD *)(a1 + 40) = *a7;
  *(_QWORD *)(a1 + 48) = a7[1];
  return a1;
}
