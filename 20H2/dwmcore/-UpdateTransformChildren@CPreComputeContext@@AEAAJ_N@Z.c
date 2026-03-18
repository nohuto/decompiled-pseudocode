/*
 * XREFs of ?UpdateTransformChildren@CPreComputeContext@@AEAAJ_N@Z @ 0x1800CF6B0
 * Callers:
 *     ?CleanTree@CVisualTree@@UEAAJXZ @ 0x18009A3A0 (-CleanTree@CVisualTree@@UEAAJXZ.c)
 * Callees:
 *     ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z @ 0x18001C25C (-DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z @ 0x1800C3598 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z.c)
 */

__int64 __fastcall CPreComputeContext::UpdateTransformChildren(const struct CVisualTree **this, bool a2)
{
  struct CComposition *v2; // r10
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned int v7; // ebp
  __int64 v8; // rsi
  struct CComposition *v9; // rdx
  struct CVisual *v10; // r11
  int v12; // eax
  __int64 v13; // rcx

  v2 = g_pComposition;
  v3 = 0;
  v4 = 0;
  v7 = *((_DWORD *)g_pComposition + 222);
  if ( v7 )
  {
    v8 = 0LL;
    do
    {
      if ( CVisualTree::_IsInTree(
             (const struct CVisual **)*this,
             *(const struct CVisual **)(v8 + *((_QWORD *)v2 + 108)),
             1) )
      {
        v12 = CPreComputeHelper::DirtyIfChanged((CPreComputeHelper *)(this + 135), v9, *this, v10, a2);
        v3 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x4F5u, 0LL);
          return v3;
        }
        v2 = g_pComposition;
      }
      ++v4;
      v8 += 8LL;
    }
    while ( v4 < v7 );
  }
  return v3;
}
