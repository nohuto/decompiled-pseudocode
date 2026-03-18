/*
 * XREFs of ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18009D1C4
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18009C004 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x1800737DC (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18009AA14 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18009C004 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x18009CB1C (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ??4?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009E008 (--4-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddMaskBrush(
        CBrushRenderingGraphBuilder *this,
        struct CMaskBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment **a4)
{
  struct CBrush *v4; // r15
  int v5; // edi
  struct CBrush *v6; // rsi
  __int64 *v7; // rbx
  CRenderingTechniqueFragment *v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rcx
  CRenderingTechniqueFragment *v14; // rax
  _QWORD *v15; // rdx
  struct CRenderingTechniqueFragment *v16; // rax
  CRenderingTechniqueFragment *v18; // rcx
  CRenderingTechniqueFragment *v19; // r8
  _QWORD *v20; // rdx
  CRenderingTechniqueFragment *v21; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v22[2]; // [rsp+38h] [rbp-18h] BYREF
  CRenderingTechniqueFragment *v23; // [rsp+40h] [rbp-10h] BYREF
  int v24; // [rsp+48h] [rbp-8h]
  CRenderingTechniqueFragment *v25; // [rsp+88h] [rbp+38h] BYREF

  v4 = (struct CBrush *)*((_QWORD *)a2 + 11);
  v5 = 0;
  v6 = (struct CBrush *)*((_QWORD *)a2 + 10);
  v7 = 0LL;
  v21 = 0LL;
  v25 = 0LL;
  if ( *((_BYTE *)v4 + 72) )
  {
    v23 = 0LL;
    *(_QWORD *)v22 = &v21;
    LOBYTE(v24) = 1;
    v5 = CBrushRenderingGraphBuilder::AddBrush(this, v4, a3, &v23);
    if ( (_BYTE)v24 )
    {
      v11 = **(CRenderingTechniqueFragment ***)v22;
      **(_QWORD **)v22 = v23;
      if ( v11 )
        CRenderingTechniqueFragment::`scalar deleting destructor'(v11);
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, v5, 0x14Bu, 0LL);
      goto LABEL_18;
    }
    v5 = 0;
  }
  if ( !v6 )
  {
    std::unique_ptr<CRenderingTechniqueFragment>::operator=(&v25, &v21);
    v7 = (__int64 *)v25;
    goto LABEL_17;
  }
  v12 = (__int64 *)DefaultHeap::Alloc(0x80uLL);
  v7 = v12;
  if ( v12 )
  {
    v12[2] = 0LL;
    v12[3] = 0LL;
    *v12 = 0LL;
    v12[4] = 0LL;
    v12[5] = 0LL;
    v12[6] = 0LL;
    v12[1] = 0LL;
    v12[7] = 0LL;
    v12[8] = 0LL;
    v12[9] = 0LL;
    v12[10] = 0LL;
    v12[14] = 0LL;
    *((_BYTE *)v12 + 120) = a3;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v14 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      v15 = (_QWORD *)v7[5];
      v23 = v14;
      if ( (_QWORD *)v7[6] == v15 )
      {
        std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
          v7 + 4,
          (__int64)v15,
          v22);
        if ( v23 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v23);
      }
      else
      {
        *v15 = *(_QWORD *)v22;
        v15[1] = v14;
        v7[5] += 16LL;
      }
    }
    else
    {
      *(_QWORD *)v22 = v4;
      v23 = 0LL;
      v24 = 0;
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        this,
        (struct CRenderingTechniqueFragment *)v7,
        (const struct CBrushRenderingGraph::GraphInputParameters *)v22);
    }
    v23 = 0LL;
    if ( !*((_BYTE *)v6 + 72) )
    {
      *(_QWORD *)v22 = v6;
      v24 = 0;
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        this,
        (struct CRenderingTechniqueFragment *)v7,
        (const struct CBrushRenderingGraph::GraphInputParameters *)v22);
LABEL_17:
      v16 = (struct CRenderingTechniqueFragment *)v7;
      v7 = 0LL;
      *a4 = v16;
      goto LABEL_18;
    }
    v25 = 0LL;
    *(_QWORD *)v22 = &v25;
    LOBYTE(v24) = 1;
    v5 = CBrushRenderingGraphBuilder::AddBrush(this, v6, a3, &v23);
    if ( (_BYTE)v24 )
    {
      v18 = **(CRenderingTechniqueFragment ***)v22;
      **(_QWORD **)v22 = v23;
      if ( v18 )
        CRenderingTechniqueFragment::`scalar deleting destructor'(v18);
    }
    if ( v5 >= 0 )
    {
      v19 = v25;
      v5 = 0;
      v23 = v25;
      v25 = 0LL;
      v20 = (_QWORD *)v7[5];
      if ( (_QWORD *)v7[6] == v20 )
      {
        std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
          v7 + 4,
          (__int64)v20,
          v22);
        if ( v23 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v23);
      }
      else
      {
        *v20 = *(_QWORD *)v22;
        v20[1] = v19;
        v7[5] += 16LL;
      }
      if ( v25 )
        CRenderingTechniqueFragment::`scalar deleting destructor'(v25);
      goto LABEL_17;
    }
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v18, 0LL, 0, v5, 0x165u, 0LL);
    if ( v25 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v25);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x151u, 0LL);
  }
LABEL_18:
  if ( v21 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v21);
  if ( v7 )
    CRenderingTechniqueFragment::`scalar deleting destructor'((CRenderingTechniqueFragment *)v7);
  return (unsigned int)v5;
}
