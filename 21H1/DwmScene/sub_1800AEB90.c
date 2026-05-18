/*
 * XREFs of sub_1800AEB90 @ 0x1800AEB90
 * Callers:
 *     sub_1800AEF5C @ 0x1800AEF5C (sub_1800AEF5C.c)
 * Callees:
 *     sub_1800AE4BC @ 0x1800AE4BC (sub_1800AE4BC.c)
 *     sub_1800AE834 @ 0x1800AE834 (sub_1800AE834.c)
 */

__int64 __fastcall sub_1800AEB90(__int64 **a1, __int64 a2, _QWORD *a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a1;
  v6 = (*a1)[1];
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_10;
  v7 = a3[1];
  do
  {
    if ( *(_QWORD *)(v6 + 40) >= v7 )
    {
      v3 = (__int64 *)v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  while ( !*(_BYTE *)(v6 + 25) );
  if ( v3 == *a1 || v7 < v3[5] )
  {
LABEL_10:
    v8 = (__int64)*a1;
    v12 = a3;
    v9 = sub_1800AE4BC((__int64)a1, v8, (__int64)&unk_1801D19A7, &v12);
    sub_1800AE834(a1, &v11, v3, (__int64)(v9 + 4), v9);
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v3;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
