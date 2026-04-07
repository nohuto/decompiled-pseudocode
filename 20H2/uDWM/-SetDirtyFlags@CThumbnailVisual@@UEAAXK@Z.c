/*
 * XREFs of ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x1800114E0
 * Callers:
 *     ?OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18000D8A0 (-OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18000D8F0 (-OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18000DBC0 (-OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x18000E26C (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000E2DC (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180010F00 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001110C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180011574 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001332C (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180018C60 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18003EA6C (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?EndTransition@CThumbnailVisual@@UEAAXXZ @ 0x1800936B0 (-EndTransition@CThumbnailVisual@@UEAAXXZ.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x180093908 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x1800264A8 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CThumbnailVisual::SetDirtyFlags(CThumbnailVisual *this, int a2)
{
  __int64 v2; // rax
  CThumbnailVisual *v4; // rbx
  __int64 v5; // rcx
  CVisual *v6; // rcx
  int v7; // eax

  v2 = *((_QWORD *)this + 46);
  v4 = this;
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 34) )
    {
      v5 = *(_QWORD *)(v2 + 16);
      if ( v5 )
      {
        v6 = *(CVisual **)(v5 + 384);
        if ( v6 )
        {
          v7 = *((_DWORD *)v6 + 20);
          if ( (v7 & 0x8000000) == 0 )
          {
            *((_DWORD *)v6 + 20) = v7 | 0x8000000;
            CVisual::PropagateDirtyChildren(v6);
          }
        }
      }
    }
  }
  if ( (a2 & *((_DWORD *)v4 + 20)) != a2 )
  {
    *((_DWORD *)v4 + 20) |= a2;
    while ( 1 )
    {
      v4 = (CThumbnailVisual *)*((_QWORD *)v4 + 3);
      if ( !v4 || (*((_BYTE *)v4 + 80) & 1) != 0 )
        break;
      (*(void (__fastcall **)(CThumbnailVisual *))(*(_QWORD *)v4 + 32LL))(v4);
    }
  }
}
