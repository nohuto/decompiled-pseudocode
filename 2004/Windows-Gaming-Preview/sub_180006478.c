/*
 * XREFs of sub_180006478 @ 0x180006478
 * Callers:
 *     sub_180006BF8 @ 0x180006BF8 (sub_180006BF8.c)
 *     sub_180006D30 @ 0x180006D30 (sub_180006D30.c)
 * Callees:
 *     sub_180004C18 @ 0x180004C18 (sub_180004C18.c)
 */

char __fastcall sub_180006478(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v9; // r10
  _QWORD *v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  v4 = (_QWORD *)(a1 + 40);
  v5 = *(_QWORD **)(a1 + 40);
  v6 = 0LL;
  v9 = (v4[1] - (_QWORD)v5) >> 4;
  if ( v9 )
  {
    v10 = v5;
    while ( 1 )
    {
      v11 = v6 + 1;
      if ( !*v10 )
        break;
      v10 += 2;
      ++v6;
      if ( v11 >= v9 )
        goto LABEL_5;
    }
    v12 = 2 * v6;
    v5[v12] = a3;
    v5[v12 + 1] = a4;
    *a2 = v11;
  }
  else
  {
LABEL_5:
    v14[0] = a3;
    v14[1] = a4;
    LOBYTE(v12) = sub_180004C18(v4, v14, 0x10uLL);
    if ( (_BYTE)v12 )
    {
      v12 = (v4[1] - *v4) >> 4;
      *a2 = v12;
    }
  }
  return v12;
}
