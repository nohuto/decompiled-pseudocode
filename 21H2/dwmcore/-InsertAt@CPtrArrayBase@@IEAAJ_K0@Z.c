/*
 * XREFs of ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x180046F60
 * Callers:
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x180015218 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x1800171F4 (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x180045D18 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800487B4 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x180062144 (-SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x1801F8054 (-RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@@Z @ 0x18020827C (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMi.c)
 *     ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x180234C3C (-Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCP.c)
 *     ?SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1802446E8 (-SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

__int64 __fastcall CPtrArrayBase::InsertAt(CPtrArrayBase *this, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  CPtrArrayBase *v4; // r13
  unsigned __int64 v7; // rdi
  __int64 v8; // rbp
  _QWORD *v9; // rbp
  unsigned int v10; // ebx
  unsigned __int64 v12; // r14
  HANDLE ProcessHeap; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  double v16; // xmm0_8
  double v17; // xmm0_8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r13
  int v20; // eax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rbp
  int v23; // r9d
  unsigned int v24; // [rsp+20h] [rbp-48h]
  CPtrArrayBase *v25; // [rsp+70h] [rbp+8h]
  void *v26; // [rsp+80h] [rbp+18h] BYREF

  v25 = this;
  v3 = *(_QWORD *)this;
  v4 = this;
  LODWORD(this) = *(_QWORD *)this & 2;
  if ( (_DWORD)this )
    v7 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v7 = v3 & 1;
  v8 = v3;
  if ( !(_DWORD)this )
    v8 = v3;
  v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( a3 > v7 )
  {
    v24 = 67;
LABEL_33:
    v23 = -2147024809;
    v10 = -2147024809;
    goto LABEL_35;
  }
  v10 = 0;
  if ( (a2 & 3) != 0 )
  {
    v24 = 75;
    goto LABEL_33;
  }
  if ( !v7 )
  {
    *(_QWORD *)v4 = a2 | 1;
    return v10;
  }
  if ( v7 == 1 )
  {
    v12 = v3 & 0xFFFFFFFFFFFFFFFCuLL;
    ProcessHeap = GetProcessHeap();
    v14 = (unsigned __int64)HeapAlloc(ProcessHeap, 0, 0x30uLL);
    if ( v14 )
    {
      *(_QWORD *)v14 = 2LL;
      *(_QWORD *)(v14 + 8) = 4LL;
      *(_QWORD *)(v14 + 8 * (3 - a3)) = v12;
      *(_QWORD *)(v14 + 8 * a3 + 16) = a2;
      *(_QWORD *)v4 = v14 | 2;
      return v10;
    }
    v10 = -2147024882;
    v23 = -2147024882;
    v24 = 97;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v23, v24, 0LL);
    return v10;
  }
  v15 = v9[1];
  if ( v7 == v15 )
  {
    v26 = 0LL;
    if ( v15 < 0 )
    {
      this = (CPtrArrayBase *)(v15 & 1 | ((unsigned __int64)v15 >> 1));
      v16 = (double)(int)this + (double)(int)this;
    }
    else
    {
      v16 = (double)(int)v15;
    }
    v17 = v16 * 1.5;
    v18 = 0LL;
    if ( v17 >= 9.223372036854776e18 )
    {
      v17 = v17 - 9.223372036854776e18;
      if ( v17 < 9.223372036854776e18 )
      {
        LODWORD(this) = 0;
        v18 = 0x8000000000000000uLL;
      }
    }
    v19 = v18 + (unsigned int)(int)v17;
    if ( v19 + 2 <= v15 )
    {
      v10 = -2147024882;
      v23 = -2147024882;
      v24 = 124;
      goto LABEL_35;
    }
    v20 = HrMalloc(8uLL, v19 + 2, &v26);
    v10 = v20;
    if ( v20 < 0 )
    {
      v23 = v20;
      v24 = 129;
      goto LABEL_35;
    }
    v21 = (unsigned __int64)v26;
    v22 = *(_QWORD *)v25 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( a3 )
      memcpy_0((char *)v26 + 16, (const void *)(v22 + 16), 8 * a3);
    *(_QWORD *)(v21 + 8 * a3 + 16) = a2;
    if ( a3 < v7 )
      memcpy_0((void *)(v21 + 24 + 8 * a3), (const void *)(v22 + 8 * a3 + 16), 8 * (v7 - a3));
    DefaultHeap::Free((void *)v22);
    *(_QWORD *)v21 = v7 + 1;
    *(_QWORD *)(v21 + 8) = v19;
    *(_QWORD *)v25 = v21 | 2;
  }
  else
  {
    if ( a3 < v7 )
      memmove_0(&v9[a3 + 3], &v9[a3 + 2], 8 * (v7 - a3));
    v9[a3 + 2] = a2;
    ++*v9;
  }
  return v10;
}
