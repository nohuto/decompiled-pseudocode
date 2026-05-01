/*
 * XREFs of sub_1800273AC @ 0x1800273AC
 * Callers:
 *     sub_18000CE50 @ 0x18000CE50 (sub_18000CE50.c)
 *     sub_18001E990 @ 0x18001E990 (sub_18001E990.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_1800280C8 @ 0x1800280C8 (sub_1800280C8.c)
 *     sub_180028228 @ 0x180028228 (sub_180028228.c)
 *     sub_1800283F4 @ 0x1800283F4 (sub_1800283F4.c)
 *     sub_1800285F8 @ 0x1800285F8 (sub_1800285F8.c)
 *     sub_180028944 @ 0x180028944 (sub_180028944.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800273AC(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  int v13; // edx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 (__fastcall ***v19)(_QWORD, void *, __int64); // rcx
  __int128 v21; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v23)(_QWORD, void *, __int64); // [rsp+40h] [rbp+8h] BYREF

  v8 = a1[32];
  if ( v8 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v8 = a1[32];
    }
    a1[32] = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = a1[31];
  if ( v9 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
      v9 = a1[31];
    }
    a1[31] = a3;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = a1[28];
  if ( v10 != a4 )
  {
    if ( a4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
      v10 = a1[28];
    }
    a1[28] = a4;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v23 = 0LL;
  v21 = xmmword_180050C78;
  v11 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)a3 + 48LL))(a3, &v21, &v23);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 235;
LABEL_24:
    sub_180003268(retaddr, v13, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v11);
    goto LABEL_34;
  }
  v14 = a1[34];
  if ( v14 )
  {
    a1[34] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v11 = (**v23)(v23, &unk_180050A70, (__int64)(a1 + 34));
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 236;
    goto LABEL_24;
  }
  v11 = sub_1800285F8(a1);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 238;
    goto LABEL_24;
  }
  v15 = sub_1800283F4(a1);
  if ( v15 < 0 )
    sub_180012300(retaddr, 239, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v15);
  v16 = sub_180028944(a1);
  if ( v16 < 0 )
    sub_180012300(retaddr, 240, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v16);
  v17 = sub_1800280C8(a1);
  if ( v17 < 0 )
    sub_180012300(retaddr, 241, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v17);
  v18 = sub_180028228(a1);
  if ( v18 < 0 )
    sub_180012300(retaddr, 242, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v18);
  v12 = 0;
LABEL_34:
  v19 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64)))(*v19)[2])(v19);
  }
  return v12;
}
