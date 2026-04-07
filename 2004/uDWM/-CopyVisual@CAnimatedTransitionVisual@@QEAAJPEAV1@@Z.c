/*
 * XREFs of ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x180009120
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x180036C48 (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000FA58 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001D170 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800272F4 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800289B0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x18003D1C0 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::CopyVisual(
        CAnimatedTransitionVisual *this,
        struct CAnimatedTransitionVisual *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // esi
  int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // eax
  bool v15; // zf
  float v16; // xmm1_4

  v4 = CAnimatedTransitionVisual::EnsureResources(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x27Fu);
  }
  else
  {
    v6 = *((_DWORD *)a2 + 214) - *((_DWORD *)a2 + 212);
    v7 = *((_DWORD *)a2 + 215) - *((_DWORD *)a2 + 213);
    v8 = RoundToNearestInt((float)*((int *)a2 + 212) + *((float *)a2 + 186));
    *((_DWORD *)this + 212) = v8;
    v9 = v8;
    v10 = RoundToNearestInt((float)*((int *)a2 + 213) + *((float *)a2 + 187));
    v11 = 0;
    *((_DWORD *)this + 213) = v10;
    v12 = v10;
    if ( v6 >= 0 )
      v11 = v6;
    *((_DWORD *)this + 214) = RoundToNearestInt((float)((float)v11 * *((float *)this + 189)) + (float)v9);
    v13 = 0;
    if ( v7 >= 0 )
      v13 = v7;
    v14 = RoundToNearestInt((float)((float)v13 * *((float *)this + 190)) + (float)v12);
    v15 = *((_BYTE *)this + 961) == 0;
    *((_DWORD *)this + 215) = v14;
    *((float *)this + 228) = *((float *)a2 + 228) + *((float *)a2 + 188);
    if ( v15 )
    {
      v16 = *((float *)a2 + 184);
      *((float *)this + 230) = v16;
    }
    else
    {
      v16 = *((float *)this + 230);
    }
    v15 = *((_BYTE *)this + 968) == 0;
    *((float *)this + 184) = v16;
    *((_OWORD *)this + 51) = *((_OWORD *)a2 + 51);
    *((_BYTE *)this + 978) = *((_BYTE *)a2 + 978);
    *((_BYTE *)this + 979) = *((_BYTE *)a2 + 979);
    *((_OWORD *)this + 55) = *((_OWORD *)a2 + 51);
    if ( v15 )
    {
      CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), v16);
      CVisual::UpdateOpacity((CAnimatedTransitionVisual *)((char *)this + 8));
    }
    *((_BYTE *)this + 960) = 1;
    v5 = 0;
    *((_DWORD *)this + 243) = *((_DWORD *)a2 + 243);
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 0x2000u);
  }
  return v5;
}
