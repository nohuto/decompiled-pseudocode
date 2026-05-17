/*
 * XREFs of PfxRemovePrefix @ 0x1800E6310
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x180066B00 (RtlDelete.c)
 */

void __fastcall PfxRemovePrefix(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  _QWORD *i; // rbx
  _WORD *v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 k; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int64 j; // rcx

  if ( *(__int16 *)a2 >= 513 && *(__int16 *)a2 <= 514 )
  {
    v2 = (_QWORD *)(a2 + 16);
    v3 = *(_QWORD **)(a2 + 16);
    for ( i = v2; v3 != i; v3 = (_QWORD *)*v3 )
      i = v3;
    v5 = i - 2;
    v6 = RtlDelete(v2);
    if ( v6 )
    {
      if ( i != v6 )
      {
        v10 = v6 - 2;
        v11 = *(i - 1);
        for ( j = *(_QWORD *)(v11 + 8); (_WORD *)j != v5; j = *(_QWORD *)(j + 8) )
          v11 = j;
        *(_WORD *)v10 = 513;
        *(_QWORD *)(v11 + 8) = v10;
        v10[1] = *(i - 1);
        *(i - 1) = 0LL;
        *v5 = 514;
      }
    }
    else
    {
      v7 = *(i - 1);
      v8 = v7;
      for ( k = *(_QWORD *)(v7 + 8); (_WORD *)k != v5; k = *(_QWORD *)(k + 8) )
        v8 = k;
      *(_QWORD *)(v8 + 8) = v7;
    }
  }
}
