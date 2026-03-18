/*
 * XREFs of _lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_ @ 0x180021470
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18002F95C (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

void __fastcall lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rdi
  wil::details_abi::FeatureStateData *Ptr; // rcx

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 4;
    AcquireSRWLockExclusive(Context + 4);
    BYTE1(Context[8].Ptr) = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    Ptr = (wil::details_abi::FeatureStateData *)Context[3].Ptr;
    if ( Ptr )
      wil::details_abi::FeatureStateData::RecordUsage(Ptr);
  }
}
