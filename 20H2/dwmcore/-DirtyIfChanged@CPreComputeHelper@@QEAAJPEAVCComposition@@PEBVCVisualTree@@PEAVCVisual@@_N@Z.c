/*
 * XREFs of ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z @ 0x18001C25C
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180097FF0 (-PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?UpdateTransformChildren@CPreComputeContext@@AEAAJ_N@Z @ 0x1800CF6B0 (-UpdateTransformChildren@CPreComputeContext@@AEAAJ_N@Z.c)
 *     ?UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJ_N@Z @ 0x1800D49F4 (-UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800B6AF0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPreComputeHelper::DirtyIfChanged(
        CPreComputeHelper *this,
        struct CComposition *a2,
        const struct CVisualTree *a3,
        struct CVisual *a4,
        bool a5)
{
  struct CComposition *v5; // r15
  unsigned int v7; // ebx
  unsigned __int64 v10; // rsi
  struct CTreeData *TreeData; // rax
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // ecx

  v5 = g_pComposition;
  v7 = 0;
  *((_DWORD *)this + 2) = 0;
  v10 = *((_QWORD *)v5 + 44);
  TreeData = CVisual::FindTreeData(a4, a3);
  if ( !TreeData || *((_QWORD *)TreeData + 15) < v10 )
  {
    v12 = (**(__int64 (__fastcall ***)(CPreComputeHelper *, struct CComposition *, const struct CVisualTree *, struct CVisual *, unsigned __int64))this)(
            this,
            v5,
            a3,
            a4,
            v10);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1Cu, 0LL);
    }
    else
    {
      LOBYTE(v14) = a5;
      v15 = (*(__int64 (__fastcall **)(CPreComputeHelper *, const struct CVisualTree *, unsigned __int64, __int64))(*(_QWORD *)this + 8LL))(
              this,
              a3,
              v10,
              v14);
      v7 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1Eu, 0LL);
    }
  }
  return v7;
}
