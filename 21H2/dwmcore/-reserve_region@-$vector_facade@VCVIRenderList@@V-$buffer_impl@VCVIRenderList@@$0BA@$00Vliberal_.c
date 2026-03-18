/*
 * XREFs of ?reserve_region@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCVIRenderList@@_K0@Z @ 0x1800E8C54
 * Callers:
 *     ?AddCVIToPreRenderList@CDesktopTree@@UEAAXAEAVCVIRenderList@@@Z @ 0x1800E8C00 (-AddCVIToPreRenderList@CDesktopTree@@UEAAXAEAVCVIRenderList@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAVCVIRenderList@@@std@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@V?$move_iterator@PEAVCVIRenderList@@@0@0V12@@Z @ 0x18019C1E4 (--$move_backward@V-$move_iterator@PEAVCVIRenderList@@@std@@V-$checked_array_iterator@PEAVCVIRend.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVCVIRenderList@@@std@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@V?$move_iterator@PEAVCVIRenderList@@@0@0V12@@Z @ 0x18019C29C (--$uninitialized_move@V-$move_iterator@PEAVCVIRenderList@@@std@@V-$checked_array_iterator@PEAVCV.c)
 */

char *__fastcall detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2)
{
  __int64 v2; // rsi
  _BYTE *v5; // rdx
  detail::liberal_expansion_policy *v6; // rcx
  char *v7; // rbx
  signed __int64 v8; // rcx
  unsigned __int64 v9; // r8
  char *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdi
  LPVOID v19; // rax
  void *v20; // r8
  void *v21; // rdx
  LPVOID v22; // rbx
  void *v23; // rcx
  bool v24; // zf
  char *v25; // rcx
  char *v26; // rax
  unsigned __int64 v27; // rdx
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-30h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]

  v2 = (__int64)a1[1];
  v5 = a1[2];
  v6 = (detail::liberal_expansion_policy *)0xCCCCCCCCCCCCCCCDLL;
  if ( !(0xCCCCCCCCCCCCCCCDuLL * ((__int64)&v5[-v2] >> 3)) )
  {
    v16 = 0xCCCCCCCCCCCCCCCDuLL * ((v2 - (__int64)*a1) >> 3);
    v17 = v16 + 1;
    if ( v16 + 1 < v16 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v18 = detail::liberal_expansion_policy::expand(v6, (_QWORD)v6 * ((v5 - (_BYTE *)*a1) >> 3), v17);
    v19 = operator new(saturated_mul(v18, 0x28uLL));
    v20 = a1[1];
    v21 = *a1;
    *(_QWORD *)&v28 = v19;
    v22 = v19;
    *((_QWORD *)&v28 + 1) = v16;
    v29 = 0LL;
    v30 = v28;
    v31 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::uninitialized_move<std::move_iterator<CVIRenderList *>,stdext::checked_array_iterator<CVIRenderList *>>)(
      &v28,
      v21,
      v20,
      &v30);
    v23 = *a1;
    v24 = *a1 == a1 + 3;
    *a1 = v22;
    if ( v24 )
      v23 = 0LL;
    DefaultHeap::Free(v23);
    v25 = (char *)*a1;
    v2 = (__int64)*a1 + 40 * v16;
    a1[1] = (void *)v2;
    a1[2] = &v25[40 * v18];
  }
  v7 = (char *)*a1;
  *((_QWORD *)&v28 + 1) = 1LL;
  v8 = 0xCCCCCCCCCCCCCCCDuLL * ((v2 - (__int64)v7) >> 3);
  v9 = v8 - a2;
  v10 = &v7[8 * ((v2 - (__int64)v7) >> 3)];
  *(_QWORD *)&v28 = v10;
  if ( !v10 )
    goto LABEL_24;
  v29 = 1LL;
  v11 = 0xCCCCCCCCCCCCCCCDuLL * ((v2 - (__int64)v7) >> 3) - a2;
  if ( v9 > 1 )
    v11 = 1LL;
  v30 = v28;
  v31 = 1LL;
  v12 = 40 * v11;
  v13 = v2 - v12;
  if ( v2 != v2 - v12 )
  {
    v26 = v10 + 40;
    v27 = v31;
    do
    {
      v2 -= 40LL;
      if ( !(_QWORD)v30 )
        goto LABEL_24;
      if ( !v27 )
        goto LABEL_24;
      --v27;
      v26 -= 40;
      if ( v27 >= *((_QWORD *)&v30 + 1) )
        goto LABEL_24;
      *(_OWORD *)v26 = *(_OWORD *)v2;
      *((_OWORD *)v26 + 1) = *(_OWORD *)(v2 + 16);
      *((_QWORD *)v26 + 4) = *(_QWORD *)(v2 + 32);
    }
    while ( v2 != v13 );
  }
  if ( v9 > 1 )
  {
    *(_QWORD *)&v30 = v7;
    *((_QWORD *)&v30 + 1) = v8;
    if ( !v8 || v7 && v8 >= 0 )
    {
      v31 = v8;
      v14 = 40 * a2;
      v28 = v30;
      v29 = v8;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<CVIRenderList *>,stdext::checked_array_iterator<CVIRenderList *>>)(
        &v30,
        &v7[40 * a2],
        &v7[40 * v8 - 40],
        &v28);
      goto LABEL_8;
    }
LABEL_24:
    _o__invalid_parameter_noinfo_noreturn(v8);
    __debugbreak();
    JUMPOUT(0x180172495LL);
  }
  v14 = 40 * a2;
LABEL_8:
  a1[1] = (char *)a1[1] + 40;
  return &v7[v14];
}
