/*
 * XREFs of sub_1800F746C @ 0x1800F746C
 * Callers:
 *     sub_1800717A0 @ 0x1800717A0 (sub_1800717A0.c)
 * Callees:
 *     sub_18002A0F0 @ 0x18002A0F0 (sub_18002A0F0.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800718D4 @ 0x1800718D4 (sub_1800718D4.c)
 *     sub_180071ABC @ 0x180071ABC (sub_180071ABC.c)
 *     sub_1800BB868 @ 0x1800BB868 (sub_1800BB868.c)
 *     sub_1800BC750 @ 0x1800BC750 (sub_1800BC750.c)
 *     sub_1800C64A4 @ 0x1800C64A4 (sub_1800C64A4.c)
 */

__int64 sub_1800F746C(__int64 a1, __int64 a2, int a3, ...)
{
  char *v4; // r12
  int v6; // eax
  char **v7; // r14
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  int v10; // ebx
  __int64 *v11; // rax
  int v12; // edx
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+40h]
  SIZE_T v15; // [rsp+90h] [rbp+48h] BYREF
  __int64 v16; // [rsp+98h] [rbp+50h] BYREF
  bool v17; // [rsp+A0h] [rbp+58h] BYREF
  char *v18; // [rsp+A8h] [rbp+60h] BYREF
  va_list va; // [rsp+A8h] [rbp+60h]
  __int64 v20; // [rsp+B0h] [rbp+68h] BYREF
  va_list va1; // [rsp+B0h] [rbp+68h]
  va_list va2; // [rsp+B8h] [rbp+70h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, char *);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  v16 = a2;
  v4 = v18;
  sub_1800C64A4((__int64 *)(a1 + 32), a2);
  v6 = v20;
  v7 = (char **)(a1 + 24);
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 40) = v6;
  sub_18002A504((void **)(a1 + 24), 0LL);
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)&v4[2 * v8] );
  *v7 = 0LL;
  if ( v8 + 1 < v8 )
  {
    v10 = -2147024362;
LABEL_11:
    v12 = 26;
    goto LABEL_12;
  }
  v10 = sub_1800BC750(v8 + 1, 2uLL, &v15);
  if ( v10 >= 0 )
    v10 = sub_1800BB868(v9, 0, v15, (void **)(a1 + 24));
  if ( v10 < 0 )
    goto LABEL_11;
  sub_18002A0F0(*v7, v8 + 1, v4, v8);
  LODWORD(v15) = 0;
  v17 = a3 == 3;
  LOBYTE(v20) = (_DWORD)v20 == 1;
  v11 = sub_1800718D4((__int64 *)(a1 + 48));
  v10 = sub_180071ABC(v11, &v16, (char **)va, (__int64 *)va1, (char *)&v17, &v15);
  if ( v10 >= 0 )
    return 0LL;
  v12 = 28;
LABEL_12:
  sub_18004BD84((int)retaddr, v12, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\virtualaudiostream.cpp", v10);
  return (unsigned int)v10;
}
