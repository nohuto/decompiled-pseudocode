/*
 * XREFs of ?UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJ_N@Z @ 0x1800D5044
 * Callers:
 *     ?CleanTree@CVisualTree@@UEAAJXZ @ 0x18007B490 (-CleanTree@CVisualTree@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x180004FDC (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x1800066C0 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z @ 0x18001C46C (-DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z @ 0x1800C3914 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z.c)
 */

__int64 __fastcall CPreComputeContext::UpdateProjectedShadowCasters(const struct CVisualTree **this, char a2)
{
  unsigned int v4; // edi
  const struct CVisual **v5; // rbx
  const struct CVisual **v6; // r12
  const struct CVisual *v8; // rsi
  struct CComposition *v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int64 ProjectedShadowCasters; // rax
  unsigned __int64 v13; // r10
  __int64 v14; // rbp
  const struct CVisual ***v15; // r14
  unsigned __int64 v16; // rsi

  v4 = 0;
  v5 = (const struct CVisual **)*((_QWORD *)g_pComposition + 116);
  v6 = (const struct CVisual **)*((_QWORD *)g_pComposition + 117);
  while ( v5 != v6 )
  {
    v8 = *v5;
    if ( CVisualTree::_IsInTree((const struct CVisual **)*this, *v5, 1) )
    {
      v10 = CPreComputeHelper::DirtyIfChanged((CPreComputeHelper *)(this + 135), v9, *this, v8, a2);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x52Du, 0LL);
        return v4;
      }
      if ( (**((_DWORD **)v8 + 28) & 0x40000) != 0 )
      {
        ProjectedShadowCasters = CVisual::GetProjectedShadowCasters((__int64)v8);
        v14 = (unsigned int)v13;
        v15 = *(const struct CVisual ****)ProjectedShadowCasters;
        v16 = (unsigned __int64)(*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters + 7LL) >> 3;
        if ( *(_QWORD *)ProjectedShadowCasters > *(_QWORD *)(ProjectedShadowCasters + 8) )
          v16 = v13;
        if ( v16 )
        {
          do
          {
            CProjectedShadowCaster::UpdateVisualProperty(*v15, *this, a2);
            ++v14;
            ++v15;
          }
          while ( v14 != v16 );
        }
      }
    }
    ++v5;
  }
  return v4;
}
