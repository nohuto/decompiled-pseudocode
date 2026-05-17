/*
 * XREFs of TpSetPoolWorkerThreadIdleTimeout @ 0x1800617A0
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180061628 (LdrpEnableParallelLoading.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1800A0480 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x18011263C (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpSetPoolWorkerThreadIdleTimeout(__int64 a1, _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  _PEB_LDR_DATA *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = Ldr;
  if ( a1 )
  {
    if ( (__int64)Ldr < 0 )
    {
      Ldr = NtCurrentPeb()->Ldr;
      if ( !Ldr->ShutdownInProgress )
        return NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 2LL, &v5);
    }
  }
  TppRaiseInvalidParameter(a1, Ldr, a3, a4);
  return 3221225485LL;
}
