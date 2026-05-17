/*
 * XREFs of SwapSplayLinks @ 0x180066C50
 * Callers:
 *     RtlDelete @ 0x180066B00 (RtlDelete.c)
 *     RtlDeleteNoSplay @ 0x180066BA0 (RtlDeleteNoSplay.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SwapSplayLinks(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // r9
  _QWORD *v5; // r10
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *result; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rsi
  _QWORD *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax

  v2 = a1;
  v3 = (_QWORD *)*a1;
  if ( v3 == v2 || (v4 = (_QWORD *)*a2, v5 = v3, (_QWORD *)*a2 == v2) )
  {
    v5 = (_QWORD *)*a2;
    v24 = v2;
    v2 = a2;
    v4 = v3;
    a2 = v24;
  }
  if ( v5 == a2 )
  {
    if ( v4 == a2 )
    {
      v6 = v2;
    }
    else
    {
      v18 = 1LL;
      if ( (_QWORD *)v4[1] != a2 )
        v18 = 2LL;
      v4[v18] = v2;
      v6 = (_QWORD *)*a2;
    }
    *v2 = v6;
    v7 = v2[1];
    v2[1] = a2[1];
    v8 = a2[2];
    a2[1] = v7;
    v9 = v2[2];
    v2[2] = v8;
    a2[2] = v9;
    v10 = (_QWORD *)v2[1];
    if ( v10 == v2 )
    {
      v2[1] = a2;
      v10 = a2;
    }
    else
    {
      v2[2] = a2;
    }
  }
  else
  {
    v14 = 1LL;
    if ( v4 == a2 )
    {
      if ( (_QWORD *)v5[1] != v2 )
        v14 = 2LL;
      v5[v14] = a2;
      *a2 = *v2;
      *v2 = v2;
    }
    else
    {
      v19 = 1LL;
      v20 = (_QWORD *)v4[1];
      if ( (_QWORD *)v5[1] != v2 )
        v19 = 2LL;
      v21 = v4[1];
      if ( v20 != a2 )
        v21 = v4[2];
      v22 = v5[v19];
      if ( v20 != a2 )
        v14 = 2LL;
      v5[v19] = v21;
      v4[v14] = v22;
      v23 = *v2;
      *v2 = *a2;
      *a2 = v23;
    }
    v15 = v2[1];
    v2[1] = a2[1];
    v16 = a2[2];
    a2[1] = v15;
    v17 = v2[2];
    v2[2] = v16;
    a2[2] = v17;
    v10 = (_QWORD *)v2[1];
  }
  if ( v10 )
    *v10 = v2;
  v11 = (_QWORD *)v2[2];
  if ( v11 )
    *v11 = v2;
  v12 = (_QWORD *)a2[1];
  if ( v12 )
    *v12 = a2;
  result = (_QWORD *)a2[2];
  if ( result )
    *result = a2;
  return result;
}
