/*
 * XREFs of ?RemovePoolBuffer@CFlipManager@@QEAAJ_K@Z @ 0x1C007EA7C
 * Callers:
 *     ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x1C007A218 (-RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C007F9EC (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x1C0080B64 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 */

__int64 __fastcall CFlipManager::RemovePoolBuffer(CFlipManager *this, unsigned __int64 a2)
{
  unsigned int v3; // ebx
  struct CFlipResourceState *ResourceState; // rdi
  struct DXGGLOBAL *Global; // rax

  v3 = 0;
  ResourceState = CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 56));
  if ( ResourceState )
  {
    Global = DXGGLOBAL_GetGlobal();
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)Global + 38073) + 216LL))(
      *((unsigned int *)this + 82),
      *((_QWORD *)ResourceState + 3),
      *(_QWORD *)(*((_QWORD *)ResourceState + 3) + 56LL));
    CEndpointResourceStateManager::RemovePoolBufferState((CFlipManager *)((char *)this + 56), ResourceState);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
