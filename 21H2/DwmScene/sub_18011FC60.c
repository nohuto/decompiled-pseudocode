/*
 * XREFs of sub_18011FC60 @ 0x18011FC60
 * Callers:
 *     sub_18011CDEC @ 0x18011CDEC (sub_18011CDEC.c)
 *     sub_18011D134 @ 0x18011D134 (sub_18011D134.c)
 *     sub_18011D4D8 @ 0x18011D4D8 (sub_18011D4D8.c)
 *     sub_18011D984 @ 0x18011D984 (sub_18011D984.c)
 *     sub_180120440 @ 0x180120440 (sub_180120440.c)
 * Callees:
 *     sub_18008F6B0 @ 0x18008F6B0 (sub_18008F6B0.c)
 *     sub_18011E890 @ 0x18011E890 (sub_18011E890.c)
 *     sub_18011F04C @ 0x18011F04C (sub_18011F04C.c)
 */

__int64 __fastcall sub_18011FC60(char **a1, __int64 a2, char *a3)
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
    v9 = (char *)sub_18011E890((__int64)a1, v8, (__int64)&unk_1801DD7A8, (__int64 *)&v12);
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
