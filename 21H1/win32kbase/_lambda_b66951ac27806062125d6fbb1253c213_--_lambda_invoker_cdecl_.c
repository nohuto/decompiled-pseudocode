/*
 * XREFs of _lambda_b66951ac27806062125d6fbb1253c213_::_lambda_invoker_cdecl_ @ 0x1C00D0860
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0016AA0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall lambda_b66951ac27806062125d6fbb1253c213_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  if ( !*(_DWORD *)(a1 + 864) )
  {
    RIMLockExclusive(a1 + 104);
    if ( !*(_BYTE *)(a1 + 81) && !*(_BYTE *)(a1 + 80) )
    {
      if ( *(_BYTE *)(a1 + 392) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
      v3 = *(void **)(a1 + 384);
      *(_BYTE *)(a1 + 392) = 1;
      ZwSetEvent(v3, 0LL);
    }
    CInpPushLock::UnLockExclusive((CInpPushLock *)(a1 + 104));
  }
}
