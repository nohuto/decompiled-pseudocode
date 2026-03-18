/*
 * XREFs of _lambda_c729c1bd722f8cc31026c40a6b618e40_::_lambda_invoker_cdecl_ @ 0x1C00D11F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0026560 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall lambda_c729c1bd722f8cc31026c40a6b618e40_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rcx

  if ( !*(_DWORD *)(a1 + 864) )
  {
    RIMLockExclusive(a1 + 104);
    if ( !*(_BYTE *)(a1 + 81) && !*(_BYTE *)(a1 + 80) )
    {
      if ( *(_BYTE *)(a1 + 393) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
      v6 = *(void **)(a1 + 384);
      *(_BYTE *)(a1 + 393) = 1;
      ZwSetEvent(v6, 0LL);
    }
    CInpPushLock::UnLockExclusive((CInpPushLock *)(a1 + 104));
  }
}
