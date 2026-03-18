/*
 * XREFs of ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x1801F0CA0
 * Callers:
 *     ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801F0840 (-CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180154254 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x180157CBC (McTemplateU0xx_EventWriteTransfer.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180175554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801850CC (--4-$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801F043C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$__ea_1801F043C.c)
 *     ?PopAll@CSharedCircularQueue@@QEAAXV?$span@E$0?0@gsl@@IPEAI1@Z @ 0x1801F1214 (-PopAll@CSharedCircularQueue@@QEAAXV-$span@E$0-0@gsl@@IPEAI1@Z.c)
 *     ?assign@?$vector@EV?$allocator@E@std@@@std@@QEAAX_KAEBE@Z @ 0x1801F1708 (-assign@-$vector@EV-$allocator@E@std@@@std@@QEAAX_KAEBE@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@2@0@Z @ 0x1801F17A8 (-erase@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 *     McTemplateU0pxtt_EventWriteTransfer @ 0x1801F18F0 (McTemplateU0pxtt_EventWriteTransfer.c)
 *     memcpy_s_1 @ 0x1801F1994 (memcpy_s_1.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::LookupPerFrameData(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned __int64 v5; // rbx
  std::_Ref_count_base *v6; // rcx
  _QWORD *v7; // r14
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // r12
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // edx
  unsigned int v21; // eax
  _DWORD *v22; // r15
  void *v23; // r12
  std::_Ref_count_base *v24; // rax
  std::_Ref_count_base *v25; // rsi
  __int64 **v26; // r9
  __int64 *v27; // rcx
  __int64 *v28; // rdx
  __int64 v29; // rax
  _QWORD **v31; // r15
  _QWORD *v32; // rsi
  _QWORD *v33; // rdx
  __int64 *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned int v38; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v39; // [rsp+38h] [rbp-28h] BYREF
  __int64 v40[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v41[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v43; // [rsp+A0h] [rbp+40h] BYREF
  rsize_t SourceSize; // [rsp+B0h] [rbp+50h]
  unsigned int v45; // [rsp+B8h] [rbp+58h]

  v5 = a2;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0xx_EventWriteTransfer(a1, &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA, a1, a2);
  v6 = (std::_Ref_count_base *)a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v7 = (_QWORD *)(a1 + 208);
  v8 = *(_QWORD **)(a1 + 208);
  if ( v8 && *v8 == v5 )
  {
    std::shared_ptr<ManipulationThreadTelemetryData>::operator=(a3, (_QWORD *)(a1 + 208));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
      McTemplateU0xx_EventWriteTransfer(v9, &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_REUSE, a1, v5);
    return 0LL;
  }
  v10 = *(_QWORD *)(a1 + 176);
  v11 = (__int64 *)(a1 + 224);
  LOBYTE(v43) = 0;
  v12 = *(_DWORD *)(v10 + 8);
  v13 = v12 * *(_DWORD *)(v10 + 12);
  LODWORD(SourceSize) = v12;
  std::vector<unsigned char>::assign(a1 + 224, v13, &v43);
  v15 = *(_QWORD *)(a1 + 224);
  v16 = *(_QWORD *)(a1 + 232) - v15;
  v17 = *(unsigned int *)(a1 + 200);
  if ( v16 < 0 || !v15 && v16 )
  {
    ((void (__fastcall *)(__int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(v14, v15, v17);
    __debugbreak();
  }
  v18 = *(_QWORD *)(a1 + 176);
  v40[1] = *v11;
  v40[0] = v16;
  CSharedCircularQueue::PopAll(v18, (unsigned int)v40, v17, (unsigned int)&v38, a1 + 200);
  v20 = v12 - 24;
  v21 = 0;
  v43 = v12 - 24;
  v45 = 0;
  if ( !v38 )
  {
LABEL_34:
    if ( !*(_QWORD *)(a1 + 192) && !*v7 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
        McTemplateU0q_EventWriteTransfer(v19, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 7LL);
      return 2147942487LL;
    }
    v31 = (_QWORD **)(a1 + 184);
    v32 = *(_QWORD **)(a1 + 184);
    v33 = v32;
    v34 = (__int64 *)v32[1];
    while ( !*((_BYTE *)v34 + 25) )
    {
      if ( v34[4] >= v5 )
      {
        v32 = v34;
        v34 = (__int64 *)*v34;
      }
      else
      {
        v34 = (__int64 *)v34[2];
      }
    }
    if ( v32 == v33 || v5 < v32[4] )
    {
      v32 = *v31;
      v33 = *v31;
    }
    if ( v32 == v33 )
    {
      if ( *v7 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
          McTemplateU0xx_EventWriteTransfer(
            0LL,
            &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_NOT_FOUND_REUSE,
            a1,
            v5);
      }
      else
      {
        std::shared_ptr<ManipulationThreadTelemetryData>::operator=((_QWORD *)(a1 + 208), (_QWORD *)(*v33 + 40LL));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
          McTemplateU0xx_EventWriteTransfer(
            v36,
            &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_USE_FIRST,
            a1,
            v5);
      }
    }
    else
    {
      std::shared_ptr<ManipulationThreadTelemetryData>::operator=((_QWORD *)(a1 + 208), v32 + 5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
        McTemplateU0xx_EventWriteTransfer(
          v35,
          &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_FOUND_ON_NEW,
          a1,
          v5);
    }
    std::shared_ptr<ManipulationThreadTelemetryData>::operator=(a3, (_QWORD *)(a1 + 208));
    if ( (_QWORD *)**v31 != v32 )
    {
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::erase(
        a1 + 184,
        &v43,
        **v31,
        v32);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
        McTemplateU0xx_EventWriteTransfer(v37, &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_CLEANUP, a1, v5);
    }
    return 0LL;
  }
  while ( 1 )
  {
    v22 = (_DWORD *)(*v11 + v12 * v21);
    if ( *(_QWORD *)v22 < v5 || v22[4] > v20 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
      {
        McTemplateU0pxtt_EventWriteTransfer(v22[4] <= v20, v20, a1, *(_QWORD *)v22, *(_QWORD *)v22 >= v5, v22[4] <= v20);
        v20 = v12 - 24;
      }
      goto LABEL_33;
    }
    v23 = DefaultHeap::Alloc(v12);
    v24 = (std::_Ref_count_base *)operator new(0x18uLL);
    v25 = v24;
    if ( v24 )
    {
      *((_DWORD *)v24 + 2) = 1;
      *((_DWORD *)v24 + 3) = 1;
      *(_QWORD *)v24 = &std::_Ref_count_resource<unsigned char *,std::default_delete<unsigned char [0]>>::`vftable';
      *((_QWORD *)v24 + 2) = v23;
    }
    else
    {
      v25 = 0LL;
    }
    v41[0] = v23;
    v41[1] = v25;
    if ( !v23 )
      break;
    memcpy_s_1(v23, (unsigned int)SourceSize, v22, (unsigned int)SourceSize);
    v26 = (__int64 **)(a1 + 184);
    v27 = *(__int64 **)(a1 + 184);
    v28 = v27;
    v29 = v27[1];
    if ( !*(_BYTE *)(v29 + 25) )
    {
      do
      {
        if ( *(_QWORD *)(v29 + 32) >= *(_QWORD *)v22 )
        {
          v27 = (__int64 *)v29;
          v29 = *(_QWORD *)v29;
        }
        else
        {
          v29 = *(_QWORD *)(v29 + 16);
        }
      }
      while ( !*(_BYTE *)(v29 + 25) );
      v28 = *v26;
    }
    if ( v27 == v28 || *(_QWORD *)v22 < (unsigned __int64)v27[4] )
    {
      v39 = v22;
      v27 = (__int64 *)*std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
                          (__int64 *)(a1 + 184),
                          v40,
                          v27,
                          (__int64)v26,
                          &v39);
    }
    std::shared_ptr<ManipulationThreadTelemetryData>::operator=(v27 + 5, v41);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
      McTemplateU0xx_EventWriteTransfer(
        v19,
        &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_NEW_FROM_GUEST,
        a1,
        *(_QWORD *)v22);
    if ( v25 )
      std::_Ref_count_base::_Decref(v25);
    v20 = v43;
    v11 = (__int64 *)(a1 + 224);
    v12 = SourceSize;
LABEL_33:
    v21 = v45 + 1;
    v45 = v21;
    if ( v21 >= v38 )
      goto LABEL_34;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x120,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\synchronoussuperwetink.cpp",
    (const char *)0x8007000ELL);
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
  return 2147942414LL;
}
