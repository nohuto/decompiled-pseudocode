/*
 * XREFs of sub_18011A458 @ 0x18011A458
 * Callers:
 *     sub_180118340 @ 0x180118340 (sub_180118340.c)
 *     sub_180118580 @ 0x180118580 (sub_180118580.c)
 *     sub_1801187C4 @ 0x1801187C4 (sub_1801187C4.c)
 *     sub_180118AA0 @ 0x180118AA0 (sub_180118AA0.c)
 *     sub_18011AEF0 @ 0x18011AEF0 (sub_18011AEF0.c)
 *     sub_18011B1C0 @ 0x18011B1C0 (sub_18011B1C0.c)
 * Callees:
 *     sub_180089DE0 @ 0x180089DE0 (sub_180089DE0.c)
 *     sub_180118F24 @ 0x180118F24 (sub_180118F24.c)
 *     sub_18011977C @ 0x18011977C (sub_18011977C.c)
 */

__int64 __fastcall sub_18011A458(char **a1, __int64 a2, char *a3)
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
    v9 = (char *)sub_180118F24((__int64)a1, v8, (__int64)&unk_1801D7458, (__int64 *)&v12);
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
