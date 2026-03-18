/*
 * XREFs of ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDevice@@_K0@Z @ 0x180008908
 * Callers:
 *     ?DelayUnpinResources@CD3DDevice@@QEAAXPEAVCCompositionSurfaceInfo@@U_LUID@@IV?$span@PEAUIDXGIResource@@$0?0@gsl@@@Z @ 0x180005AD0 (-DelayUnpinResources@CD3DDevice@@QEAAXPEAVCCompositionSurfaceInfo@@U_LUID@@IV-$span@PEAUIDXGIRes.c)
 * Callees:
 *     ??$destruct_range@VCUnpinResource@CD3DDevice@@@detail@@YAXPEAVCUnpinResource@CD3DDevice@@0@Z @ 0x180008A14 (--$destruct_range@VCUnpinResource@CD3DDevice@@@detail@@YAXPEAVCUnpinResource@CD3DDevice@@0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@0@0V12@@Z @ 0x18027FECC (--$move_backward@V-$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V-$checked_array_iterator.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@0@0V12@@Z @ 0x18027FF90 (--$uninitialized_move@V-$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V-$checked_array_ite.c)
 *     ??0CUnpinResource@CD3DDevice@@QEAA@AEBV01@@Z @ 0x180280054 (--0CUnpinResource@CD3DDevice@@QEAA@AEBV01@@Z.c)
 */

char *__fastcall detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::reserve_region(
        CD3DDevice::CUnpinResource **a1,
        __int64 a2)
{
  const struct CD3DDevice::CUnpinResource *v2; // rsi
  CD3DDevice::CUnpinResource *v5; // rdx
  __int64 v6; // rcx
  CD3DDevice::CUnpinResource *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v15; // r13
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdi
  CD3DDevice::CUnpinResource *v19; // rax
  CD3DDevice::CUnpinResource *v20; // r8
  CD3DDevice::CUnpinResource *v21; // rdx
  CD3DDevice::CUnpinResource *v22; // rbx
  CD3DDevice::CUnpinResource *v23; // rcx
  bool v24; // zf
  __int64 v25; // rdi
  __int128 v26; // [rsp+20h] [rbp-40h] BYREF
  __int64 v27; // [rsp+30h] [rbp-30h]
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]
  const struct CD3DDevice::CUnpinResource *v30; // [rsp+A0h] [rbp+40h]

  v2 = a1[1];
  v5 = a1[2];
  v6 = 1LL;
  if ( !((v5 - v2) >> 5) )
  {
    v16 = (v2 - *a1) >> 5;
    v17 = v16 + 1;
    if ( v16 + 1 < v16 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v18 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)v6, (v5 - *a1) >> 5, v17);
    v19 = (CD3DDevice::CUnpinResource *)operator new(saturated_mul(v18, 0x20uLL));
    v20 = a1[1];
    v21 = *a1;
    *(_QWORD *)&v28 = v19;
    *((_QWORD *)&v28 + 1) = v16;
    v22 = v19;
    v29 = 0LL;
    v26 = v28;
    v27 = 0LL;
    ((void (__fastcall *)(__int128 *, CD3DDevice::CUnpinResource *, CD3DDevice::CUnpinResource *, __int128 *))std::uninitialized_move<std::move_iterator<CD3DDevice::CUnpinResource *>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>)(
      &v28,
      v21,
      v20,
      &v26);
    detail::destruct_range<CD3DDevice::CUnpinResource>(*a1);
    v23 = *a1;
    v24 = *a1 == (CD3DDevice::CUnpinResource *)(a1 + 3);
    *a1 = v22;
    if ( v24 )
      v23 = 0LL;
    DefaultHeap::Free(v23);
    v6 = 1LL;
    v2 = (CD3DDevice::CUnpinResource *)((char *)*a1 + 32 * v16);
    v25 = (__int64)*a1 + 32 * v18;
    a1[1] = v2;
    a1[2] = (CD3DDevice::CUnpinResource *)v25;
  }
  v7 = *a1;
  v8 = v2 - *a1;
  *((_QWORD *)&v28 + 1) = 1LL;
  v9 = v8 >> 5;
  v10 = v9 - a2;
  *(_QWORD *)&v28 = (char *)v7 + 32 * v9;
  if ( !(_QWORD)v28 )
    goto LABEL_23;
  v29 = 1LL;
  v11 = v9 - a2;
  if ( v10 > 1 )
    v11 = 1LL;
  v26 = v28;
  v12 = 32 * v11;
  v6 = (__int64)v2 - v12;
  v27 = 1LL;
  v30 = (const struct CD3DDevice::CUnpinResource *)((char *)v2 - v12);
  if ( v2 != (const struct CD3DDevice::CUnpinResource *)((char *)v2 - v12) )
  {
    v15 = v27;
    do
    {
      v2 = (const struct CD3DDevice::CUnpinResource *)((char *)v2 - 32);
      if ( !(_QWORD)v26 )
        goto LABEL_23;
      if ( !v15 )
        goto LABEL_23;
      if ( (unsigned __int64)--v15 >= *((_QWORD *)&v26 + 1) )
        goto LABEL_23;
      CD3DDevice::CUnpinResource::CUnpinResource((CD3DDevice::CUnpinResource *)(v26 + 32 * v15), v2);
    }
    while ( v2 != v30 );
  }
  if ( v10 > 1 )
  {
    *(_QWORD *)&v28 = v7;
    *((_QWORD *)&v28 + 1) = v9;
    if ( !v9 || v7 && v9 >= 0 )
    {
      v29 = v9;
      v26 = v28;
      v27 = v9;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<CD3DDevice::CUnpinResource *>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>)(
        &v28,
        (char *)v7 + 32 * a2,
        (char *)v7 + 32 * v9 - 32,
        &v26);
      goto LABEL_7;
    }
LABEL_23:
    _o__invalid_parameter_noinfo_noreturn(v6);
    __debugbreak();
    JUMPOUT(0x18011836CLL);
  }
LABEL_7:
  v13 = 32 * a2;
  detail::destruct_range<CD3DDevice::CUnpinResource>((CD3DDevice::CUnpinResource *)((char *)v7 + v13));
  a1[1] = (CD3DDevice::CUnpinResource *)((char *)a1[1] + 32);
  return (char *)v7 + v13;
}
