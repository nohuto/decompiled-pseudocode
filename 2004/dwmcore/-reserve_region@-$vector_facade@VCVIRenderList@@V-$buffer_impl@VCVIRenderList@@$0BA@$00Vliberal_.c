/*
 * XREFs of ?reserve_region@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCVIRenderList@@_K0@Z @ 0x1800CA35C
 * Callers:
 *     ?AddCVIToPreRenderList@CDesktopTree@@UEAAXAEAVCVIRenderList@@@Z @ 0x1800CA300 (-AddCVIToPreRenderList@CDesktopTree@@UEAAXAEAVCVIRenderList@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180099B10 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAVCVIRenderList@@@std@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@V?$move_iterator@PEAVCVIRenderList@@@0@0V12@@Z @ 0x18016B784 (--$move_backward@V-$move_iterator@PEAVCVIRenderList@@@std@@V-$checked_array_iterator@PEAVCVIRend.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAVCVIRenderList@@@std@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@V?$move_iterator@PEAVCVIRenderList@@@0@0V12@@Z @ 0x18016B850 (--$uninitialized_copy@V-$move_iterator@PEAVCVIRenderList@@@std@@V-$checked_array_iterator@PEAVCV.c)
 */

char *__fastcall detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2)
{
  _BYTE *v4; // rcx
  __int64 v5; // r10
  __int64 v6; // r9
  char *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r10
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdi
  LPVOID v19; // rax
  void *v20; // r8
  void *v21; // rdx
  LPVOID v22; // rbx
  void *v23; // rcx
  bool v24; // zf
  char *v25; // rdx
  __int64 v26; // rax
  bool v27; // sf
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-30h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]

  v4 = a1[2];
  v5 = 0x6666666666666667LL;
  v6 = (__int64)a1[1];
  if ( !((__int64)&v4[-v6] / 40) )
  {
    v16 = (v6 - (__int64)*a1) / 40;
    v17 = v16 + 1;
    if ( v16 + 1 < v16 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v18 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)(v4 - (_BYTE *)*a1),
            ((unsigned __int64)((unsigned __int128)((v4 - (_BYTE *)*a1) * (__int128)v5) >> 64) >> 63)
          + ((__int64)((unsigned __int128)((v4 - (_BYTE *)*a1) * (__int128)v5) >> 64) >> 4),
            v17);
    v19 = operator new(saturated_mul(v18, 0x28uLL));
    v20 = a1[1];
    v21 = *a1;
    *(_QWORD *)&v28 = v19;
    v22 = v19;
    *((_QWORD *)&v28 + 1) = v16;
    v29 = 0LL;
    v30 = v28;
    v31 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::uninitialized_copy<std::move_iterator<CVIRenderList *>,stdext::checked_array_iterator<CVIRenderList *>>)(
      &v28,
      v21,
      v20,
      &v30);
    v23 = *a1;
    v24 = *a1 == a1 + 3;
    *a1 = v22;
    if ( v24 )
      v23 = 0LL;
    operator delete(v23);
    v25 = (char *)*a1;
    v6 = (__int64)*a1 + 40 * v16;
    a1[1] = (void *)v6;
    a1[2] = &v25[40 * v18];
  }
  v7 = (char *)*a1;
  v8 = v6 - (_QWORD)*a1;
  *((_QWORD *)&v28 + 1) = 1LL;
  v29 = 0LL;
  v31 = 0LL;
  v9 = v8 / 40;
  v10 = v8 / 40 - a2;
  v11 = (unsigned __int64)&v7[40 * (v8 / 40)];
  *(_QWORD *)&v28 = v11;
  v30 = v28;
  if ( !v11 )
    goto LABEL_25;
  v31 = 1LL;
  v12 = 1LL;
  if ( v10 <= 1 )
    v12 = v10;
  v29 = 1LL;
  v13 = 40 * v12;
  v14 = v6 - v13;
  if ( v6 != v6 - v13 )
  {
    v11 = v29;
    v26 = v30 + 40;
    do
    {
      v6 -= 40LL;
      if ( !(_QWORD)v28 )
        goto LABEL_25;
      if ( !v11 )
        goto LABEL_25;
      --v11;
      v26 -= 40LL;
      if ( v11 >= *((_QWORD *)&v28 + 1) )
        goto LABEL_25;
      *(_OWORD *)v26 = *(_OWORD *)v6;
      *(_OWORD *)(v26 + 16) = *(_OWORD *)(v6 + 16);
      *(_QWORD *)(v26 + 32) = *(_QWORD *)(v6 + 32);
    }
    while ( v6 != v14 );
  }
  if ( v10 > 1 )
  {
    *(_QWORD *)&v30 = v7;
    *((_QWORD *)&v30 + 1) = v9;
    v27 = v9 < 0;
    if ( v9 )
    {
      if ( !v7 )
        goto LABEL_25;
      v27 = v9 < 0;
    }
    if ( !v27 || !v9 )
    {
      v31 = v9;
      v28 = v30;
      v29 = v9;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<CVIRenderList *>,stdext::checked_array_iterator<CVIRenderList *>>)(
        &v30,
        &v7[40 * a2],
        &v7[40 * v9 - 40],
        &v28);
      goto LABEL_7;
    }
LABEL_25:
    _o__invalid_parameter_noinfo_noreturn(v11, v10);
    __debugbreak();
    JUMPOUT(0x18014728BLL);
  }
LABEL_7:
  a1[1] = (char *)a1[1] + 40;
  return &v7[40 * a2];
}
