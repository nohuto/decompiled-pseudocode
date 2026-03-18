/*
 * XREFs of ?resize@?$vector_facade@GV?$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x1800C87B0
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800AB300 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800C8940 (-ensure_extra_capacity@-$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K.c)
 *     ??$move@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x1801E2700 (--$move@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$checked_a.c)
 *     ??$move_backward@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x1801E29DC (--$move_backward@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$.c)
 */

unsigned __int64 __fastcall detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,174,1,detail::liberal_expansion_policy>>::resize(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int16 *a3)
{
  unsigned __int64 v5; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // r15
  _WORD *v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  _WORD *v15; // rdx
  __int64 v16; // rdi
  unsigned __int64 result; // rax
  unsigned __int16 *v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rdx
  __int16 v22; // ax
  _WORD *v23; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // rbx
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // r11
  unsigned __int64 v31; // r10
  __int128 v32; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v33; // [rsp+30h] [rbp-30h]
  __int128 v34; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v35; // [rsp+50h] [rbp-10h]

  v5 = a1[1];
  v7 = *a1;
  v8 = (__int64)(v5 - *a1) >> 1;
  if ( a2 <= v8 )
  {
    v26 = (__int64)(2 * a2) >> 1;
    v27 = (__int64)(v5 - 2 * a2 - v7) >> 1;
    v28 = v27 + v26;
    if ( v27 + v26 > v8 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    else
    {
      v29 = v7 + 2 * v8;
      if ( v28 == v8 )
        goto LABEL_25;
    }
    *(_QWORD *)&v34 = v7;
    *((_QWORD *)&v34 + 1) = v8;
    if ( v26 && (!v7 || v26 < 0 || v8 < v26) )
      goto LABEL_44;
    v35 = v26;
    v32 = v34;
    v33 = v26;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>)(
      &v34,
      v7 + 2 * v28,
      v29,
      &v32);
    v5 = a1[1];
LABEL_25:
    result = 2 * v27;
    a1[1] = v5 - 2 * v27;
    return result;
  }
  v9 = a2 - v8;
  detail::buffer_impl<unsigned short,174,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, v9);
  v10 = *a1;
  v11 = (_WORD *)a1[1];
  *((_QWORD *)&v32 + 1) = v9;
  v12 = ((__int64)v11 - v10) >> 1;
  v5 = v12 - v8;
  *(_QWORD *)&v32 = v10 + 2 * v12;
  if ( v9 && (!(v10 + 2 * v12) || (v9 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_44;
  v33 = v9;
  v13 = v12 - v8;
  if ( v9 < v5 )
    v13 = v9;
  v34 = v32;
  v14 = 2 * v13;
  v35 = v9;
  v15 = &v11[v14 / 0xFFFFFFFFFFFFFFFEuLL];
  if ( v11 != &v11[v14 / 0xFFFFFFFFFFFFFFFEuLL] )
  {
    v30 = v34;
    v31 = v35;
    do
    {
      --v11;
      if ( !v30 )
        goto LABEL_44;
      if ( !v31 )
        goto LABEL_44;
      if ( --v31 >= *((_QWORD *)&v34 + 1) )
        goto LABEL_44;
      *(_WORD *)(v30 + 2 * v31) = *v11;
    }
    while ( v11 != v15 );
  }
  if ( v5 > v9 )
  {
    *(_QWORD *)&v34 = v10;
    *((_QWORD *)&v34 + 1) = v12;
    if ( !v12 || v10 && v12 >= 0 )
    {
      v35 = v12;
      v32 = v34;
      v16 = 2 * v8;
      v33 = v12;
      ((void (__fastcall *)(__int128 *, __int64, unsigned __int64, __int128 *))std::move_backward<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>)(
        &v34,
        v16 + v10,
        v10 + 2 * (v12 - v9),
        &v32);
      goto LABEL_10;
    }
LABEL_44:
    _o__invalid_parameter_noinfo_noreturn(v5);
    __debugbreak();
    JUMPOUT(0x1801672C1LL);
  }
  v16 = 2 * v8;
LABEL_10:
  result = 0LL;
  a1[1] += 2 * v9;
  v18 = (unsigned __int16 *)(v16 + v10);
  if ( v9 )
  {
    if ( v9 < 8 || v18 <= a3 && &v18[v9 - 1] >= a3 )
      goto LABEL_20;
    v19 = v9 & 0x7FFFFFFFFFFFFFF8LL;
    do
    {
      result += 8LL;
      v20 = result;
    }
    while ( result < v19 );
    v21 = 2 * v19;
    v22 = *a3;
    v23 = (_WORD *)(v16 + v10);
    for ( i = v21 >> 1; i; --i )
      *v23++ = v22;
    v18 = (unsigned __int16 *)((char *)v18 + v21);
    result = v20;
    if ( v20 < v9 )
    {
LABEL_20:
      v25 = v9 - result;
      do
      {
        result = *a3;
        *v18++ = result;
        --v25;
      }
      while ( v25 );
    }
  }
  return result;
}
