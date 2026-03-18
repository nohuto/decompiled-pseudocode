/*
 * XREFs of ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDevice@@_K0@Z @ 0x180241DE0
 * Callers:
 *     ?UnpinResources@CD3DDevice@@QEAAXV?$span@PEAUIDXGIResource@@$0?0@gsl@@_N@Z @ 0x180241528 (-UnpinResources@CD3DDevice@@QEAAXV-$span@PEAUIDXGIResource@@$0-0@gsl@@_N@Z.c)
 * Callees:
 *     ??$destruct_range@VCUnpinResource@CD3DDevice@@@detail@@YAXPEAVCUnpinResource@CD3DDevice@@0@Z @ 0x18023E0FC (--$destruct_range@VCUnpinResource@CD3DDevice@@@detail@@YAXPEAVCUnpinResource@CD3DDevice@@0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@0@0V12@@Z @ 0x18023E228 (--$move_backward@V-$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V-$checked_array_iterator.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@VCUnpinResource@CD3DDevice@@@detail@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@detail@@YAXV?$basic_iterator@VCUnpinResource@CD3DDevice@@@0@0V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@Z @ 0x18023E31C (--$move_backward_uninitialized@V-$basic_iterator@VCUnpinResource@CD3DDevice@@@detail@@V-$checked.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180241C68 (-ensure_extra_capacity@-$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy.c)
 */

__int64 *__fastcall detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r15
  __int64 v13; // rcx
  bool v14; // sf
  __int64 v15; // rbx
  __int64 *v16; // rdx
  __int64 *v17; // rbx
  __int128 v19; // [rsp+20h] [rbp-40h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h]
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h]
  __int64 v23; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+50h] BYREF

  v24 = a3;
  detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    (__int64)a1,
    1uLL);
  v20 = 0LL;
  v7 = *a1;
  v8 = a1[1];
  v9 = v8 - *a1;
  *((_QWORD *)&v19 + 1) = 1LL;
  v10 = v9 >> 4;
  v20 = 0LL;
  v11 = v7 + 16 * v10;
  v12 = v10 - a2;
  *(_QWORD *)&v19 = v11;
  if ( !v11 )
    goto LABEL_15;
  v24 = v8;
  v20 = 1LL;
  v13 = v10 - a2;
  v21 = v19;
  if ( v12 > 1 )
    v13 = 1LL;
  v22 = 1LL;
  v23 = v8 - 16 * v13;
  detail::move_backward_uninitialized<detail::basic_iterator<CD3DDevice::CUnpinResource>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>(
    &v23,
    &v24,
    (__int64 *)&v21);
  if ( v12 > 1 )
  {
    *(_QWORD *)&v19 = v7;
    *((_QWORD *)&v19 + 1) = v10;
    v14 = v10 < 0;
    if ( v10 )
    {
      if ( !v7 )
        goto LABEL_15;
      v14 = v10 < 0;
    }
    if ( !v14 || !v10 )
    {
      v15 = 16 * a2;
      v20 = v10;
      v21 = v19;
      v22 = v10;
      std::move_backward<std::move_iterator<CD3DDevice::CUnpinResource *>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>(
        (__int64)&v19,
        (char *)(v15 + v7),
        (char *)(v11 - 16),
        &v21);
      goto LABEL_12;
    }
LABEL_15:
    _o__invalid_parameter_noinfo_noreturn(v6, v5);
    __debugbreak();
    JUMPOUT(0x180241F34LL);
  }
  v15 = 16 * a2;
LABEL_12:
  v16 = (__int64 *)(v15 + v7 + 16);
  if ( v11 < (unsigned __int64)v16 )
    v16 = (__int64 *)(v7 + 16 * v10);
  v17 = (__int64 *)(v7 + v15);
  detail::destruct_range<CD3DDevice::CUnpinResource>(v17, v16);
  a1[1] += 16LL;
  return v17;
}
