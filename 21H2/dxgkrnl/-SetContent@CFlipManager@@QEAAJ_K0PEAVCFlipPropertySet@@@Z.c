/*
 * XREFs of ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C007EB00
 * Callers:
 *     ?SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C007A278 (-SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z @ 0x1C007F998 (-FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C007F9EC (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C00816B4 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0081710 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall CFlipManager::SetContent(
        CFlipManager *this,
        __int64 a2,
        unsigned __int64 a3,
        struct CFlipPropertySet *a4)
{
  unsigned int v7; // ebx
  struct CFlipResourceState *ResourceState; // rdi
  CEndpointResourceStateManager *v9; // rcx
  unsigned __int64 v10; // r11
  struct CFlipResourceState *v11; // rbp
  struct CPoolBufferResource *v12; // rdi
  struct DXGGLOBAL *Global; // rax
  unsigned int PoolBufferIndex; // edi
  struct DXGGLOBAL *v15; // rax

  v7 = 0;
  ResourceState = CEndpointResourceStateManager::FindResourceState(this, a3, (struct _LIST_ENTRY *)((char *)this + 56));
  v11 = CEndpointResourceStateManager::FindResourceState(v9, v10, (struct _LIST_ENTRY *)((char *)this + 72));
  if ( !v11 )
    return (unsigned int)-1073741811;
  if ( *((_QWORD *)this + 6) != 1LL )
  {
    if ( !ResourceState || *(_DWORD *)(*((_QWORD *)ResourceState + 3) + 80LL) )
      return (unsigned int)-1073741811;
    goto LABEL_7;
  }
  if ( ResourceState )
  {
LABEL_7:
    v12 = (struct CPoolBufferResource *)*((_QWORD *)ResourceState + 3);
    goto LABEL_9;
  }
  v12 = 0LL;
LABEL_9:
  CContentResourceState::SetBoundBuffer(v11, v12);
  CContentResourceState::SetBoundPropertySet(v11, a4);
  Global = DXGGLOBAL_GetGlobal();
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38073) + 192LL))() )
  {
    if ( v12 )
      PoolBufferIndex = CEndpointResourceStateManager::FindPoolBufferIndex((CFlipManager *)((char *)this + 56), a3);
    else
      PoolBufferIndex = -1;
    v15 = DXGGLOBAL_GetGlobal();
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v15 + 38073) + 184LL))(
      *((unsigned int *)this + 82),
      *((_QWORD *)v11 + 3),
      *((_QWORD *)v11 + 6),
      PoolBufferIndex);
  }
  return v7;
}
