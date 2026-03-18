/*
 * XREFs of ?reserve_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVMatrix3x2F@D2D1@@_K0@Z @ 0x1802697D8
 * Callers:
 *     ??$emplace_back@VMatrix3x2F@D2D1@@@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXVMatrix3x2F@D2D1@@@Z @ 0x180269408 (--$emplace_back@VMatrix3x2F@D2D1@@@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x180269458 (--$move_backward@V-$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V-$checked_array_iterator@PEAVMatri.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180269680 (-ensure_extra_capacity@-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@.c)
 */

__int64 __fastcall detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  bool v13; // sf
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1uLL);
  v4 = *a1;
  v5 = a1[1];
  v16 = 0LL;
  v6 = (unsigned __int128)((v5 - v4) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v18 = 0LL;
  *((_QWORD *)&v15 + 1) = 1LL;
  v7 = (v5 - v4) / 24;
  v8 = v7 - a2;
  v9 = v4 + 24 * v7;
  *(_QWORD *)&v15 = v9;
  v17 = v15;
  if ( !v9 )
    goto LABEL_18;
  v18 = 1LL;
  v10 = (v5 - v4) / 24 - a2;
  if ( v8 > 1 )
    v10 = 1LL;
  v16 = 1LL;
  v11 = 24 * v10;
  v6 = v5 - v11;
  if ( v5 != v5 - v11 )
  {
    v12 = v16;
    v9 = v17 + 24;
    do
    {
      v5 -= 24LL;
      if ( !(_QWORD)v15 )
        goto LABEL_18;
      if ( !v12 )
        goto LABEL_18;
      --v12;
      v9 -= 24LL;
      if ( v12 >= *((_QWORD *)&v15 + 1) )
        goto LABEL_18;
      *(_OWORD *)v9 = *(_OWORD *)v5;
      *(_QWORD *)(v9 + 16) = *(_QWORD *)(v5 + 16);
    }
    while ( v5 != v6 );
  }
  if ( v8 > 1 )
  {
    *(_QWORD *)&v17 = v4;
    *((_QWORD *)&v17 + 1) = v7;
    v13 = v7 < 0;
    if ( v7 )
    {
      if ( !v4 )
        goto LABEL_18;
      v13 = v7 < 0;
    }
    if ( v13 && v7 )
    {
LABEL_18:
      _o__invalid_parameter_noinfo_noreturn(v9, v6);
      __debugbreak();
      JUMPOUT(0x180269972LL);
    }
    v18 = v7;
    v15 = v17;
    v16 = v7;
    std::move_backward<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
      (__int64)&v17,
      (const void *)(v4 + 24 * a2),
      v4 + 24 * (v7 - 1),
      (__int64 *)&v15);
  }
  a1[1] += 24LL;
  return v4 + 24 * a2;
}
