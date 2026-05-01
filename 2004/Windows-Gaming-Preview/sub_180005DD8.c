/*
 * XREFs of sub_180005DD8 @ 0x180005DD8
 * Callers:
 *     sub_180005C04 @ 0x180005C04 (sub_180005C04.c)
 * Callees:
 *     sub_1800018E0 @ 0x1800018E0 (sub_1800018E0.c)
 */

_QWORD *__fastcall sub_180005DD8(__int64 a1, _QWORD *a2, unsigned __int16 *a3, unsigned __int16 a4)
{
  _QWORD *result; // rax
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rbx
  size_t v12; // rbx

  if ( !a4 )
    goto LABEL_7;
  result = a2;
  v8 = **(_QWORD **)a1 + a4 - (_QWORD)a2;
  do
  {
    v9 = *((unsigned __int8 *)result + v8);
    v10 = *(unsigned __int8 *)result - v9;
    if ( v10 )
      break;
    result = (_QWORD *)((char *)result + 1);
  }
  while ( v9 );
  if ( v10 )
  {
LABEL_7:
    v11 = -1LL;
    do
      ++v11;
    while ( *((_BYTE *)a2 + v11) );
    v12 = v11 + 1;
    **(_QWORD **)(a1 + 8) += v12;
    result = **(_QWORD ***)(a1 + 16);
    if ( **(_QWORD **)(a1 + 8) <= (unsigned __int64)result )
    {
      if ( v12 )
        sub_1800018E0(**(void ***)(a1 + 24), **(_QWORD **)(a1 + 32) - **(_QWORD **)(a1 + 24), a2, v12);
      *a3 = **(_WORD **)(a1 + 24) - **(_WORD **)a1;
      result = *(_QWORD **)(a1 + 24);
      *result += v12;
    }
  }
  else
  {
    *a3 = a4;
  }
  return result;
}
