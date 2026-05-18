/*
 * XREFs of sub_1800855FC @ 0x1800855FC
 * Callers:
 *     sub_1800891C4 @ 0x1800891C4 (sub_1800891C4.c)
 * Callees:
 *     sub_180084AD0 @ 0x180084AD0 (sub_180084AD0.c)
 *     sub_18008503C @ 0x18008503C (sub_18008503C.c)
 *     sub_180089DE0 @ 0x180089DE0 (sub_180089DE0.c)
 */

__int64 __fastcall sub_1800855FC(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = *a1;
  v7 = (*a1)[1];
  while ( !*(_BYTE *)(v7 + 25) )
  {
    if ( (int)sub_180089DE0(v7 + 32, a3) >= 0 )
    {
      v3 = (__int64 *)v7;
      v7 = *(_QWORD *)v7;
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
  }
  if ( v3 == *a1 || (int)sub_180089DE0(a3, v3 + 4) < 0 )
  {
    v8 = (__int64)*a1;
    v12 = a3;
    v9 = sub_180084AD0((__int64)a1, v8, (__int64)&unk_1801C6AD0, &v12);
    sub_18008503C(a1, &v11, v3, (__int64)(v9 + 4), v9);
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
