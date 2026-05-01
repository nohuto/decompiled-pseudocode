/*
 * XREFs of sub_18003A354 @ 0x18003A354
 * Callers:
 *     sub_1800385F4 @ 0x1800385F4 (sub_1800385F4.c)
 *     sub_180038A00 @ 0x180038A00 (sub_180038A00.c)
 *     sub_18003B22C @ 0x18003B22C (sub_18003B22C.c)
 * Callees:
 *     sub_18003A0E8 @ 0x18003A0E8 (sub_18003A0E8.c)
 */

char __fastcall sub_18003A354(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v9; // r10
  __int64 v10; // rax
  _QWORD *v11; // rdx
  unsigned __int64 v12; // r8
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  v4 = (_QWORD *)(a1 + 40);
  v5 = *(_QWORD **)(a1 + 40);
  v6 = 0LL;
  v9 = (v4[1] - (_QWORD)v5) >> 4;
  if ( v9 )
  {
    v11 = v5;
    while ( 1 )
    {
      v12 = v6 + 1;
      if ( !*v11 )
        break;
      v11 += 2;
      ++v6;
      if ( v12 >= v9 )
        goto LABEL_2;
    }
    v10 = 2 * v6;
    v5[v10] = a3;
    v5[v10 + 1] = a4;
    *a2 = v12;
  }
  else
  {
LABEL_2:
    v14[0] = a3;
    v14[1] = a4;
    LOBYTE(v10) = sub_18003A0E8((__int64)v4, v14, 0x10uLL);
    if ( (_BYTE)v10 )
    {
      v10 = (v4[1] - *v4) >> 4;
      *a2 = v10;
    }
  }
  return v10;
}
