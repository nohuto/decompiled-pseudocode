/*
 * XREFs of ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x18001CB7C
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180068C54 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ?erase@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x180013398 (-erase@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?UpdateAlphaMode@COverlayContext@@AEAAXXZ @ 0x18001CD08 (-UpdateAlphaMode@COverlayContext@@AEAAXXZ.c)
 *     ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x18001CFE4 (-swap@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverl.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800B9BE8 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::TransferCandidatesToPlaneAssignments(COverlayContext *this)
{
  char *v1; // r15
  __int64 *v3; // rsi
  __int64 v5; // rbx
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF
  char v15; // [rsp+80h] [rbp+18h] BYREF

  v1 = (char *)this + 7304;
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 7304);
  v3 = (__int64 *)((char *)this + 88);
  if ( *((_QWORD *)this + 12) == *((_QWORD *)this + 11) )
    goto LABEL_2;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 184LL))(*(_QWORD *)this);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, &v13);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
  v7 = 0;
  while ( 1 )
  {
    v8 = *v3;
    v9 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 5);
    if ( v7 >= (unsigned int)v9 )
      break;
    v10 = 224LL * v7;
    if ( *(_BYTE *)(v10 + v8 + 180) )
      goto LABEL_8;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)(v10 + v8 + 16) + 256LL))(
           *(_QWORD *)(v10 + v8 + 16),
           *(_QWORD *)(v10 + v8 + 24),
           v13,
           v6) < 0 )
    {
      v14 = v10 + *v3;
      detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
        (__int64)this + 88,
        (__int64)&v15,
        &v14);
    }
    else
    {
      v12 = *(_QWORD *)(v10 + v8 + 16);
      *(_WORD *)(v10 + v8 + 180) = 257;
      LOBYTE(v11) = 1;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 400LL))(v12, 2LL, v11);
      *((_BYTE *)this + 11310) = 1;
LABEL_8:
      ++v7;
    }
  }
  if ( v9 )
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
      v1,
      (char *)this + 88);
  if ( *((_BYTE *)this + 11024) && !*((_BYTE *)this + 11296) )
    *((_BYTE *)this + 11310) = 1;
LABEL_2:
  COverlayContext::UpdateAlphaMode(this);
  return 0LL;
}
