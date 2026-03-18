/*
 * XREFs of ?reserve_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUEffectInput@@_K0@Z @ 0x180058098
 * Callers:
 *     ??$emplace_back@UEffectInput@@@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUEffectInput@@@Z @ 0x180057F30 (--$emplace_back@UEffectInput@@@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180057FC0 (--0EffectInput@@QEAA@AEBU0@@Z.c)
 *     ??$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z @ 0x180058960 (--$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??_GEffectInput@@QEAAPEAXI@Z @ 0x18025224C (--_GEffectInput@@QEAAPEAXI@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x1802B32A0 (--$move_backward@V-$move_iterator@PEAUEffectInput@@@std@@V-$checked_array_iterator@PEAUEffectInp.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x1802B337C (--$uninitialized_move@V-$move_iterator@PEAUEffectInput@@@std@@V-$checked_array_iterator@PEAUEffe.c)
 */

EffectInput *__fastcall detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::reserve_region(
        _QWORD *a1,
        __int64 a2)
{
  const struct EffectInput *v2; // rsi
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // r9
  detail::liberal_expansion_policy *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  const struct EffectInput *v14; // r13
  unsigned __int64 v15; // rsi
  EffectInput *v16; // rdi
  EffectInput *i; // rbx
  __int64 v19; // r15
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rdi
  LPVOID v23; // rax
  __int64 v24; // r8
  __int64 v25; // rdx
  LPVOID v26; // rbx
  void *v27; // rcx
  bool v28; // zf
  __int128 v29; // [rsp+20h] [rbp-60h] BYREF
  __int64 v30; // [rsp+30h] [rbp-50h]
  __int128 v31; // [rsp+40h] [rbp-40h]
  __int64 v32; // [rsp+50h] [rbp-30h]
  __int128 v33; // [rsp+60h] [rbp-20h] BYREF
  __int64 v34; // [rsp+70h] [rbp-10h]

  v2 = (const struct EffectInput *)a1[1];
  v3 = a2;
  v4 = a1[2];
  v5 = 0x4EC4EC4EC4EC4EC5LL;
  v7 = 0LL;
  if ( !(0x4EC4EC4EC4EC4EC5LL * ((v4 - (__int64)v2) >> 3)) )
  {
    v20 = 0x4EC4EC4EC4EC4EC5LL * (((__int64)v2 - *a1) >> 3);
    v21 = v20 + 1;
    if ( v20 + 1 < v20 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v22 = detail::liberal_expansion_policy::expand(v7, v5 * ((v4 - *a1) >> 3), v21);
    v23 = operator new(saturated_mul(v22, 0x68uLL));
    v24 = a1[1];
    v25 = *a1;
    *(_QWORD *)&v31 = v23;
    *((_QWORD *)&v31 + 1) = v20;
    v26 = v23;
    v32 = 0LL;
    v29 = v31;
    v30 = 0LL;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::uninitialized_move<std::move_iterator<EffectInput *>,stdext::checked_array_iterator<EffectInput *>>)(
      &v33,
      v25,
      v24,
      &v29);
    detail::destruct_range<EffectInput>(*a1, a1[1]);
    v27 = (void *)*a1;
    v28 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v26;
    if ( v28 )
      v27 = 0LL;
    DefaultHeap::Free(v27);
    a1[2] = *a1 + 104 * v22;
    v2 = (const struct EffectInput *)(*a1 + 104 * v20);
    v7 = 0LL;
    a1[1] = v2;
  }
  v8 = *a1;
  v9 = (__int64)v2 - *a1;
  *((_QWORD *)&v31 + 1) = 1LL;
  v10 = 0x4EC4EC4EC4EC4EC5LL * (v9 >> 3);
  v11 = v10 - v3;
  *(_QWORD *)&v31 = v8 + 104 * v10;
  if ( !(_QWORD)v31 )
    goto LABEL_29;
  v32 = 1LL;
  v12 = v10 - v3;
  if ( v11 > 1 )
    v12 = 1LL;
  v29 = v31;
  v13 = 104 * v12;
  v30 = 1LL;
  v14 = (const struct EffectInput *)((char *)v2 - v13);
  if ( v2 != (const struct EffectInput *)((char *)v2 - v13) )
  {
    v19 = v30;
    while ( 1 )
    {
      v2 = (const struct EffectInput *)((char *)v2 - 104);
      if ( !(_QWORD)v29 )
        goto LABEL_29;
      if ( !v19 )
        goto LABEL_29;
      if ( (unsigned __int64)--v19 >= *((_QWORD *)&v29 + 1) )
        goto LABEL_29;
      EffectInput::EffectInput((EffectInput *)(v29 + 104 * v19), v2);
      if ( v2 == v14 )
        break;
      v7 = 0LL;
    }
    v3 = a2;
  }
  if ( v11 > 1 )
  {
    *(_QWORD *)&v29 = v8;
    *((_QWORD *)&v29 + 1) = v10;
    if ( !v10 || v8 && v10 >= 0 )
    {
      v30 = v10;
      v33 = v29;
      v34 = v10;
      std::move_backward<std::move_iterator<EffectInput *>,stdext::checked_array_iterator<EffectInput *>>(
        &v29,
        v8 + 104 * v3,
        104 * v10 + v8 - 104,
        &v33);
      goto LABEL_7;
    }
LABEL_29:
    _o__invalid_parameter_noinfo_noreturn(v7);
    __debugbreak();
    JUMPOUT(0x1801360B2LL);
  }
LABEL_7:
  v15 = v8 + 104 * (v3 + 1);
  if ( (unsigned __int64)v31 < v15 )
    v15 = v31;
  v16 = (EffectInput *)(104 * v3 + v8);
  for ( i = v16; i != (EffectInput *)v15; i = (EffectInput *)((char *)i + 104) )
    EffectInput::`scalar deleting destructor'(i, v4);
  a1[1] += 104LL;
  return v16;
}
