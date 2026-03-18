/*
 * XREFs of PspEstimateNewProcessServerSilo @ 0x1406176C8
 * Callers:
 *     NtCreateUserProcess @ 0x1406149A0 (NtCreateUserProcess.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x14026BA30 (HalSystemVectorDispatchEntry.c)
 *     PsGetEffectiveServerSilo @ 0x14027B2E0 (PsGetEffectiveServerSilo.c)
 *     PsGetProcessServerSilo @ 0x14027D870 (PsGetProcessServerSilo.c)
 *     PsIsHostSilo @ 0x140291F70 (PsIsHostSilo.c)
 */

__int64 __fastcall PspEstimateNewProcessServerSilo(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 ProcessServerSilo; // rbx
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 EffectiveServerSilo; // rsi

  if ( a1 )
  {
    ProcessServerSilo = PsGetProcessServerSilo(a1);
    if ( !PsIsHostSilo(ProcessServerSilo) )
      return ProcessServerSilo;
  }
  v6 = 0;
  if ( !a3 )
    return HalSystemVectorDispatchEntry();
  v8 = 0LL;
  while ( 1 )
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(*(_QWORD *)(a2 + 8 * v8));
    if ( !PsIsHostSilo(EffectiveServerSilo) )
      break;
    v8 = ++v6;
    if ( v6 >= a3 )
      return HalSystemVectorDispatchEntry();
  }
  return EffectiveServerSilo;
}
