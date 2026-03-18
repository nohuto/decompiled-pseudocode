/*
 * XREFs of ?reserve_region@?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@_K0@Z @ 0x1800811C4
 * Callers:
 *     ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x180080F7C (-CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@std@@V?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@0@0V12@@Z @ 0x18019215C (--$move@V-$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@std@@V-$checked_array_iterator.c)
 *     ??$move_backward@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@std@@V?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@0@0V12@@Z @ 0x18019A2D8 (--$move_backward@V-$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@std@@V-$checked_array.c)
 */

char *__fastcall detail::vector_facade<tagCOMPOSITION_TARGET_ID_AND_STATS,detail::buffer_impl<tagCOMPOSITION_TARGET_ID_AND_STATS,4,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2)
{
  __int64 v2; // rsi
  _BYTE *v5; // rdx
  __int64 v6; // rcx
  char *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
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
  __int64 v25; // rax
  unsigned __int64 v26; // r8
  __int128 v27; // [rsp+20h] [rbp-40h] BYREF
  __int64 v28; // [rsp+30h] [rbp-30h]
  __int128 v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h]

  v2 = (__int64)a1[1];
  v5 = a1[2];
  v6 = 0x4EC4EC4EC4EC4EC5LL;
  if ( !(0x4EC4EC4EC4EC4EC5LL * ((__int64)&v5[-v2] >> 3)) )
  {
    v16 = 0x4EC4EC4EC4EC4EC5LL * ((v2 - (__int64)*a1) >> 3);
    v17 = v16 + 1;
    if ( v16 + 1 < v16 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v18 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)v6,
            v6 * ((v5 - (_BYTE *)*a1) >> 3),
            v17);
    v19 = operator new(saturated_mul(v18, 0x68uLL));
    v20 = a1[1];
    v21 = *a1;
    *(_QWORD *)&v27 = v19;
    v22 = v19;
    *((_QWORD *)&v27 + 1) = v16;
    v28 = 0LL;
    v29 = v27;
    v30 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::move<std::move_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>,stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>>)(
      &v27,
      v21,
      v20,
      &v29);
    v23 = *a1;
    v24 = *a1 == a1 + 3;
    *a1 = v22;
    if ( v24 )
      v23 = 0LL;
    DefaultHeap::Free(v23);
    v2 = (__int64)*a1 + 104 * v16;
    a1[1] = (void *)v2;
    a1[2] = (char *)*a1 + 104 * v18;
  }
  v7 = (char *)*a1;
  v8 = v2 - (_QWORD)*a1;
  *((_QWORD *)&v27 + 1) = 1LL;
  v9 = 0x4EC4EC4EC4EC4EC5LL * (v8 >> 3);
  v10 = v9 - a2;
  *(_QWORD *)&v27 = &v7[104 * v9];
  if ( !(_QWORD)v27 )
    goto LABEL_24;
  v28 = 1LL;
  v11 = v9 - a2;
  if ( v10 > 1 )
    v11 = 1LL;
  v29 = v27;
  v12 = 104 * v11;
  v30 = 1LL;
  v13 = v2 - v12;
  if ( v2 != v2 - v12 )
  {
    v25 = (__int64)&v7[104 * v9 + 104];
    v26 = v30;
    do
    {
      v2 -= 104LL;
      if ( !(_QWORD)v29 )
        goto LABEL_24;
      if ( !v26 )
        goto LABEL_24;
      --v26;
      v25 -= 104LL;
      if ( v26 >= *((_QWORD *)&v29 + 1) )
        goto LABEL_24;
      *(_OWORD *)v25 = *(_OWORD *)v2;
      *(_OWORD *)(v25 + 16) = *(_OWORD *)(v2 + 16);
      *(_OWORD *)(v25 + 32) = *(_OWORD *)(v2 + 32);
      *(_OWORD *)(v25 + 48) = *(_OWORD *)(v2 + 48);
      *(_OWORD *)(v25 + 64) = *(_OWORD *)(v2 + 64);
      *(_OWORD *)(v25 + 80) = *(_OWORD *)(v2 + 80);
      *(_QWORD *)(v25 + 96) = *(_QWORD *)(v2 + 96);
    }
    while ( v2 != v13 );
  }
  if ( v10 > 1 )
  {
    *(_QWORD *)&v29 = v7;
    *((_QWORD *)&v29 + 1) = v9;
    if ( !v9 || v7 && v9 >= 0 )
    {
      v30 = v9;
      v14 = 104 * a2;
      v27 = v29;
      v28 = v9;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>,stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>>)(
        &v29,
        &v7[104 * a2],
        &v7[104 * v9 - 104],
        &v27);
      goto LABEL_8;
    }
LABEL_24:
    _o__invalid_parameter_noinfo_noreturn(v9);
    __debugbreak();
    JUMPOUT(0x180142D8ELL);
  }
  v14 = 104 * a2;
LABEL_8:
  a1[1] = (char *)a1[1] + 104;
  return &v7[v14];
}
