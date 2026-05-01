/*
 * XREFs of sub_18001B888 @ 0x18001B888
 * Callers:
 *     sub_18001B7CC @ 0x18001B7CC (sub_18001B7CC.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001E62C @ 0x18001E62C (sub_18001E62C.c)
 *     sub_1800263D0 @ 0x1800263D0 (sub_1800263D0.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18001B888(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  int v6; // r12d
  int v8; // eax
  int v9; // esi
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // eax
  __int64 (__fastcall ***v18)(_QWORD, void *, _QWORD *); // rcx
  __int64 (__fastcall ***v20)(_QWORD, void *, _QWORD *); // [rsp+30h] [rbp-30h] BYREF
  __int64 *v21; // [rsp+38h] [rbp-28h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h]
  _QWORD v23[2]; // [rsp+48h] [rbp-18h] BYREF
  bool v24; // [rsp+58h] [rbp-8h]
  __int64 retaddr; // [rsp+88h] [rbp+28h]
  __int64 v26; // [rsp+90h] [rbp+30h] BYREF

  v6 = a2;
  v20 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 (__fastcall ****)(_QWORD, void *, _QWORD *)))(**(_QWORD **)(a1 + 56) + 56LL))(
         *(_QWORD *)(a1 + 56),
         a2,
         0LL,
         &v20);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 253;
LABEL_7:
    sub_180003268(retaddr, v10, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v8);
    goto LABEL_34;
  }
  v11 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v8 = (**v20)(v20, &unk_180050D50, a3);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 255;
    goto LABEL_7;
  }
  v12 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v9 = sub_1800263D0(a1, &xmmword_180051408, &v21);
  if ( v9 >= 0 )
  {
    v26 = 0LL;
    v14 = v21;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v21 + 24))(v21, &v26);
    v15 = v26;
    if ( v9 >= 0 )
    {
      v12 = v26;
      if ( v26 )
      {
        (*(void (**)(void))(*(_QWORD *)v26 + 8LL))();
        v15 = v26;
      }
      v22 = v12;
      if ( v15 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      (*(void (__fastcall **)(__int64 *))(*v14 + 16))(v14);
      v9 = 0;
      goto LABEL_21;
    }
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v13 = *v14;
    goto LABEL_11;
  }
  if ( v21 )
  {
    v13 = *v21;
LABEL_11:
    (*(void (**)(void))(v13 + 16))();
  }
LABEL_21:
  if ( v9 >= 0 )
  {
    v23[0] = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v23[1] = a1;
    v24 = v6 == 0;
    sub_18001E62C(&v26, v23);
    if ( v23[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 16LL))(v23[0]);
    v16 = v26;
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a3 + 112LL))(*a3, v26, a4);
    v9 = v17;
    if ( v17 >= 0 )
      v9 = 0;
    else
      sub_180003268(retaddr, 279, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v17);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  else
  {
    sub_180003268(retaddr, 258, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v9);
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_34:
  v18 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v18)[2])(v18);
  }
  return (unsigned int)v9;
}
