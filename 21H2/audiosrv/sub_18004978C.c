/*
 * XREFs of sub_18004978C @ 0x18004978C
 * Callers:
 *     sub_1800495DC @ 0x1800495DC (sub_1800495DC.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     sub_180022C90 @ 0x180022C90 (sub_180022C90.c)
 *     sub_180022F30 @ 0x180022F30 (sub_180022F30.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800234D0 @ 0x1800234D0 (sub_1800234D0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18011C754 @ 0x18011C754 (sub_18011C754.c)
 */

// Hidden C++ exception states: #wind=3
__int64 sub_18004978C(_QWORD *a1, __int128 *a2, int a3, __int64 a4, ...)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 *v8; // r14
  int v9; // eax
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21[2]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v22; // [rsp+70h] [rbp-10h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 *v25; // [rsp+D0h] [rbp+50h] BYREF
  va_list va; // [rsp+D0h] [rbp+50h]
  va_list va1; // [rsp+D8h] [rbp+58h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v25 = va_arg(va1, __int64 *);
  v4 = a4;
  v5 = a3;
  v8 = v25;
  *v25 = 0LL;
  v25 = 0LL;
  v9 = sub_180022F30(a1, a3);
  v10 = (__int64)v25;
  v25 = 0LL;
  if ( v9 )
  {
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v25 = 0LL;
    if ( (unsigned int)sub_180022F30(a1, v5) )
    {
      if ( sub_1800234D0((__int64)a1) || (v11 = 0, (_DWORD)v5 == 3) )
        v11 = 1;
      v22 = *a2;
      v12 = sub_1800233B0(a1 + 207, v5);
      if ( !sub_180022C90(v12, &v22, v11)
        || (v22 = *a2,
            v13 = sub_1800233B0(a1 + 207, v5),
            v14 = sub_180020D20((__int64)a1, v13, 1, 0, &v22, 0, 0, v5, 0LL, (__int64 **)va, 0LL),
            v15 = v14,
            v14 >= 0) )
      {
        v4 = a4;
        goto LABEL_10;
      }
      v19 = 7961LL;
LABEL_27:
      sub_18004BD84(
        retaddr,
        v19,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (unsigned int)v14);
      goto LABEL_14;
    }
  }
  else
  {
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v14 = sub_18011C754(a1, (unsigned int)v5, 0LL, (__int64 **)va);
    v15 = v14;
    if ( v14 < 0 )
    {
      v19 = 7965LL;
      goto LABEL_27;
    }
  }
LABEL_10:
  v16 = (__int64)v25;
  if ( v25 )
  {
    *(_QWORD *)&v22 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *, __int128 *))*v25)(v25, &qword_18015C550, &v22) >= 0 )
    {
      v21[0] = 0LL;
      v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)v22 + 24LL))(v22, v4, v21);
      v15 = v17;
      if ( v17 < 0 )
      {
        sub_18004BD84(
          retaddr,
          7974LL,
          "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (unsigned int)v17);
        sub_18000F708(v21);
        sub_18000F708((__int64 *)&v22);
LABEL_14:
        v16 = (__int64)v25;
        goto LABEL_15;
      }
      v20 = v21[0];
      v21[0] = 0LL;
      *v8 = v20;
      sub_18000F708(v21);
    }
    sub_18000F708((__int64 *)&v22);
    v16 = (__int64)v25;
  }
  v15 = 0;
LABEL_15:
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return v15;
}
