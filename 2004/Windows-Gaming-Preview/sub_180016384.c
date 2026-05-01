/*
 * XREFs of sub_180016384 @ 0x180016384
 * Callers:
 *     sub_18000A1B0 @ 0x18000A1B0 (sub_18000A1B0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_180016298 @ 0x180016298 (sub_180016298.c)
 *     sub_1800184BC @ 0x1800184BC (sub_1800184BC.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     sub_1800453E4 @ 0x1800453E4 (sub_1800453E4.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180016384(__int64 *a1, __int64 a2)
{
  void *v4; // rbx
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned int v13; // r14d
  unsigned int v14; // esi
  int v15; // eax
  void *v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int128 v19; // [rsp+20h] [rbp-68h] BYREF
  __int128 v20; // [rsp+30h] [rbp-58h] BYREF
  __int128 v21; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22; // [rsp+50h] [rbp-38h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v24; // [rsp+90h] [rbp+8h] BYREF
  int v25; // [rsp+A0h] [rbp+18h] BYREF
  void *v26; // [rsp+A8h] [rbp+20h] BYREF

  v24 = 0;
  v4 = 0LL;
  v26 = 0LL;
  v25 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned int *))(*a1 + 48))(a1, 0LL, &v24);
  v6 = v5;
  if ( v5 < 0 )
  {
    sub_180003268(retaddr, 107, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v5);
    return v6;
  }
  if ( !v24 )
  {
    sub_1800453E4(L"GameConfigStore is empty\n");
    return 0;
  }
  v21 = 0LL;
  v22 = 0LL;
  try
  {
    sub_1800184BC(&v21);
  }
  catch ( ... )
  {
    LODWORD(v26) = sub_180012238(
                     retaddr,
                     121,
                     (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
                     v7);
    v10 = v21;
    if ( !(_QWORD)v21 )
      return (unsigned int)v26;
    v11 = (v22 - v21) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v11 < 0x1000 || (v11 += 39LL, v10 = *(_QWORD *)(v21 - 8), (unsigned __int64)(v21 - v10 - 8) <= 0x1F) )
    {
LABEL_34:
      j_j__o_free(v10, v11);
      return (unsigned int)v26;
    }
LABEL_33:
    o__invalid_parameter_noinfo_noreturn(v10, v11);
    __debugbreak();
    goto LABEL_34;
  }
  v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned int *))(*a1 + 48))(a1, v21, &v24);
  v6 = v8;
  if ( v8 < 0 )
  {
    sub_180003268(retaddr, 123, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v8);
    v10 = v21;
    if ( !(_QWORD)v21 )
      return v6;
    v11 = (v22 - v21) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v11 < 0x1000 || (v11 += 39LL, v10 = *(_QWORD *)(v21 - 8), (unsigned __int64)(v21 - v10 - 8) <= 0x1F) )
    {
      j_j__o_free(v10, v11);
      return v6;
    }
    goto LABEL_33;
  }
  v13 = 0;
  v14 = 0;
  if ( v24 )
  {
    while ( 1 )
    {
      v19 = *(_OWORD *)(v21 + 16LL * v14);
      v15 = sub_180016298(a1, &v19, &v26, &v25);
      v13 = v15;
      if ( v15 < 0 )
        break;
      v16 = v26;
      v4 = 0LL;
      v26 = 0LL;
      *(_QWORD *)&v19 = v16;
      v20 = *(_OWORD *)(v21 + 16LL * v14);
      v17 = *(_QWORD *)(a2 + 56);
      if ( !v17 )
      {
        std::_Xbad_function_call();
        break;
      }
      v18 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v17 + 16LL))(v17, &v20, &v19);
      if ( v18 < 0 )
        sub_180012300(retaddr, 143, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v18);
      if ( (_QWORD)v19 )
        j_j__o_free(v19, v9);
      if ( ++v14 >= v24 )
        goto LABEL_23;
    }
    sub_180003268(retaddr, 146, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v15);
    v4 = v26;
  }
LABEL_23:
  v10 = v21;
  if ( (_QWORD)v21 )
  {
    v11 = (v22 - v21) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v11 >= 0x1000 )
    {
      v11 += 39LL;
      v10 = *(_QWORD *)(v21 - 8);
      if ( (unsigned __int64)(v21 - v10 - 8) > 0x1F )
        goto LABEL_33;
    }
    j_j__o_free(v10, v11);
    v21 = 0LL;
    v22 = 0LL;
  }
  if ( v4 )
    j_j__o_free(v4, v9);
  return v13;
}
