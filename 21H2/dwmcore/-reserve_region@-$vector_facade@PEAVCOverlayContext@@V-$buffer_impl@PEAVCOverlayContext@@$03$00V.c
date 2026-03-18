/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x1800CB6E8
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18008E77C (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?EnsureClientInfo@CDesktopTree@@MEAAXXZ @ 0x1800CB3D0 (-EnsureClientInfo@CDesktopTree@@MEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@PEAVCOverlayContext@@@detail@@V?$checked_array_iterator@PEAPEAVCOverlayContext@@@stdext@@@detail@@YAXV?$basic_iterator@PEAVCOverlayContext@@@0@0V?$checked_array_iterator@PEAPEAVCOverlayContext@@@stdext@@@Z @ 0x18008BA7C (--$move_backward_uninitialized@V-$basic_iterator@PEAVCOverlayContext@@@detail@@V-$checked_array_.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180111B30 (--$uninitialized_move@V-$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180191CC0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

char *__fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  _BYTE *v6; // rdx
  __int64 v7; // rcx
  char *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned __int64 v11; // r15
  char *v12; // r13
  __int64 v13; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdi
  LPVOID v18; // rax
  void *v19; // r8
  void *v20; // rdx
  LPVOID v21; // rbx
  void *v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  __int128 v25; // [rsp+20h] [rbp-40h] BYREF
  __int64 v26; // [rsp+30h] [rbp-30h]
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]
  __int64 v29; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v30; // [rsp+B0h] [rbp+50h] BYREF

  v30 = a3;
  v3 = (__int64)a1[1];
  v6 = a1[2];
  v7 = 1LL;
  if ( !((__int64)&v6[-v3] >> 3) )
  {
    v15 = (v3 - (__int64)*a1) >> 3;
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v17 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)v7,
            (v6 - (_BYTE *)*a1) >> 3,
            v16);
    v18 = operator new(saturated_mul(v17, 8uLL));
    v19 = a1[1];
    v20 = *a1;
    *(_QWORD *)&v25 = v18;
    v21 = v18;
    *((_QWORD *)&v25 + 1) = v15;
    v26 = 0LL;
    v27 = v25;
    v28 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>)(
      &v25,
      v20,
      v19,
      &v27);
    v22 = *a1;
    v23 = *a1 == a1 + 3;
    *a1 = v21;
    if ( v23 )
      v22 = 0LL;
    DefaultHeap::Free(v22);
    v7 = 1LL;
    v3 = (__int64)*a1 + 8 * v15;
    v24 = (__int64)*a1 + 8 * v17;
    a1[1] = (void *)v3;
    a1[2] = (void *)v24;
  }
  v8 = (char *)*a1;
  v9 = v3 - (_QWORD)*a1;
  *((_QWORD *)&v25 + 1) = 1LL;
  v10 = v9 >> 3;
  v11 = v10 - a2;
  v12 = &v8[8 * v10];
  *(_QWORD *)&v25 = v12;
  if ( !v12 )
    goto LABEL_16;
  v26 = 1LL;
  v30 = v3;
  v13 = v10 - a2;
  v27 = v25;
  if ( v11 > 1 )
    v13 = 1LL;
  v28 = 1LL;
  v29 = v3 - 8 * v13;
  detail::move_backward_uninitialized<detail::basic_iterator<COverlayContext *>,stdext::checked_array_iterator<COverlayContext * *>>(
    (unsigned __int64)&v29,
    &v30,
    (__int64 *)&v27);
  if ( v11 > 1 )
  {
    *(_QWORD *)&v25 = v8;
    *((_QWORD *)&v25 + 1) = v10;
    if ( !v10 || v8 && v10 >= 0 )
    {
      v26 = v10;
      v27 = v25;
      v28 = v10;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
        &v25,
        &v8[8 * a2],
        v12 - 8,
        &v27);
      goto LABEL_6;
    }
LABEL_16:
    _o__invalid_parameter_noinfo_noreturn(v7);
    __debugbreak();
    JUMPOUT(0x180168511LL);
  }
LABEL_6:
  a1[1] = (char *)a1[1] + 8;
  return &v8[8 * a2];
}
