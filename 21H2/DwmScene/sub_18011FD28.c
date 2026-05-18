/*
 * XREFs of sub_18011FD28 @ 0x18011FD28
 * Callers:
 *     sub_18011DC10 @ 0x18011DC10 (sub_18011DC10.c)
 *     sub_18011DE50 @ 0x18011DE50 (sub_18011DE50.c)
 *     sub_18011E094 @ 0x18011E094 (sub_18011E094.c)
 *     sub_18011E370 @ 0x18011E370 (sub_18011E370.c)
 *     sub_1801207C0 @ 0x1801207C0 (sub_1801207C0.c)
 *     sub_180120A90 @ 0x180120A90 (sub_180120A90.c)
 * Callees:
 *     sub_18008F6B0 @ 0x18008F6B0 (sub_18008F6B0.c)
 *     sub_18011E7F4 @ 0x18011E7F4 (sub_18011E7F4.c)
 *     sub_18011F04C @ 0x18011F04C (sub_18011F04C.c)
 */

__int64 __fastcall sub_18011FD28(char **a1, __int64 a2, char *a3)
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
    if ( (int)sub_18008F6B0(v7 + 32, (__int64)a3) >= 0 )
    {
      v3 = v7;
      v7 = *(char **)v7;
    }
    else
    {
      v7 = (char *)*((_QWORD *)v7 + 2);
    }
  }
  if ( v3 == *a1 || (int)sub_18008F6B0(a3, (__int64)(v3 + 32)) < 0 )
  {
    v8 = (__int64)*a1;
    v12 = a3;
    v9 = (char *)sub_18011E7F4((__int64)a1, v8, (__int64)&unk_1801DD7A8, (__int64 *)&v12);
    sub_18011F04C(a1, &v11, v3, v9 + 32, v9);
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
