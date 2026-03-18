/*
 * XREFs of ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18002EDE8
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002E810 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ??0CHolographicManager@@AEAA@PEAVCComposition@@@Z @ 0x18002EE78 (--0CHolographicManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CHolographicManager::Create(struct CComposition *a1, struct CHolographicManager **a2)
{
  CHolographicManager *v4; // rax
  CHolographicManager *v5; // rax
  unsigned int v6; // ecx
  struct CHolographicManager *v7; // rdi
  HANDLE Event; // rax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CHolographicManager *)DefaultHeap::AllocClear(0xF8uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CHolographicManager::CHolographicManager(v4, a1);
  v7 = v5;
  if ( v5 )
  {
    CMILRefCountImpl::AddReference((CHolographicManager *)((char *)v5 + 16));
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *((_QWORD *)v7 + 29) = Event;
    if ( Event )
    {
      v10 = 0;
      *a2 = v7;
    }
    else
    {
      v10 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147467259, 0x1Au, 0LL);
      CMILRefCountBaseT<IMILRefCount>::InternalRelease((char *)v7 + 8);
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x16u, 0LL);
  }
  return v10;
}
