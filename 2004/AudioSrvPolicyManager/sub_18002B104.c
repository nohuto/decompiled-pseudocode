/*
 * XREFs of sub_18002B104 @ 0x18002B104
 * Callers:
 *     sub_180027B9C @ 0x180027B9C (sub_180027B9C.c)
 * Callees:
 *     sub_18000F150 @ 0x18000F150 (sub_18000F150.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002B104(__int64 a1, const void **a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // rcx

  v6 = o__recalloc(*(_QWORD *)a1, *(_DWORD *)(a1 + 16) + 1, 8LL);
  if ( !v6 )
    return 0LL;
  *(_QWORD *)a1 = v6;
  v7 = o__recalloc(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 16) + 1, 16LL);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  *(_QWORD *)(a1 + 8) = v7;
  v9 = *(int *)(a1 + 16);
  v10 = (_QWORD *)(*(_QWORD *)a1 + 8 * v9);
  if ( v10 )
  {
    sub_18000F150(v10, a2);
    v8 = *(_QWORD *)(a1 + 8);
  }
  v11 = (_QWORD *)(v8 + 16 * v9);
  if ( v11 )
  {
    *v11 = 0LL;
    v11[1] = 0LL;
    v12 = a3[1];
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    *v11 = *a3;
    v11[1] = a3[1];
  }
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
