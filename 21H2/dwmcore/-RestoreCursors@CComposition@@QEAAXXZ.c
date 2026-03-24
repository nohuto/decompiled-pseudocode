/*
 * XREFs of ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180043434
 * Callers:
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18004313C (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ED26C (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x180185D80 (-RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x18018BF50 (-RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z @ 0x1800D5CE0 (-RemoveAt@-$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800E509C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800E5648 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CComposition::RestoreCursors(CComposition *this)
{
  int v1; // ebx
  _QWORD *v2; // rdi
  __int64 v3; // rbp
  CCursorVisualReference *v4; // rsi
  unsigned int v5; // edx

  v1 = *((_DWORD *)this + 210);
  if ( v1 > 0 )
  {
    v2 = (_QWORD *)((char *)this + 816);
    do
    {
      v3 = (unsigned int)(v1 - 1);
      v4 = *(CCursorVisualReference **)(*v2 + 8 * v3);
      (*(void (__fastcall **)(CCursorVisualReference *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( !CExcludeVisualReference::GetVisual(v4) )
      {
        DynArray<CCursorVisualReference *,0>::RemoveAt(v2, (unsigned int)v3);
        CCursorVisualReference::`scalar deleting destructor'(v4, v5);
      }
      --v1;
    }
    while ( v1 > 0 );
  }
}
