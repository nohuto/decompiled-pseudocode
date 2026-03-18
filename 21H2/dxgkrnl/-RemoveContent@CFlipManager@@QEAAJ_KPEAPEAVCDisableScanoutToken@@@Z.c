/*
 * XREFs of ?RemoveContent@CFlipManager@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x1C007EA24
 * Callers:
 *     ?RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x1C007A1A8 (-RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C007F9EC (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z @ 0x1C0081084 (-ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z.c)
 */

__int64 __fastcall CFlipManager::RemoveContent(
        CFlipManager *this,
        unsigned __int64 a2,
        struct CDisableScanoutToken **a3)
{
  struct CFlipResourceState *ResourceState; // rax
  struct CDisableScanoutToken **v4; // r11
  struct CFlipResourceState *v5; // rdi
  unsigned int v6; // ebx

  ResourceState = CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 72));
  v5 = ResourceState;
  if ( ResourceState )
  {
    v6 = CContentResource::ClearCompositionSurfaceBinding(*((CContentResource **)ResourceState + 3), v4);
    (*(void (__fastcall **)(struct CFlipResourceState *))(*(_QWORD *)v5 + 24LL))(v5);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
