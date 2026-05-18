/*
 * XREFs of sub_18011A390 @ 0x18011A390
 * Callers:
 *     sub_18011751C @ 0x18011751C (sub_18011751C.c)
 *     sub_180117864 @ 0x180117864 (sub_180117864.c)
 *     sub_180117C08 @ 0x180117C08 (sub_180117C08.c)
 *     sub_1801180B4 @ 0x1801180B4 (sub_1801180B4.c)
 *     sub_18011AB70 @ 0x18011AB70 (sub_18011AB70.c)
 * Callees:
 *     sub_180089DE0 @ 0x180089DE0 (sub_180089DE0.c)
 *     sub_180118FC0 @ 0x180118FC0 (sub_180118FC0.c)
 *     sub_18011977C @ 0x18011977C (sub_18011977C.c)
 */

__int64 __fastcall sub_18011A390(char **a1, __int64 a2, char *a3)
{
  char *v3; // rdi
  char *v7; // rbx
  __int64 v8; // rdx
  char *v9; // rax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  char *v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = *a1;
  v7 = (char *)*((_QWORD *)*a1 + 1);
  while ( !v7[25] )
  {
    if ( (int)sub_180089DE0(v7 + 32, (__int64)a3) >= 0 )
    {
      v3 = v7;
      v7 = *(char **)v7;
    }
    else
    {
      v7 = (char *)*((_QWORD *)v7 + 2);
    }
  }
  if ( v3 == *a1 || (int)sub_180089DE0(a3, (__int64)(v3 + 32)) < 0 )
  {
    v8 = (__int64)*a1;
    v12 = a3;
    v9 = (char *)sub_180118FC0((__int64)a1, v8, (__int64)&unk_1801D7458, (__int64 *)&v12);
    sub_18011977C(a1, &v11, v3, v9 + 32, v9);
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
