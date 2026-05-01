/*
 * XREFs of sub_180028944 @ 0x180028944
 * Callers:
 *     sub_1800273AC @ 0x1800273AC (sub_1800273AC.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180010A90 @ 0x180010A90 (sub_180010A90.c)
 *     sub_18002CE7C @ 0x18002CE7C (sub_18002CE7C.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180028944(__int64 a1)
{
  __int64 v3; // rbx
  int v4; // esi
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // eax
  _QWORD v10[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+28h]
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF
  __int64 *v13; // [rsp+68h] [rbp+38h] BYREF
  __int64 v14; // [rsp+70h] [rbp+40h]

  if ( !*(_QWORD *)(a1 + 256) )
  {
    sub_180003268(
      retaddr,
      529,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      -2147019873);
    return 2147947423LL;
  }
  v3 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v4 = sub_180010A90(a1, &xmmword_180051408, &v13);
  if ( v4 >= 0 )
  {
    v12 = 0LL;
    v6 = v13;
    v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v13 + 24))(v13, &v12);
    v7 = v12;
    if ( v4 >= 0 )
    {
      v3 = v12;
      if ( v12 )
      {
        (*(void (**)(void))(*(_QWORD *)v12 + 8LL))();
        v7 = v12;
      }
      v14 = v3;
      if ( v7 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      (*(void (__fastcall **)(__int64 *))(*v6 + 16))(v6);
      v4 = 0;
      goto LABEL_16;
    }
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v5 = *v6;
    goto LABEL_6;
  }
  if ( v13 )
  {
    v5 = *v13;
LABEL_6:
    (*(void (**)(void))(v5 + 16))();
  }
LABEL_16:
  if ( v4 >= 0 )
  {
    v10[0] = v3;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v10[1] = a1;
    sub_18002CE7C(&v12, v10);
    if ( v10[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10[0] + 16LL))(v10[0]);
    v8 = v12;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 256) + 152LL))(
           *(_QWORD *)(a1 + 256),
           v12,
           a1 + 264);
    v4 = v9;
    if ( v9 >= 0 )
      v4 = 0;
    else
      sub_180003268(retaddr, 561, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v9);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    sub_180003268(retaddr, 532, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v4);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v4;
}
