/*
 * XREFs of ?NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z @ 0x1800B63F0
 * Callers:
 *     ?NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z @ 0x1800B6480 (-NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B070 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18008952C (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x1800B6F7C (-_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z.c)
 */

void __fastcall CDesktopThumbnailBase::NotifyWindowDestruction(
        CDesktopThumbnailBase *this,
        const struct CTopLevelWindow **a2)
{
  int Index; // eax
  __int64 v3; // rcx
  unsigned int v4; // esi
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  CBaseObject *v8; // rcx

  Index = CDesktopThumbnailBase::_GetIndex(this, a2[48]);
  v4 = Index;
  if ( Index >= 0 )
  {
    v5 = (__int64 *)(v3 + 240);
    v6 = 2LL * (unsigned int)Index;
    VisualCollection::Remove(
      (VisualCollection *)(v3 + 32),
      *(struct CVisual **)(*(_QWORD *)(v3 + 240) + 16LL * (unsigned int)Index + 8));
    v7 = *v5;
    if ( *(_QWORD *)(*v5 + 16LL * v4) )
    {
      CBaseObject::Release(*(CBaseObject **)(*v5 + 8 * v6));
      v7 = *v5;
    }
    v8 = *(CBaseObject **)(v7 + 16LL * v4 + 8);
    if ( v8 )
      CBaseObject::Release(v8);
    DynArray<CIconicBitmapPending,0>::RemoveAt(v5, v4);
  }
}
