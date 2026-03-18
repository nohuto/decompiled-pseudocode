/*
 * XREFs of ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C006B734
 * Callers:
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C006A0AC (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEAW4Fli.c)
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C006BE38 (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?Pending@CFlipPresentUpdate@@UEAAXXZ @ 0x1C006DCD0 (-Pending@CFlipPresentUpdate@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CEndpointResourceStateManager::CommitPendingUpdates(CEndpointResourceStateManager *this)
{
  char *v1; // rsi
  char *v3; // rcx
  char *v4; // rbx
  CEndpointResourceStateManager **v5; // rcx
  CEndpointResourceStateManager *v6; // rbx

  v1 = (char *)this + 16;
  v3 = (char *)*((_QWORD *)this + 2);
  if ( v3 != v1 )
  {
    do
    {
      v4 = *(char **)v3;
      (**((void (__fastcall ***)(_QWORD *))v3 - 1))((_QWORD *)v3 - 1);
      v3 = v4;
    }
    while ( v4 != v1 );
  }
  v5 = *(CEndpointResourceStateManager ***)this;
  if ( *(CEndpointResourceStateManager **)this != this )
  {
    do
    {
      v6 = *v5;
      (*(void (__fastcall **)(CEndpointResourceStateManager **))*(v5 - 1))(v5 - 1);
      v5 = (CEndpointResourceStateManager **)v6;
    }
    while ( v6 != this );
  }
}
