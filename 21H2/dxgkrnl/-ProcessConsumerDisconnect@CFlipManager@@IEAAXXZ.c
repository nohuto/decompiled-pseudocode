/*
 * XREFs of ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C007E4B8
 * Callers:
 *     ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x1C0079E0C (-DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z.c)
 *     ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C007C660 (-Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x1C007D6F8 (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x1C007D7EC (-FreeQueuedUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?DestroyAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C007F928 (-DestroyAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ.c)
 */

void __fastcall CFlipManager::ProcessConsumerDisconnect(PRKEVENT *this)
{
  _QWORD **v2; // rsi
  CFlipManager *v3; // rcx
  CFlipManager *v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  CFlipManager::FreeCurrentUpdates((CFlipManager *)this);
  v2 = (_QWORD **)(this + 7);
  v3 = (CFlipManager *)this[9];
  if ( v3 != (CFlipManager *)(this + 9) )
  {
    do
    {
      v4 = *(CFlipManager **)v3;
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v3 - 1) + 16LL))((__int64)v3 - 8);
      v3 = v4;
    }
    while ( v4 != (CFlipManager *)(this + 9) );
  }
  v5 = *v2;
  if ( *v2 != v2 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      (*(void (__fastcall **)(_QWORD *))(*(v5 - 1) + 16LL))(v5 - 1);
      v5 = v6;
    }
    while ( v6 != v2 );
  }
  CEndpointResourceStateManager::DestroyAllResourceStates((CEndpointResourceStateManager *)(this + 13));
  CFlipManager::FreeQueuedUpdates((CFlipManager *)this);
  KeResetEvent(this[36]);
  this[6] = 0LL;
}
