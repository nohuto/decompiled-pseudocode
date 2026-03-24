/*
 * XREFs of ?RemoveContent@CFlipManager@@QEAAJ_K@Z @ 0x1C006BD6C
 * Callers:
 *     ?RemoveContent@FlipManagerObject@@QEAAJ_K@Z @ 0x1C0068A70 (-RemoveContent@FlipManagerObject@@QEAAJ_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C006C6DC (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEBUCSM_BUFFER_INFO@@@Z @ 0x1C006E1B8 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEBUCSM_BUFFER_INFO@@@Z.c)
 */

__int64 __fastcall CFlipManager::RemoveContent(CFlipManager *this, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  struct CFlipResourceState *ResourceState; // rax
  struct CFlipResourceState *v4; // rdi

  v2 = 0;
  ResourceState = CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 72));
  v4 = ResourceState;
  if ( ResourceState )
  {
    CContentResource::RebindCompositionSurfaceBuffer(*((CContentResource **)ResourceState + 3), 0LL);
    (*(void (__fastcall **)(struct CFlipResourceState *))(*(_QWORD *)v4 + 24LL))(v4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
