/*
 * XREFs of sub_1801133F8 @ 0x1801133F8
 * Callers:
 *     sub_18010ED94 @ 0x18010ED94 (sub_18010ED94.c)
 *     sub_180113730 @ 0x180113730 (sub_180113730.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180110E94 @ 0x180110E94 (sub_180110E94.c)
 *     sub_180111980 @ 0x180111980 (sub_180111980.c)
 *     sub_180112944 @ 0x180112944 (sub_180112944.c)
 *     sub_180113A88 @ 0x180113A88 (sub_180113A88.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1801133F8(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 **v7; // r9
  __int64 *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rbx
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // r9d
  int v16; // edx
  int v18; // eax
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v21[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22[4]; // [rsp+50h] [rbp-B0h] BYREF
  char v23; // [rsp+70h] [rbp-90h]
  _BYTE v24[288]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v25; // [rsp+1A0h] [rbp+A0h] BYREF
  __int16 v26; // [rsp+1B0h] [rbp+B0h]
  _UNKNOWN *retaddr; // [rsp+1E8h] [rbp+E8h]
  __int64 v28; // [rsp+200h] [rbp+100h] BYREF

  v28 = a3;
  v20 = a2;
  v25 = 0LL;
  v26 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v21[1] = &v6->DebugInfo;
  v19 = 0LL;
  v7 = (__int64 **)(a1 + 968);
  v8 = *(__int64 **)(a1 + 968);
  v9 = v8[1];
  if ( *(_BYTE *)(v9 + 25) )
    goto LABEL_8;
  do
  {
    if ( *(_QWORD *)(v9 + 32) >= v28 )
    {
      v8 = (__int64 *)v9;
      v9 = *(_QWORD *)v9;
    }
    else
    {
      v9 = *(_QWORD *)(v9 + 16);
    }
  }
  while ( !*(_BYTE *)(v9 + 25) );
  if ( v8 == *v7 || v28 < v8[4] )
  {
LABEL_8:
    v21[0] = &v28;
    v8 = (__int64 *)*sub_180110E94((__int64 *)(a1 + 968), v22, v8, (__int64)v7, v21);
  }
  v10 = (_QWORD *)v8[5];
  v21[0] = v10;
  if ( !v10 )
  {
    v11 = -2147024809;
    goto LABEL_24;
  }
  (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
  v19 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64 *))*v10)(v10, &qword_18015EB88, &v19);
  v11 = v12;
  if ( v12 < 0 )
  {
    v13 = 512;
LABEL_18:
    sub_18004BD84((int)retaddr, v13, (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp", v12);
    goto LABEL_24;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v19 + 88LL))(v19, v20, v24);
  v11 = v12;
  if ( v12 < 0 )
  {
    v13 = 514;
    goto LABEL_18;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v19 + 96LL))(v19, v20, a4);
  v11 = v12;
  if ( v12 < 0 )
  {
    v13 = 516;
    goto LABEL_18;
  }
  v22[1] = (__int64)&v19;
  v22[2] = (__int64)&v20;
  v22[3] = (__int64)v24;
  v23 = 1;
  v14 = sub_180111980(a1, 0, *a4, a4[1], v19, (__int64)&v25);
  v11 = v14;
  if ( v14 < 0 )
  {
    v15 = v14;
    v16 = 522;
LABEL_23:
    sub_18004BD84((int)retaddr, v16, (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp", v15);
    (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v19 + 96LL))(v19, v20, v24);
LABEL_24:
    sub_18000F708((__int64 *)v21);
    sub_18000F708(&v19);
    if ( v6 )
      LeaveCriticalSection(v6);
    return v11;
  }
  if ( !(unsigned __int8)sub_180113A88(a1, &v25) )
  {
    v11 = -2147467259;
    v15 = -2147467259;
    v16 = 525;
    goto LABEL_23;
  }
  sub_18000F708((__int64 *)v21);
  sub_18000F708(&v19);
  if ( v6 )
    LeaveCriticalSection(v6);
  v18 = sub_180112944(a1, &v25, 0);
  v11 = v18;
  if ( v18 < 0 )
  {
    sub_18004BD84((int)retaddr, 530, (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp", v18);
    return v11;
  }
  return 0LL;
}
