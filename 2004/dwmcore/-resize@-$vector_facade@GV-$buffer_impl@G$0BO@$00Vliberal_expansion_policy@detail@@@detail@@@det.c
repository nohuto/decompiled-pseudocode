/*
 * XREFs of ?resize@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x180099B38
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800505C0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180099CC0 (-ensure_extra_capacity@-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K.c)
 *     ??$move@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x18019D8A0 (--$move@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$checked_a.c)
 *     ??$move_backward@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x18019DB90 (--$move_backward@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$.c)
 */

__int64 __fastcall detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::resize(
        __int64 *a1,
        __int64 a2,
        unsigned __int16 *a3)
{
  __int64 v3; // r9
  __int64 v5; // rdx
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  _WORD *v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // r10
  bool v14; // sf
  __int64 v15; // rax
  __int64 v16; // rax
  _WORD *v17; // r9
  __int64 result; // rax
  unsigned __int16 *v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  _WORD *v22; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r8
  __int64 v26; // r11
  bool v27; // sf
  bool v28; // sf
  __int128 v29; // [rsp+20h] [rbp-40h] BYREF
  __int64 v30; // [rsp+30h] [rbp-30h]
  __int128 v31; // [rsp+40h] [rbp-20h] BYREF
  __int64 v32; // [rsp+50h] [rbp-10h]

  v3 = *a1;
  v5 = a1[1];
  v8 = (v5 - *a1) >> 1;
  if ( a2 <= v8 )
  {
    v9 = (v5 - 2 * a2 - v3) >> 1;
    v12 = v9 + a2;
    if ( v9 + a2 > v8 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    else
    {
      v25 = v3 + 2 * v8;
      if ( v9 + a2 == v8 )
      {
LABEL_26:
        result = 2 * v9;
        a1[1] = v5 - 2 * v9;
        return result;
      }
    }
    *(_QWORD *)&v31 = v3;
    *((_QWORD *)&v31 + 1) = v8;
    v28 = a2 < 0;
    if ( a2 )
    {
      if ( !v3 )
        goto LABEL_47;
      v28 = a2 < 0;
    }
    if ( !v28 || !a2 )
      goto LABEL_48;
    goto LABEL_47;
  }
  a2 -= v8;
  detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, a2);
  v9 = *a1;
  v10 = 0LL;
  v11 = (_WORD *)a1[1];
  *((_QWORD *)&v29 + 1) = a2;
  v12 = ((__int64)v11 - v9) >> 1;
  v13 = v12 - v8;
  *(_QWORD *)&v29 = v9 + 2 * v12;
  v14 = a2 < 0;
  if ( a2 )
  {
    if ( !(v9 + 2 * v12) )
      goto LABEL_47;
    v14 = a2 < 0;
  }
  if ( v14 && a2 )
    goto LABEL_47;
  v30 = a2;
  v15 = a2;
  if ( a2 >= v13 )
    v15 = v12 - v8;
  v31 = v29;
  v16 = 2 * v15;
  v32 = a2;
  v17 = &v11[v16 / 0xFFFFFFFFFFFFFFFEuLL];
  if ( v11 != &v11[v16 / 0xFFFFFFFFFFFFFFFEuLL] )
  {
    v26 = v31;
    v5 = v32;
    do
    {
      --v11;
      if ( !v26 )
        goto LABEL_47;
      if ( !v5 )
        goto LABEL_47;
      if ( (unsigned __int64)--v5 >= *((_QWORD *)&v31 + 1) )
        goto LABEL_47;
      *(_WORD *)(v26 + 2 * v5) = *v11;
    }
    while ( v11 != v17 );
  }
  if ( v13 <= a2 )
    goto LABEL_10;
  *(_QWORD *)&v31 = v9;
  *((_QWORD *)&v31 + 1) = v12;
  v27 = v12 < 0;
  if ( v12 )
  {
    if ( v9 )
    {
      v27 = v12 < 0;
      goto LABEL_38;
    }
LABEL_47:
    _o__invalid_parameter_noinfo_noreturn(v12, v5);
    __debugbreak();
LABEL_48:
    v32 = a2;
    v29 = v31;
    v30 = a2;
    ((void (__fastcall *)(__int128 *, __int64, unsigned __int64, __int128 *))std::move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>)(
      &v31,
      v3 + 2 * v12,
      v25,
      &v29);
    v5 = a1[1];
    goto LABEL_26;
  }
LABEL_38:
  if ( v27 && v12 )
    goto LABEL_47;
  v32 = v12;
  v29 = v31;
  v30 = v12;
  ((void (__fastcall *)(__int128 *, unsigned __int64, __int64, __int128 *))std::move_backward<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>)(
    &v31,
    v9 + 2 * v8,
    v9 + 2 * (v12 - a2),
    &v29);
LABEL_10:
  result = 2 * a2;
  a1[1] += 2 * a2;
  v19 = (unsigned __int16 *)(v9 + 2 * v8);
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= 8 && (v19 > a3 || (unsigned __int16 *)((char *)v19 + result - 2) < a3) )
    {
      v20 = a2 & 0xFFFFFFFFFFFFFFF8uLL;
      do
        v10 += 8LL;
      while ( v10 < v20 );
      v21 = 2 * v20;
      result = *a3;
      v22 = (_WORD *)(v9 + 2 * v8);
      for ( i = v21 >> 1; i; --i )
        *v22++ = result;
      v19 = (unsigned __int16 *)((char *)v19 + v21);
    }
    if ( v10 < a2 )
    {
      v24 = a2 - v10;
      do
      {
        result = *a3;
        *v19++ = result;
        --v24;
      }
      while ( v24 );
    }
  }
  return result;
}
