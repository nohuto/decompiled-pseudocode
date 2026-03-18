/*
 * XREFs of ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180036AF0
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x180035C34 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180036214 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800EE838 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18025E354 (-AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechn.c)
 * Callees:
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180035818 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180036214 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180037300 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800EE838 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18025E354 (-AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechn.c)
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18025E4A8 (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddBrush(
        CBrushRenderingGraphBuilder *this,
        struct CBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment **a4)
{
  unsigned int v8; // ecx
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  struct CRenderingTechniqueFragment *v17; // [rsp+38h] [rbp-18h] BYREF
  char v18; // [rsp+40h] [rbp-10h]
  struct CRenderingTechniqueFragment *v19; // [rsp+88h] [rbp+38h]

  v19 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 55LL) )
  {
    v17 = 0LL;
    v18 = 1;
    v9 = CBrushRenderingGraphBuilder::AddEffectBrush(this, a2, a3, &v17);
    if ( v18 )
      v19 = v17;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, 0xA1u, 0LL);
      goto LABEL_27;
    }
  }
  else if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 105LL) )
  {
    v17 = 0LL;
    v18 = 1;
    v9 = CBrushRenderingGraphBuilder::AddMaskBrush(this, a2, a3, &v17);
    if ( v18 )
      v19 = v17;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v9, 0xA6u, 0LL);
      goto LABEL_27;
    }
  }
  else if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 135LL) )
  {
    v17 = 0LL;
    v18 = 1;
    v9 = CBrushRenderingGraphBuilder::AddRadialGradientBrush(this, a2, a3, &v17);
    if ( v18 )
      v19 = v17;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v9, 0xABu, 0LL);
      goto LABEL_27;
    }
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 111LL) )
    {
      v9 = -2147467263;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147467263, 0xB4u, 0LL);
      goto LABEL_27;
    }
    v17 = 0LL;
    v18 = 1;
    v9 = CBrushRenderingGraphBuilder::AddNineGridBrush(this, a2, a3, &v17);
    if ( v18 )
      v19 = v17;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v9, 0xB0u, 0LL);
      goto LABEL_27;
    }
  }
  v10 = CBrushRenderingGraphBuilder::CheckFragmentSize(this, v19);
  v9 = v10;
  if ( v10 >= 0 )
  {
    v9 = 0;
    *a4 = v19;
    ++*((_DWORD *)this + 2);
    return (unsigned int)v9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xB8u, 0LL);
LABEL_27:
  if ( v19 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v19);
    operator delete(v19, 0x80uLL);
  }
  return (unsigned int)v9;
}
