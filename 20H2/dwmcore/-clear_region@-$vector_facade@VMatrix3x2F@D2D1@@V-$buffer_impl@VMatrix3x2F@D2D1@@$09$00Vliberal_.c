/*
 * XREFs of ?clear_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180209CE0
 * Callers:
 *     ?clear@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180209CA0 (-clear@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansi.c)
 *     ?PostSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x18025EAEC (-PostSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x180208DCC (--$move@V-$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V-$checked_array_iterator@PEAVMatrix3x2F@D2D.c)
 */

__int64 __fastcall detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v4; // r10
  __int64 v5; // rbx
  __int64 v6; // r9
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // r8
  bool v13; // sf
  __int64 result; // rax
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-18h]

  v3 = a1[1];
  v4 = a2;
  v5 = *a1;
  v6 = v3 - *a1;
  v9 = a2 + a3;
  v10 = v6 / 24;
  v11 = v9 == v6 / 24;
  if ( v9 > v6 / 24 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v12 = v5 + 24 * v10;
  if ( !v11 )
  {
    *(_QWORD *)&v15 = v5;
    *((_QWORD *)&v15 + 1) = v10;
    v13 = v4 < 0;
    if ( v4 )
    {
      if ( !v5 )
      {
LABEL_11:
        _o__invalid_parameter_noinfo_noreturn(v9, v10);
        __debugbreak();
LABEL_12:
        v16 = v4;
        v17 = v15;
        v18 = v4;
        std::move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
          (__int64)&v15,
          (const void *)(v5 + 24 * v9),
          v12,
          (__int64 *)&v17);
        v3 = a1[1];
        goto LABEL_13;
      }
      v13 = v4 < 0;
    }
    if ( (!v13 || !v4) && (v4 <= 0 || v10 >= v4) )
      goto LABEL_12;
    goto LABEL_11;
  }
LABEL_13:
  result = 24 * a3;
  a1[1] = v3 - 24 * a3;
  return result;
}
