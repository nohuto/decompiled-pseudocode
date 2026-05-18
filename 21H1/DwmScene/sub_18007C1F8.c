/*
 * XREFs of sub_18007C1F8 @ 0x18007C1F8
 * Callers:
 *     sub_1800747B8 @ 0x1800747B8 (sub_1800747B8.c)
 * Callees:
 *     unknown_libname_100 @ 0x180011544 (unknown_libname_100.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18007C1F8(_QWORD ***a1, __int64 *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rsi
  _QWORD *v6; // rdi
  __int64 result; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbp

  v2 = *a1;
  v5 = *a1;
  v6 = **a1;
  if ( v6 != *a1 )
  {
    do
    {
      result = *a2;
      v8 = (__int64)(v6 + 2);
      v9 = (_QWORD *)*v6;
      if ( v6[2] == *a2 )
      {
        if ( (__int64 *)v8 == a2 )
        {
          v2 = v6;
        }
        else
        {
          *(_QWORD *)v6[1] = v9;
          *(_QWORD *)(*v6 + 8LL) = v6[1];
          unknown_libname_100(v8, 0);
          result = j_j__o_free(v6);
          a1[1] = (_QWORD **)((char *)a1[1] - 1);
        }
      }
      v6 = v9;
    }
    while ( v9 != v5 );
  }
  if ( v2 != v5 )
  {
    *(_QWORD *)v2[1] = *v2;
    *(_QWORD *)(*v2 + 8LL) = v2[1];
    unknown_libname_100((__int64)(v2 + 2), 0);
    result = j_j__o_free(v2);
    a1[1] = (_QWORD **)((char *)a1[1] - 1);
  }
  return result;
}
