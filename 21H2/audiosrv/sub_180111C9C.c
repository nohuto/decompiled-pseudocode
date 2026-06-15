/*
 * XREFs of sub_180111C9C @ 0x180111C9C
 * Callers:
 *     sub_1801112AC @ 0x1801112AC (sub_1801112AC.c)
 *     sub_180111C9C @ 0x180111C9C (sub_180111C9C.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_180111228 @ 0x180111228 (sub_180111228.c)
 *     sub_180111C9C @ 0x180111C9C (sub_180111C9C.c)
 */

__int64 __fastcall sub_180111C9C(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  int v6; // ebp
  int v7; // edx
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // edi
  _QWORD *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a1;
  if ( a3 > 8 )
  {
    v7 = 852;
LABEL_3:
    sub_18004BD84(
      (int)retaddr,
      v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      -2147024809);
    return 2147942487LL;
  }
  if ( a2 > 2 )
  {
    v7 = 853;
    goto LABEL_3;
  }
  if ( a2 == 2 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = sub_180111C9C(v6, v9, a3, 3, (__int64)a5);
      v11 = v10;
      if ( v10 < 0 )
        break;
      if ( ++v9 >= 2 )
        return 0LL;
    }
    sub_18004BD84((int)retaddr, 859, (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp", v10);
    return v11;
  }
  else
  {
    v12 = *(_QWORD **)(a1 + 48 * ((int)a3 + 9LL * (int)a2) + 56);
    v14 = v12;
    while ( v14 )
    {
      v15 = *sub_1800B91A0((__int64)v12, &v14);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 56LL))(v15) == 3 )
        sub_180111228(a5, (__int64)&v15, v13);
    }
    return 0LL;
  }
}
