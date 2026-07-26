/*
 * XREFs of _lambda_12a273c170595e0055a0ec70dd7bc2f3_::_lambda_invoker_cdecl_ @ 0x1C0123390
 * Callers:
 *     <none>
 * Callees:
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116C10 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C0123210 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 */

unsigned __int64 __fastcall lambda_12a273c170595e0055a0ec70dd7bc2f3_::_lambda_invoker_cdecl_(
        _NDIS_MINIPORT_BLOCK *a1,
        NDIS_BIND_LINK_BASE *a2)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  unsigned __int64 result; // rax

  Miniport = a2->BindState.Miniport;
  result = (unsigned __int64)a2->BindState.Miniport->Reserved4.Buffer;
  if ( result && *(int *)(result + 64) < 0 )
  {
    result = Ndis::BindStack::CreateDynamicBinding((__int64)&a1->Bindings, a2, a1, TapiProxy);
    Miniport = a2->BindState.Miniport;
  }
  if ( Miniport )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)&Miniport->48, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (unsigned __int64)KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(Miniport);
  }
  return result;
}
