/*
 * XREFs of ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x180069F74
 * Callers:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800622C4 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x180069F34 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18002C600 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800C0048 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     memmove_0 @ 0x1800F47E7 (memmove_0.c)
 */

__int64 __fastcall CDrawingContext::FlushDeferredD2DLayers(CDrawingContext *this)
{
  unsigned int v1; // r14d
  __int64 v2; // rbx
  __int64 v3; // rbp
  char *v5; // rdi
  __int64 v6; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // esi
  unsigned int v11; // esi

  v1 = 0;
  v2 = 0LL;
  v3 = 0LL;
  if ( *((_DWORD *)this + 140) )
  {
    v5 = (char *)this + 536;
    while ( 1 )
    {
      v8 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v5 + 8 * v3), this);
      v1 = v8;
      if ( v8 < 0 )
        break;
      v2 = (unsigned int)(v2 + 1);
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 140) )
        goto LABEL_2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1005u, 0LL);
  }
  else
  {
LABEL_2:
    v5 = (char *)this + 536;
    *((_DWORD *)this + 140) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 536, 8LL);
  }
  if ( (unsigned int)v2 < *((_DWORD *)this + 140) && (_DWORD)v2 )
  {
    v10 = *((_DWORD *)v5 + 6);
    if ( (unsigned int)v2 > v10 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0x23Du, 0LL);
    }
    else
    {
      v11 = v10 - v2;
      if ( v11 )
        memmove_0(*(void **)v5, (const void *)(*(_QWORD *)v5 + 8 * v2), 8LL * v11);
      *((_DWORD *)v5 + 6) = v11;
    }
  }
  return v1;
}
