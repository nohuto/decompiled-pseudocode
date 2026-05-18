/*
 * XREFs of sub_180075E6C @ 0x180075E6C
 * Callers:
 *     sub_18007F580 @ 0x18007F580 (sub_18007F580.c)
 * Callees:
 *     sub_180072218 @ 0x180072218 (sub_180072218.c)
 *     sub_18007468C @ 0x18007468C (sub_18007468C.c)
 */

__int64 __fastcall sub_180075E6C(__int64 **a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 *v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a1;
  v6 = (*a1)[1];
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_10;
  v7 = *a3;
  do
  {
    if ( *(_QWORD *)(v6 + 32) >= v7 )
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
  if ( v3 == *a1 || v7 < v3[4] )
  {
LABEL_10:
    v8 = (__int64)*a1;
    v12 = a3;
    v9 = sub_180072218(a1, v8, (__int64)&unk_1801CB718, &v12);
    sub_18007468C(a1, &v11, v3, v9 + 4, v9);
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
