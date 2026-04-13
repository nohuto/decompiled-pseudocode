/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_f445b1b04a1e911cb28a3e84927aae7d_@@CAXXZ @ 0x1800257D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _lambda_f445b1b04a1e911cb28a3e84927aae7d_::_lambda_invoker_cdecl_()
{
  _QWORD *v0; // rax
  __int64 v1; // rax
  REGHANDLE v2; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(
         &`ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::wrapper,
         1u,
         &fPending,
         &Context)
    && !fPending )
  {
    v0 = Context;
    *(_QWORD *)Context = &CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    if ( *((_BYTE *)v0 + 16) )
    {
      v1 = v0[1];
      v2 = *(_QWORD *)(v1 + 32);
      *(_QWORD *)(v1 + 32) = 0LL;
      *(_DWORD *)v1 = 0;
      EventUnregister(v2);
    }
  }
}
