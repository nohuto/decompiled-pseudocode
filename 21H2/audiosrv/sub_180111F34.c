/*
 * XREFs of sub_180111F34 @ 0x180111F34
 * Callers:
 *     sub_1800D94B0 @ 0x1800D94B0 (sub_1800D94B0.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_180110E94 @ 0x180110E94 (sub_180110E94.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180111F34(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // r9d
  int v17; // edx
  int v18; // eax
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h] BYREF
  _QWORD *v22[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v25; // [rsp+80h] [rbp+20h] BYREF
  __int64 v26; // [rsp+90h] [rbp+30h] BYREF

  v26 = a3;
  v6 = qword_18019E608;
  v21 = 0LL;
  v25 = 0LL;
  v20 = 0LL;
  sub_1800CB144(&v20);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
         qword_18019E618,
         a2,
         &v20);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_18004BD84((int)retaddr, 699, (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp", v7);
    goto LABEL_25;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 16));
  v22[1] = (_QWORD *)(v6 + 16);
  v10 = *(__int64 **)(v6 + 968);
  v11 = v10[1];
  if ( *(_BYTE *)(v11 + 25) )
    goto LABEL_11;
  v12 = v26;
  do
  {
    if ( *(_QWORD *)(v11 + 32) >= v26 )
    {
      v10 = (__int64 *)v11;
      v11 = *(_QWORD *)v11;
    }
    else
    {
      v11 = *(_QWORD *)(v11 + 16);
    }
  }
  while ( !*(_BYTE *)(v11 + 25) );
  if ( v10 == *(__int64 **)(v6 + 968) || v26 < v10[4] )
  {
LABEL_11:
    v22[0] = &v26;
    v10 = (__int64 *)*sub_180110E94((__int64 *)(v6 + 968), &v23, v10, v9, v22);
  }
  v13 = v10[5];
  v21 = v13;
  if ( !v13 )
  {
    v8 = -2147024809;
    goto LABEL_23;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 8LL))(v13, v12);
  v14 = v25;
  v25 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = (**(__int64 (__fastcall ***)(__int64, __int64 *, __int64 *))v13)(v13, &qword_18015EB88, &v25);
  v8 = v15;
  if ( v15 < 0 )
  {
    sub_18004BD84((int)retaddr, 1249, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h", v15);
    v16 = v8;
    v17 = 712;
LABEL_21:
    sub_18004BD84((int)retaddr, v17, (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp", v16);
    goto LABEL_23;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v25 + 88LL))(v25, v20, a4);
  v8 = v18;
  if ( v18 < 0 )
  {
    v16 = v18;
    v17 = 713;
    goto LABEL_21;
  }
  v8 = 0;
LABEL_23:
  if ( v6 != -16 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 16));
LABEL_25:
  sub_18000F708(&v20);
  sub_18000F708(&v25);
  sub_18000F708(&v21);
  return v8;
}
