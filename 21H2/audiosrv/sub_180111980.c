/*
 * XREFs of sub_180111980 @ 0x180111980
 * Callers:
 *     sub_1801112AC @ 0x1801112AC (sub_1801112AC.c)
 *     sub_180111980 @ 0x180111980 (sub_180111980.c)
 *     sub_1801133F8 @ 0x1801133F8 (sub_1801133F8.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180064A70 @ 0x180064A70 (sub_180064A70.c)
 *     sub_180111980 @ 0x180111980 (sub_180111980.c)
 *     sub_180111BF0 @ 0x180111BF0 (sub_180111BF0.c)
 *     sub_180112C10 @ 0x180112C10 (sub_180112C10.c)
 */

__int64 __fastcall sub_180111980(__int64 a1, char a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  int v6; // ebx
  int v9; // r14d
  int v10; // edx
  int v12; // ebx
  int v13; // esi
  int v14; // edx
  int v15; // edi
  __int64 v16; // rdi
  __int64 *v17; // rbx
  __int64 v18; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a3;
  v9 = a1;
  if ( (unsigned int)a3 > 8 && (_DWORD)a3 != 0x7FFF )
  {
    v10 = 291;
LABEL_4:
    sub_18004BD84(
      (int)retaddr,
      v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      -2147024809);
    return 2147942487LL;
  }
  if ( a4 > 2 )
  {
    v10 = 292;
    goto LABEL_4;
  }
  if ( (_DWORD)a3 == 0x7FFF )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = sub_180111980(v9, a2, v12, a4, a5, a6);
      if ( v13 < 0 )
        break;
      if ( ++v12 >= 9 )
        return 0LL;
    }
    v14 = 298;
LABEL_13:
    sub_18004BD84((int)retaddr, v14, (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp", v13);
    return (unsigned int)v13;
  }
  if ( a4 == 2 )
  {
    v15 = 0;
    while ( 1 )
    {
      v13 = sub_180111980(v9, a2, v6, v15, a5, a6);
      if ( v13 < 0 )
        break;
      if ( ++v15 >= 2 )
        return 0LL;
    }
    v14 = 305;
    goto LABEL_13;
  }
  v16 = (int)a3 + 9LL * (int)a4;
  v17 = (__int64 *)(48 * v16 + a1 + 56);
  if ( !a2 )
  {
    v18 = sub_180111BF0(48 * v16 + a1 + 56, a5);
    sub_180112C10(v17, v18);
  }
  sub_180064A70(v17, a5, a3);
  *(_BYTE *)(v16 + a6) = 1;
  return 0LL;
}
