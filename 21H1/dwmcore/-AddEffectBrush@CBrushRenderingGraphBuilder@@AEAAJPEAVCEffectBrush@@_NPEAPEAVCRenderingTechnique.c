/*
 * XREFs of ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18009AAF8
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18009C004 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x1800737DC (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18009AA14 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEffectCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x18009AEC4 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEf.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18009B214 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18009C004 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x18009C14C (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18009C738 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x18009CB1C (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18009CDE0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@USubgraphOutput@CBrushRenderingGraphBuilde.c)
 *     ??4?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009E008 (--4-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFragmentInput@CRenderingTechniqueFragment@@0AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x1800C46EC (--$_Destroy_range@V-$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFr.c)
 *     ??$_Destroy_range@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@0AEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x1800C76D0 (--$_Destroy_range@V-$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUS.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C93E4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddEffectBrush(
        CBrushRenderingGraphBuilder *this,
        struct CEffectBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment **a4)
{
  CCompiledEffectTemplate *v4; // rdi
  __int64 *v6; // rbx
  __int64 v7; // r15
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  __int64 v9; // rdi
  const struct Windows::UI::Composition::ICompiledEffect *v10; // rsi
  struct _TP_WORK *v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // r15
  unsigned int v14; // edi
  unsigned int v15; // r13d
  __int64 v16; // r14
  unsigned int v17; // r12d
  int v18; // edi
  LPVOID v19; // rax
  __int64 v20; // rcx
  bool v21; // cl
  __int64 *v22; // r13
  __int64 *v23; // rdi
  unsigned int v24; // eax
  unsigned int v25; // edx
  unsigned int v26; // eax
  __int64 v27; // rsi
  __int64 *v28; // rcx
  int *v29; // rdx
  int v30; // eax
  CRenderingTechniqueFragment *v31; // r8
  _QWORD *v32; // rdx
  CRenderingTechniqueFragment *v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // edi
  _DWORD *v37; // rdi
  _DWORD *v38; // rcx
  struct CRenderingTechniqueFragment *v39; // rax
  __int64 v41; // rax
  struct CBrush *v42; // rdi
  _QWORD *v43; // rdx
  int v44; // eax
  __int64 v45; // rcx
  _DWORD *v46; // rcx
  void *v47; // rcx
  __int64 v48; // rsi
  bool v49; // r8
  struct CRenderingTechniqueFragment *v50; // rcx
  CRenderingTechniqueFragment *v51; // rsi
  void *v52; // rcx
  __int64 v53; // r14
  CRenderingTechniqueFragment *v54; // r8
  _QWORD *v55; // rdx
  void *v56; // rcx
  __int64 v57; // rsi
  int v58; // [rsp+30h] [rbp-D8h]
  int v59; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v60; // [rsp+3Ch] [rbp-CCh]
  __int64 v61; // [rsp+40h] [rbp-C8h]
  CRenderingTechniqueFragment *v62; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v63; // [rsp+50h] [rbp-B8h]
  __int64 *v64; // [rsp+58h] [rbp-B0h] BYREF
  CRenderingTechniqueFragment **v65; // [rsp+60h] [rbp-A8h] BYREF
  struct CRenderingTechniqueFragment *v66; // [rsp+68h] [rbp-A0h] BYREF
  int v67; // [rsp+70h] [rbp-98h]
  unsigned int v68; // [rsp+78h] [rbp-90h]
  int v69; // [rsp+7Ch] [rbp-8Ch]
  int v70; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v71; // [rsp+84h] [rbp-84h]
  const struct Windows::UI::Composition::ICompiledEffect *v72; // [rsp+88h] [rbp-80h]
  struct CRenderingTechniqueFragment *v73; // [rsp+90h] [rbp-78h]
  __int64 v74; // [rsp+98h] [rbp-70h] BYREF
  CRenderingTechniqueFragment *v75; // [rsp+A0h] [rbp-68h]
  __int64 v76; // [rsp+A8h] [rbp-60h] BYREF
  CRenderingTechniqueFragment *v77; // [rsp+B0h] [rbp-58h]
  __int64 v78; // [rsp+B8h] [rbp-50h] BYREF
  CRenderingTechniqueFragment *v79; // [rsp+C0h] [rbp-48h]
  __int128 v80; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v81; // [rsp+D8h] [rbp-30h]
  __int64 v82; // [rsp+E0h] [rbp-28h]
  __int64 v83; // [rsp+E8h] [rbp-20h]
  int v84; // [rsp+F0h] [rbp-18h]
  CRenderingTechniqueFragment *v85; // [rsp+F8h] [rbp-10h] BYREF
  int v86; // [rsp+100h] [rbp-8h]
  CRenderingTechniqueFragment *v87; // [rsp+108h] [rbp+0h] BYREF

  v4 = (CCompiledEffectTemplate *)*((_QWORD *)a2 + 11);
  v6 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)v4 + 9) + 48LL);
  v83 = v7;
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(v4);
  v9 = *((_QWORD *)v4 + 9);
  v10 = CompiledEffectNoRef;
  v72 = CompiledEffectNoRef;
  v11 = *(struct _TP_WORK **)(v9 + 56);
  if ( v11 )
  {
    WaitForThreadpoolWorkCallbacks(v11, 0);
    CloseThreadpoolWork(*(PTP_WORK *)(v9 + 56));
    *(_QWORD *)(v9 + 56) = 0LL;
  }
  v82 = *(_QWORD *)(v9 + 72);
  v73 = (struct CRenderingTechniqueFragment *)*((_QWORD *)a2 + 13);
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  v13 = 0LL;
  v14 = v12;
  v71 = v12;
  v80 = 0LL;
  v15 = v12 - 1;
  v81 = 0LL;
  LODWORD(v61) = v12 - 1;
  if ( v12 != 1 )
  {
    std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Resize_reallocate<std::_Value_init_tag>(&v80, v12 - 1);
    v13 = v81;
  }
  v16 = v80;
  v17 = 0;
  if ( !v14 )
  {
LABEL_29:
    v39 = (struct CRenderingTechniqueFragment *)v6;
    v6 = 0LL;
    v36 = 0;
    *a4 = v39;
    goto LABEL_30;
  }
  v63 = (_DWORD *)v80;
  while ( 1 )
  {
    v69 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v10 + 40LL))(
            v10,
            v17);
    v18 = v69;
    v19 = DefaultHeap::Alloc(0x80uLL);
    if ( v19 )
    {
      v21 = a3 && v17 == v15;
      LOBYTE(v58) = v21;
      v22 = (__int64 *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(v19, v73, v82, v17, v18, v58);
    }
    else
    {
      v22 = 0LL;
    }
    v23 = v6;
    v6 = v22;
    v64 = v22;
    if ( v23 )
    {
      v47 = (void *)v23[14];
      if ( v47 )
        operator delete(v47);
      v48 = v23[4];
      if ( v48 )
      {
        std::_Destroy_range<std::allocator<CRenderingTechniqueFragment::FragmentInput>>(v23[4], v23[5]);
        std::_Deallocate<16,0>(v48, (v23[6] - v48) & 0xFFFFFFFFFFFFFFF0uLL);
        v23[4] = 0LL;
        v23[5] = 0LL;
        v23[6] = 0LL;
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v23);
      operator delete(v23);
      v10 = v72;
    }
    if ( !v22 )
    {
      v36 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024882, 0xD8u, 0LL);
      goto LABEL_30;
    }
    v24 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v10 + 32LL))(
            v10,
            v17);
    v25 = 0;
    v68 = v24;
    v60 = 0;
    if ( v24 )
      break;
LABEL_21:
    if ( v17 == (_DWORD)v61 )
    {
      v37 = v63;
    }
    else
    {
      v34 = CBrushRenderingGraphBuilder::CheckFragmentSize(this, (struct CRenderingTechniqueFragment *)v22);
      v36 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x11Fu, 0LL);
        goto LABEL_30;
      }
      if ( (v69 & 8) != 0 )
      {
        v37 = v63;
        v87 = (CRenderingTechniqueFragment *)v22;
        v86 = -1;
        v6 = 0LL;
        v38 = v63 + 2;
        *v63 = -1;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=(v38, &v87);
        if ( v87 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v87);
      }
      else
      {
        v44 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, &v64, &v70);
        v36 = v44;
        if ( v44 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x124u, 0LL);
          v6 = v64;
          goto LABEL_30;
        }
        v37 = v63;
        v85 = 0LL;
        v84 = v70;
        v46 = v63 + 2;
        *v63 = v70;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=(v46, &v85);
        if ( v85 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v85);
        v6 = v64;
      }
    }
    ++v17;
    v63 = v37 + 4;
    if ( v17 >= v71 )
      goto LABEL_29;
    v15 = v61;
  }
  while ( 1 )
  {
    v26 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, int *))(*(_QWORD *)v10 + 48LL))(
            v10,
            v17,
            v25,
            &v59);
    v27 = v26;
    if ( !(_BYTE)v59 )
      break;
    v28 = v22 + 4;
    v29 = (int *)(v16 + 16LL * v26);
    v30 = *v29;
    if ( *v29 == -1 )
    {
      v31 = (CRenderingTechniqueFragment *)*((_QWORD *)v29 + 1);
      *((_QWORD *)v29 + 1) = 0LL;
      v32 = (_QWORD *)v22[5];
      v77 = v31;
      if ( (_QWORD *)v22[6] == v32 )
      {
        std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
          v28,
          (__int64)v32,
          &v76);
        v33 = v77;
        goto LABEL_18;
      }
      v77 = 0LL;
      *v32 = v76;
      v32[1] = v31;
    }
    else
    {
      v75 = 0LL;
      v43 = (_QWORD *)v22[5];
      LODWORD(v74) = v30;
      BYTE4(v74) = 1;
      if ( (_QWORD *)v22[6] == v43 )
      {
        std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
          v28,
          (__int64)v43,
          &v74);
        v33 = v75;
LABEL_18:
        if ( v33 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v33);
        goto LABEL_20;
      }
      *v43 = v74;
      v43[1] = 0LL;
    }
    v22[5] += 16LL;
LABEL_20:
    v10 = v72;
    v25 = v60 + 1;
    v60 = v25;
    if ( v25 >= v68 )
      goto LABEL_21;
  }
  v41 = *((_QWORD *)a2 + 14);
  v42 = *(struct CBrush **)(v41 + 8 * v27);
  if ( !v42 || !*((_BYTE *)v42 + 72) )
  {
    v65 = *(CRenderingTechniqueFragment ***)(v41 + 8 * v27);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v83 + 48LL))(v83, (unsigned int)v27) )
    {
      v66 = v73;
      v67 = v27;
    }
    else
    {
      v66 = 0LL;
      v67 = 0;
    }
    CBrushRenderingGraphBuilder::AddNamedInputToFragment(
      this,
      (struct CRenderingTechniqueFragment *)v22,
      (const struct CBrushRenderingGraph::GraphInputParameters *)&v65);
    goto LABEL_20;
  }
  v49 = a3
     || (*(unsigned __int8 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v72 + 56LL))(
          v72,
          v17,
          v60,
          0LL,
          0LL);
  v62 = 0LL;
  v66 = 0LL;
  v65 = &v62;
  LOBYTE(v67) = 1;
  v36 = CBrushRenderingGraphBuilder::AddBrush(this, v42, v49, &v66);
  if ( (_BYTE)v67 )
  {
    v50 = v66;
    v51 = *v65;
    *v65 = v66;
    if ( v51 )
    {
      v52 = (void *)*((_QWORD *)v51 + 14);
      if ( v52 )
        operator delete(v52);
      v53 = *((_QWORD *)v51 + 4);
      if ( v53 )
      {
        std::_Destroy_range<std::allocator<CRenderingTechniqueFragment::FragmentInput>>(
          *((_QWORD *)v51 + 4),
          *((_QWORD *)v51 + 5));
        std::_Deallocate<16,0>(v53, (*((_QWORD *)v51 + 6) - v53) & 0xFFFFFFFFFFFFFFF0uLL);
        *((_QWORD *)v51 + 4) = 0LL;
        *((_QWORD *)v51 + 5) = 0LL;
        *((_QWORD *)v51 + 6) = 0LL;
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v51);
      operator delete(v51);
      v16 = v80;
    }
  }
  if ( v36 >= 0 )
  {
    v54 = v62;
    v62 = 0LL;
    v55 = (_QWORD *)v22[5];
    v79 = v54;
    if ( (_QWORD *)v22[6] == v55 )
    {
      std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
        v22 + 4,
        (__int64)v55,
        &v78);
      if ( v79 )
        CRenderingTechniqueFragment::`scalar deleting destructor'(v79);
    }
    else
    {
      v79 = 0LL;
      *v55 = v78;
      v55[1] = v54;
      v22[5] += 16LL;
    }
    v33 = v62;
    goto LABEL_18;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v50, 0LL, 0, v36, 0x103u, 0LL);
  if ( v62 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v62);
LABEL_30:
  if ( v16 )
  {
    std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(v16, *((_QWORD *)&v80 + 1));
    std::_Deallocate<16,0>(v16, (v13 - v16) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  if ( v6 )
  {
    v56 = (void *)v6[14];
    if ( v56 )
      operator delete(v56);
    v57 = v6[4];
    if ( v57 )
    {
      std::_Destroy_range<std::allocator<CRenderingTechniqueFragment::FragmentInput>>(v6[4], v6[5]);
      std::_Deallocate<16,0>(v57, (v6[6] - v57) & 0xFFFFFFFFFFFFFFF0uLL);
      v6[4] = 0LL;
      v6[5] = 0LL;
      v6[6] = 0LL;
    }
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v6);
    operator delete(v6);
  }
  return (unsigned int)v36;
}
