/*
 * XREFs of ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800DA5FC
 * Callers:
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18004FCDC (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?HideVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x180185210 (-HideVisuals@COffScreenRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z @ 0x1800D1100 (-RemoveAt@-$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800E0C4C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800E11F8 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Hide@CExcludeVisualReference@@QEAAXXZ @ 0x180173E0C (-Hide@CExcludeVisualReference@@QEAAXXZ.c)
 */

void __fastcall CComposition::ShowHideCursors(CComposition *this, char a2)
{
  int v2; // ebx
  _QWORD *v4; // rsi
  CCursorVisualReference *v5; // rdi
  CExcludeVisualReference *v6; // rcx
  unsigned int v7; // r8d
  unsigned int v8; // edx

  v2 = *((_DWORD *)this + 210);
  if ( v2 > 0 )
  {
    v4 = (_QWORD *)((char *)this + 816);
    do
    {
      v5 = *(CCursorVisualReference **)(*v4 + 8LL * (unsigned int)(v2 - 1));
      if ( CExcludeVisualReference::GetVisual(v5) )
      {
        if ( a2 )
          (**(void (***)(void))v5)();
        else
          CExcludeVisualReference::Hide(v6);
      }
      else
      {
        DynArray<CCursorVisualReference *,0>::RemoveAt((__int64)v4, v7);
        if ( v5 )
          CCursorVisualReference::`scalar deleting destructor'(v5, v8);
      }
      --v2;
    }
    while ( v2 > 0 );
  }
}
