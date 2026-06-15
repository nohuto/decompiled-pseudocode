/*
 * XREFs of sub_180112CEC @ 0x180112CEC
 * Callers:
 *     sub_180110F94 @ 0x180110F94 (sub_180110F94.c)
 *     sub_1801112AC @ 0x1801112AC (sub_1801112AC.c)
 *     sub_180112500 @ 0x180112500 (sub_180112500.c)
 *     sub_180112550 @ 0x180112550 (sub_180112550.c)
 *     sub_180112F8C @ 0x180112F8C (sub_180112F8C.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E3598 @ 0x1800E3598 (sub_1800E3598.c)
 *     sub_180111AF8 @ 0x180111AF8 (sub_180111AF8.c)
 *     sub_180111BF0 @ 0x180111BF0 (sub_180111BF0.c)
 *     sub_180112944 @ 0x180112944 (sub_180112944.c)
 *     sub_180112C10 @ 0x180112C10 (sub_180112C10.c)
 *     sub_180113A88 @ 0x180113A88 (sub_180113A88.c)
 *     sub_180113C34 @ 0x180113C34 (sub_180113C34.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180112CEC(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, __int64 *, __int64 *),
        char a4,
        _BYTE *a5)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  int v9; // eax
  int v10; // ebx
  int v11; // edx
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  _BYTE *v15; // r14
  __int64 v16; // r12
  _QWORD *v17; // rbx
  __int64 v18; // r15
  __int64 v19; // r13
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 (__fastcall ***v22)(_QWORD, _QWORD, _QWORD); // r15
  char v23; // bl
  __int64 v25; // rcx
  int v26; // edx
  char v27[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-1Ch]
  __int64 v29; // [rsp+38h] [rbp-18h] BYREF
  __int64 v30[2]; // [rsp+40h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+38h]
  char v32; // [rsp+90h] [rbp+40h] BYREF
  __int64 (__fastcall ***v33)(_QWORD, _QWORD, _QWORD); // [rsp+A0h] [rbp+50h] BYREF
  char v34; // [rsp+A8h] [rbp+58h]

  v34 = a4;
  v33 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))a3;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v30[1] = (__int64)v8;
  v29 = 0LL;
  v9 = (**a3)(a3, &qword_18015EB88, &v29);
  v10 = v9;
  if ( v9 < 0 )
  {
    sub_18004BD84((int)retaddr, 1249, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h", v9);
    v11 = 606;
LABEL_25:
    v13 = v10;
LABEL_26:
    sub_18004BD84((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp", v13);
    sub_18000F708(&v29);
    if ( v8 )
      LeaveCriticalSection(v8);
    return (unsigned int)v10;
  }
  v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 64LL))(v29);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, char *, char *))(*(_QWORD *)v29 + 80LL))(v29, a2, v27, &v32);
  v10 = v12;
  if ( v12 < 0 )
  {
    v13 = v12;
    v11 = 612;
    goto LABEL_26;
  }
  if ( v27[0] )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 400LL))(a2, a1, a3);
    v10 = v14;
    if ( v14 < 0 )
    {
      v13 = v14;
      v11 = 618;
      goto LABEL_26;
    }
  }
  v15 = a5;
  v16 = (__int64)a5;
  v17 = (_QWORD *)(a1 + 56);
  v30[0] = 2LL;
  do
  {
    v18 = 0LL;
    v19 = 9LL;
    do
    {
      v20 = sub_180111BF0(v17, v29);
      if ( v20 )
      {
        *(_BYTE *)(v16 + v18) = 1;
        if ( v32 )
          sub_180112C10(v17, v20);
      }
      v17 += 6;
      ++v18;
      --v19;
    }
    while ( v19 );
    v16 += 9LL;
    --v30[0];
  }
  while ( v30[0] );
  if ( v32 )
  {
    v21 = **(_QWORD **)(a1 + 968);
    v22 = v33;
LABEL_17:
    v30[0] = v21;
    while ( v21 != *(_QWORD *)(a1 + 968) )
    {
      if ( *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))(v21 + 40) == v22 )
      {
        sub_180113C34(a1 + 968, &v33, v21);
        v21 = (__int64)v33;
        goto LABEL_17;
      }
      sub_1800E3598(v30);
      v21 = v30[0];
    }
  }
  v23 = v34;
  if ( v34 && !(unsigned __int8)sub_180113A88(a1, v15) )
  {
    v10 = -2147467259;
    v11 = 670;
    goto LABEL_25;
  }
  sub_18000F708(&v29);
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( v23 )
  {
    if ( v28 )
    {
      v10 = sub_180111AF8(v25, v15, v28);
      if ( v10 < 0 )
      {
        v26 = 680;
LABEL_35:
        sub_18004BD84(
          (int)retaddr,
          v26,
          (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
          v10);
        return (unsigned int)v10;
      }
    }
    v10 = sub_180112944(a1, v15, 0);
    if ( v10 < 0 )
    {
      v26 = 683;
      goto LABEL_35;
    }
  }
  return 0LL;
}
