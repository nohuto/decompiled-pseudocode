/*
 * XREFs of ?Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z @ 0x1800B5344
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800B48A0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800520D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18009F358 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x1800B53E8 (-Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 *     ??0CGlobalSurfaceManager@@IEAA@XZ @ 0x1800B5624 (--0CGlobalSurfaceManager@@IEAA@XZ.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CGlobalSurfaceManager::Create(void **a1, void **a2, struct CSurfaceManager **a3)
{
  CGlobalSurfaceManager *v6; // rax
  CGlobalSurfaceManager *v7; // rbx
  volatile signed __int32 *v8; // rax
  __int64 v9; // rcx
  CDrawListEntry *v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = (CGlobalSurfaceManager *)DefaultHeap::AllocClear(0x1F8uLL);
  v7 = v6;
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v6, 0, 0x1F8uLL);
  v8 = (volatile signed __int32 *)CGlobalSurfaceManager::CGlobalSurfaceManager(v7);
  v10 = (CDrawListEntry *)v8;
  if ( v8 )
  {
    _InterlockedIncrement(v8 + 2);
    v11 = CGlobalSurfaceManager::Initialize((CGlobalSurfaceManager *)v8, a1, a2);
    v13 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x40u, 0LL);
      CDrawListEntry::Release(v10);
    }
    else
    {
      *a3 = v10;
    }
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x3Du, 0LL);
  }
  return v13;
}
