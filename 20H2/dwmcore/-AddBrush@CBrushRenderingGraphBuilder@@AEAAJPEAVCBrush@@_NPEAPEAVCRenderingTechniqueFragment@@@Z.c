/*
 * XREFs of ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180057B38
 * Callers:
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180055AD8 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x180056ACC (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180056FBC (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020B0B8 (-AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechn.c)
 * Callees:
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180055AD8 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x180056E30 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180056FBC (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180057C80 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020B0B8 (-AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechn.c)
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020B23C (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
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
  struct CRenderingTechniqueFragment *v19; // [rsp+78h] [rbp+28h]

  v19 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 55LL) )
  {
    v17 = 0LL;
    v18 = 1;
    v9 = CBrushRenderingGraphBuilder::AddEffectBrush(this, a2, a3, &v17);
    if ( v18 )
    {
      v8 = 0;
      v19 = v17;
    }
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, 0x95u, 0LL);
      goto LABEL_27;
    }
  }
  else if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 105LL) )
  {
    v17 = 0LL;
    v18 = 1;
    v9 = CBrushRenderingGraphBuilder::AddMaskBrush(this, a2, a3, &v17);
    if ( v18 )
    {
      v13 = 0;
      v19 = v17;
    }
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v9, 0x9Au, 0LL);
      goto LABEL_27;
    }
  }
  else if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 136LL) )
  {
    v17 = 0LL;
    v18 = 1;
    v9 = CBrushRenderingGraphBuilder::AddRadialGradientBrush(this, a2, a3, &v17);
    if ( v18 )
    {
      v14 = 0;
      v19 = v17;
    }
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v9, 0x9Fu, 0LL);
      goto LABEL_27;
    }
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 111LL) )
    {
      v9 = -2147467263;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147467263, 0xA8u, 0LL);
      goto LABEL_27;
    }
    v17 = 0LL;
    v18 = 1;
    v9 = CBrushRenderingGraphBuilder::AddNineGridBrush(this, a2, a3, &v17);
    if ( v18 )
    {
      v16 = 0;
      v19 = v17;
    }
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v9, 0xA4u, 0LL);
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
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xACu, 0LL);
LABEL_27:
  if ( v19 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v19);
  return (unsigned int)v9;
}
