/*
 * XREFs of ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800BE144
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18003BAB0 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18006B98C (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x1800BE254 (-swap@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverl.c)
 *     ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x1800BE56C (--$swap@$0BA@@-$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAE.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800EBC60 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??1OverlayPlaneInfo@COverlayContext@@QEAA@XZ @ 0x180170268 (--1OverlayPlaneInfo@COverlayContext@@QEAA@XZ.c)
 *     ??$assign@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@0@Z @ 0x18017D9B8 (--$assign@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X.c)
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x18017DC50 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x18017E090 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x18017E230 (--0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z.c)
 *     ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x1801817AC (-erase@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal.c)
 */

unsigned __int64 __fastcall COverlayContext::PushCandidates(
        __int64 a1,
        const struct COverlayContext::OverlayPlaneInfo ***a2)
{
  __int64 v2; // r15
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 result; // rax
  const struct COverlayContext::OverlayPlaneInfo **v9; // rbx
  COverlayContext::OverlayPlaneInfo *v10; // rdi
  __int64 v11; // rax
  void *v12; // rcx
  bool v13; // zf
  __int64 v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, _BYTE *); // rcx
  int v16; // ecx
  const struct COverlayContext::OverlayPlaneInfo **v17; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE *v18; // [rsp+28h] [rbp-D8h] BYREF
  char v19[224]; // [rsp+30h] [rbp-D0h] BYREF
  char v20[224]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v21[16]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE *v22; // [rsp+200h] [rbp+100h] BYREF
  const struct COverlayContext::OverlayPlaneInfo **v23; // [rsp+208h] [rbp+108h]
  __int64 *v24; // [rsp+210h] [rbp+110h]
  _BYTE v25[3584]; // [rsp+218h] [rbp+118h] BYREF
  __int64 v26; // [rsp+1018h] [rbp+F18h] BYREF

  v2 = a1 + 3704;
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((_QWORD *)(a1 + 3704));
  if ( a2 )
  {
    v9 = *a2;
    v22 = v25;
    v23 = (const struct COverlayContext::OverlayPlaneInfo **)v25;
    v24 = &v26;
    while ( v9 != a2[1] )
    {
      if ( *(_QWORD *)*v9 == a1 )
      {
        v10 = (COverlayContext::OverlayPlaneInfo *)COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
                                                     (COverlayContext::OverlayPlaneInfo *)v19,
                                                     *v9);
        v11 = COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v20, v10);
        v17 = v23;
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext::OverlayPlaneInfo>(
          &v22,
          &v18,
          &v17,
          v11);
        COverlayContext::OverlayPlaneInfo::~OverlayPlaneInfo(v10);
        v17 = v9;
        v9 = *(const struct COverlayContext::OverlayPlaneInfo ***)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
                                                                    a2,
                                                                    v21,
                                                                    &v17);
      }
      else
      {
        ++v9;
      }
    }
    v5 = (_QWORD *)(a1 + 96);
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
      v2,
      a1 + 96);
    if ( &v22 != (_BYTE **)(a1 + 96) )
    {
      if ( (unsigned __int8)detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap<16>(
                              a1 + 96,
                              &v22) )
      {
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(&v22);
      }
      else
      {
        v17 = v23;
        v18 = v22;
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::assign<std::move_iterator<detail::basic_iterator<COverlayContext::OverlayPlaneInfo>>,void>(
          a1 + 96,
          &v18,
          &v17);
      }
    }
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(&v22);
    v12 = v22;
    v13 = v22 == v25;
    v22 = 0LL;
    if ( v13 )
      v12 = 0LL;
    operator delete(v12);
  }
  else
  {
    v5 = (_QWORD *)(a1 + 96);
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
      v2,
      a1 + 96);
  }
  if ( *(_BYTE *)(a1 + 11032) && *(_BYTE *)(a1 + 11033) && !*(_BYTE *)(a1 + 11424) )
    *(_BYTE *)(a1 + 11431) = 1;
  *(_BYTE *)(a1 + 11426) = *(_BYTE *)(a1 + 11425);
  v6 = *(_QWORD *)(a1 + 7320);
  if ( (v5[1] - *v5) / 224LL )
  {
    v14 = v6 - *(_QWORD *)(a1 + 7312);
    result = (unsigned __int64)((unsigned __int128)(v14 * (__int128)0x4924924924924925LL) >> 64) >> 63;
    if ( !(v14 / 224) )
    {
      v15 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)a1
                                                      + 8LL
                                                      + *(int *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8LL));
      result = (**v15)(v15, v21);
      v16 = *(_DWORD *)(result + 4);
      *(_DWORD *)(a1 + 8) = v16;
      if ( v16 != 1 )
      {
        *(_DWORD *)(a1 + 12) = 1;
LABEL_27:
        *(_BYTE *)(a1 + 11430) = 1;
      }
    }
  }
  else
  {
    v7 = v6 - *(_QWORD *)(a1 + 7312);
    result = (unsigned __int64)((unsigned __int128)(v7 * (__int128)0x4924924924924925LL) >> 64) >> 63;
    if ( v7 / 224 )
    {
      result = *(unsigned int *)(a1 + 8);
      if ( (_DWORD)result != 1 )
      {
        *(_DWORD *)(a1 + 12) = result;
        goto LABEL_27;
      }
    }
  }
  return result;
}
