/*
 * XREFs of ?Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18002C6C0
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002A690 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800A2588 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CSceneResourceManager::Create(struct CComposition *a1, struct CSceneResourceManager **a2)
{
  struct CSceneResourceManager *v4; // rax
  const unsigned int *v5; // rcx
  unsigned int v6; // ebx

  v4 = (struct CSceneResourceManager *)DefaultHeap::AllocClear(0x48uLL);
  if ( v4 )
  {
    *((_QWORD *)v4 + 1) = a1;
    v5 = &CSceneResourceManager::`vftable';
    *(_QWORD *)v4 = &CSceneResourceManager::`vftable';
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    *a2 = v4;
    return 0;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, -2147024882, 0x14u, 0LL);
  }
  return v6;
}
