/*
 * XREFs of ?ProcessDiscardedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C007E56C
 * Callers:
 *     ?Discard@CFlipPresentUpdate@@UEAAXXZ @ 0x1C0081850 (-Discard@CFlipPresentUpdate@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1C007DED8 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C007E968 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C007F828 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 */

void __fastcall CFlipManager::ProcessDiscardedProducerPresentUpdate(CFlipManager **this, struct CFlipPresentUpdate *a2)
{
  _QWORD **v4; // rdi
  CFlipManager *v5; // rcx
  CFlipManager *v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx

  CFlipManager::ReleaseKernelPresentUpdateReferences((CFlipManager *)this, a2);
  v4 = (_QWORD **)(this + 7);
  v5 = this[9];
  if ( v5 != (CFlipManager *)(this + 9) )
  {
    do
    {
      v6 = *(CFlipManager **)v5;
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v5 - 1) + 8LL))((__int64)v5 - 8);
      v5 = v6;
    }
    while ( v6 != (CFlipManager *)(this + 9) );
  }
  v7 = *v4;
  if ( *v4 != v4 )
  {
    do
    {
      v8 = (_QWORD *)*v7;
      (*(void (__fastcall **)(_QWORD *))(*(v7 - 1) + 8LL))(v7 - 1);
      v7 = v8;
    }
    while ( v8 != v4 );
  }
  if ( !*((_BYTE *)a2 + 72) )
    CEndpointResourceStateManager::ClearAllContentBindings((CEndpointResourceStateManager *)(this + 7));
  if ( this[6] == (CFlipManager *)1 )
    CFlipManager::MarkAsLost((__int64)this, -1073741823, 19, *((_QWORD *)a2 + 8));
}
