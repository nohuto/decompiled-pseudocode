/*
 * XREFs of ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x1800327C0
 * Callers:
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x180031C28 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x180032270 (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x180032458 (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 * Callees:
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x180032720 (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 *     ??$destruct_range@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@detail@@YAXPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@0@Z @ 0x1800328B8 (--$destruct_range@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@de.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@std@@V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@0@0V12@@Z @ 0x1802B2EE0 (--$move_backward@V-$move_iterator@PEAV-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffec.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@std@@V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@0@0V12@@Z @ 0x1802B2FA4 (--$uninitialized_move@V-$move_iterator@PEAV-$function@$$A6AJPEAVCGraphRenderingContext@CExternal.c)
 */

__int64 __fastcall detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
        _QWORD *i,
        __int64 a2)
{
  __int64 v2; // rsi
  _QWORD *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r15
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdi
  void *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  void *v22; // rbx
  void *v23; // rcx
  bool v24; // zf
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  __int128 v27; // [rsp+20h] [rbp-40h] BYREF
  __int64 v28; // [rsp+30h] [rbp-30h]
  __int128 v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h]
  __int64 v31; // [rsp+A0h] [rbp+40h]
  __int64 v32; // [rsp+B0h] [rbp+50h]
  _QWORD *v33; // [rsp+B8h] [rbp+58h]

  v2 = i[1];
  v4 = i;
  v5 = i[2];
  if ( !((v5 - v2) >> 6) )
  {
    v16 = (v2 - *i) >> 6;
    v17 = v16 + 1;
    if ( v16 + 1 < v16 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v18 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)i, (v5 - *i) >> 6, v17);
    v19 = operator new(saturated_mul(v18, 0x40uLL));
    v20 = v4[1];
    v21 = *v4;
    *(_QWORD *)&v27 = v19;
    *((_QWORD *)&v27 + 1) = v16;
    v22 = v19;
    v28 = 0LL;
    v29 = v27;
    v30 = 0LL;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::uninitialized_move<std::move_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>,stdext::checked_array_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>>)(
      &v27,
      v21,
      v20,
      &v29);
    detail::destruct_range<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>>(*v4, v4[1]);
    v23 = (void *)*v4;
    v24 = *v4 == (_QWORD)(v4 + 3);
    *v4 = v22;
    if ( v24 )
      v23 = 0LL;
    DefaultHeap::Free(v23);
    v2 = *v4 + (v16 << 6);
    v25 = *v4 + (v18 << 6);
    v4[1] = v2;
    v4[2] = v25;
  }
  v6 = *v4;
  v7 = v2 - *v4;
  *((_QWORD *)&v27 + 1) = 1LL;
  v8 = v7 >> 6;
  v9 = v8 - a2;
  v10 = v6 + (v8 << 6);
  *(_QWORD *)&v27 = v10;
  if ( !v10 )
    goto LABEL_25;
  v28 = 1LL;
  v11 = v8 - a2;
  if ( v9 > 1 )
    v11 = 1LL;
  v29 = v27;
  v12 = v11 << 6;
  i = (_QWORD *)(v2 - v12);
  v30 = 1LL;
  v32 = v2 - v12;
  if ( v2 != v2 - v12 )
  {
    v26 = v30;
    for ( i = (_QWORD *)(v10 + 64); ; i = v33 )
    {
      v2 -= 64LL;
      if ( !(_QWORD)v29 )
        break;
      if ( !v26 )
        break;
      i -= 8;
      v31 = v26 - 1;
      v33 = i;
      if ( (unsigned __int64)(v26 - 1) >= *((_QWORD *)&v29 + 1) )
        break;
      i[7] = 0LL;
      std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move((__int64)i, v2);
      if ( v2 == v32 )
        goto LABEL_6;
      v26 = v31;
    }
    goto LABEL_25;
  }
LABEL_6:
  if ( v9 <= 1 )
    goto LABEL_7;
  *(_QWORD *)&v29 = v6;
  *((_QWORD *)&v29 + 1) = v8;
  if ( v8 && (!v6 || v8 < 0) )
  {
LABEL_25:
    _o__invalid_parameter_noinfo_noreturn(i);
    __debugbreak();
    JUMPOUT(0x18012A21ELL);
  }
  v30 = v8;
  v27 = v29;
  v28 = v8;
  ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>,stdext::checked_array_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>>)(
    &v29,
    v6 + (a2 << 6),
    (v8 << 6) + v6 - 64,
    &v27);
LABEL_7:
  v13 = v6 + ((a2 + 1) << 6);
  if ( v10 < v13 )
    v13 = v6 + (v8 << 6);
  v14 = a2 << 6;
  detail::destruct_range<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>>(v14 + v6, v13);
  v4[1] += 64LL;
  return v14 + v6;
}
