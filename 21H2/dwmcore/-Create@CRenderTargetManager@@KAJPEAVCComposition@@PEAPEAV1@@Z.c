/*
 * XREFs of ?Create@CRenderTargetManager@@KAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800DEF9C
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800B48A0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawingContext@@SAJPEAPEAV1@@Z @ 0x18003E48C (-Create@CDrawingContext@@SAJPEAPEAV1@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180059EE0 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??_GCRenderTargetManager@@IEAAPEAXI@Z @ 0x18015555C (--_GCRenderTargetManager@@IEAAPEAXI@Z.c)
 */

__int64 __fastcall CRenderTargetManager::Create(struct CComposition *a1, struct CDrawingContext ***a2)
{
  struct CDrawingContext **v4; // rax
  __int64 v5; // rcx
  struct CDrawingContext **v6; // rbx
  CRenderTargetBitmap *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edi
  unsigned int v12; // edx

  *a2 = 0LL;
  v4 = (struct CDrawingContext **)DefaultHeap::Alloc(0x88uLL);
  v6 = v4;
  if ( v4 )
  {
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[3] = 0LL;
    v4[4] = 0LL;
    v4[5] = 0LL;
    v4[6] = 0LL;
    v4[7] = 0LL;
    v4[8] = 0LL;
    v4[9] = 0LL;
    v4[10] = 0LL;
    *v4 = a1;
    v4[11] = 0LL;
    v4[12] = 0LL;
    v4[13] = 0LL;
    *((_DWORD *)v4 + 28) = 0;
    v4[15] = 0LL;
    *((_DWORD *)v4 + 32) = 0;
    *((_WORD *)v4 + 66) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = v6[10];
    v6[10] = 0LL;
    if ( v7 )
      CRenderTargetBitmap::Release(v7);
    v8 = CDrawingContext::Create(v6 + 10);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x29u, 0LL);
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v10, 0x19u, 0LL);
      CRenderTargetManager::`scalar deleting destructor'((CRenderTargetManager *)v6, v12);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x17u, 0LL);
  }
  return (unsigned int)v10;
}
