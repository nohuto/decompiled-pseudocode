/*
 * XREFs of ?Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z @ 0x18002EDE4
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002E2F0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x18002EE88 (-Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 *     ??0CGlobalSurfaceManager@@IEAA@XZ @ 0x18002F0C4 (--0CGlobalSurfaceManager@@IEAA@XZ.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18005EDD0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800AA098 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CGlobalSurfaceManager::Create(void **a1, void **a2, struct CSurfaceManager **a3)
{
  CGlobalSurfaceManager *v6; // rax
  CGlobalSurfaceManager *v7; // rbx
  volatile signed __int32 *v8; // rax
  unsigned int v9; // ecx
  CDrawListEntry *v10; // rdi
  int v11; // eax
  unsigned int v12; // ecx
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
