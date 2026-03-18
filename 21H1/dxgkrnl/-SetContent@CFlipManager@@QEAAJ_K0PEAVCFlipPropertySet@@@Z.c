/*
 * XREFs of ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C0069E50
 * Callers:
 *     ?SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C0066BD8 (-SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C006A76C (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C006C958 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C006C9B4 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall CFlipManager::SetContent(
        CFlipManager *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct CFlipPropertySet *a4)
{
  unsigned int v6; // edi
  __int64 v7; // r11
  struct CFlipResourceState *ResourceState; // rsi
  CEndpointResourceStateManager *v9; // rcx
  CContentResourceState *v10; // rax
  CContentResourceState *v11; // rbx
  struct CPoolBufferResource *v12; // rdx

  v6 = 0;
  ResourceState = CEndpointResourceStateManager::FindResourceState(this, a3, (struct _LIST_ENTRY *)((char *)this + 56));
  v10 = CEndpointResourceStateManager::FindResourceState(v9, a2, (struct _LIST_ENTRY *)(v7 + 72));
  v11 = v10;
  if ( v10
    && ResourceState
    && (v12 = (struct CPoolBufferResource *)*((_QWORD *)ResourceState + 3), !*((_DWORD *)v12 + 18)) )
  {
    CContentResourceState::SetBoundBuffer(v10, v12);
    CContentResourceState::SetBoundPropertySet(v11, a4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
