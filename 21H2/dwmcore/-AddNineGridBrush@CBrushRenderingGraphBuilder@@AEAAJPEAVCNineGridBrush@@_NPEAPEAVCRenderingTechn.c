/*
 * XREFs of ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18025E354
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180036AF0 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180035818 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ?FindExistingNamedInput@CBrushRenderingGraphBuilder@@AEBA_NAEBUGraphInputParameters@CBrushRenderingGraph@@PEAI@Z @ 0x1800369AC (-FindExistingNamedInput@CBrushRenderingGraphBuilder@@AEBA_NAEBUGraphInputParameters@CBrushRender.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180036AF0 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddNineGridBrush(
        CBrushRenderingGraphBuilder *this,
        struct CNineGridBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment **a4)
{
  struct CBrush *v4; // r14
  __int64 v8; // rcx
  int v9; // ebx
  CRenderingTechniqueFragment *v10; // rdi
  __int64 v11; // rcx
  CRenderingTechniqueFragment *v12; // rdi
  CRenderingTechniqueFragment *v14; // [rsp+30h] [rbp-20h] BYREF
  CRenderingTechniqueFragment **v15; // [rsp+38h] [rbp-18h] BYREF
  struct CRenderingTechniqueFragment *v16; // [rsp+40h] [rbp-10h] BYREF
  int v17; // [rsp+48h] [rbp-8h]
  unsigned int v18; // [rsp+88h] [rbp+38h] BYREF

  v4 = (struct CBrush *)*((_QWORD *)a2 + 11);
  v14 = 0LL;
  v16 = 0LL;
  v15 = &v14;
  LOBYTE(v17) = 1;
  v9 = CBrushRenderingGraphBuilder::AddBrush(this, v4, a3, &v16);
  if ( (_BYTE)v17 )
  {
    v10 = *v15;
    *v15 = v16;
    if ( v10 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v10);
      operator delete(v10);
    }
  }
  if ( v9 >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)v4 + 56LL))(v4, 135LL) )
    {
      v17 = 0;
      v15 = (CRenderingTechniqueFragment **)v4;
      v16 = *(struct CRenderingTechniqueFragment **)v14;
      if ( !CBrushRenderingGraphBuilder::FindExistingNamedInput(
              this,
              (const struct CBrushRenderingGraph::GraphInputParameters *)&v15,
              &v18) )
      {
        v9 = -2147418113;
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, -2147418113, 0x1D6u);
        goto LABEL_11;
      }
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 24LL * v18) = a2;
    }
    *a4 = v14;
    return (unsigned int)v9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v9, 0x1C7u);
LABEL_11:
  v12 = v14;
  if ( v14 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v14);
    operator delete(v12);
  }
  return (unsigned int)v9;
}
