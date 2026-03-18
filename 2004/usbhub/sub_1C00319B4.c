/*
 * XREFs of sub_1C00319B4 @ 0x1C00319B4
 * Callers:
 *     sub_1C00298F8 @ 0x1C00298F8 (sub_1C00298F8.c)
 *     sub_1C0037D08 @ 0x1C0037D08 (sub_1C0037D08.c)
 * Callees:
 *     sub_1C0031B0C @ 0x1C0031B0C (sub_1C0031B0C.c)
 */

unsigned __int8 *__fastcall sub_1C00319B4(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  unsigned __int8 *v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int8 *v14; // rax
  unsigned __int8 *v15; // rdx
  __int64 v16; // rax

  v8 = 0LL;
  v9 = a2 + *(unsigned __int16 *)(a2 + 2);
  do
  {
    v14 = (unsigned __int8 *)sub_1C0031B0C(a1, a2, *(unsigned __int16 *)(a2 + 2), a3);
    v15 = v14;
    if ( !v14 )
      break;
    v8 = v14;
    if ( a4 != -1
      && (v9 < (unsigned __int64)v14
       || (__int64)(v9 - (_QWORD)v14) > 0xFFFF
       || v9 - (unsigned __int64)v14 < 3
       || v14[2] != a4) )
    {
      v8 = 0LL;
    }
    if ( a6 != -1
      && (v9 < (unsigned __int64)v14
       || (__int64)(v9 - (_QWORD)v14) > 0xFFFF
       || v9 - (unsigned __int64)v14 < 6
       || v14[5] != a6) )
    {
      v8 = 0LL;
    }
    if ( a7 != -1
      && (v9 < (unsigned __int64)v14
       || (__int64)(v9 - (_QWORD)v14) > 0xFFFF
       || v9 - (unsigned __int64)v14 < 7
       || v14[6] != a7) )
    {
      v8 = 0LL;
    }
    if ( a8 != -1
      && (v9 < (unsigned __int64)v14
       || (__int64)(v9 - (_QWORD)v14) > 0xFFFF
       || v9 - (unsigned __int64)v14 < 8
       || v14[7] != a8) )
    {
      v8 = 0LL;
    }
    v16 = *v14;
    a3 = &v15[v16];
    if ( v8 )
      break;
  }
  while ( ((unsigned __int64)v15 & -(__int64)((_BYTE)v16 != 0)) != 0 );
  return v8;
}
