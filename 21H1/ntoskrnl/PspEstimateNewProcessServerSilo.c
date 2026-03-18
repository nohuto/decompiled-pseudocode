/*
 * XREFs of PspEstimateNewProcessServerSilo @ 0x14066BEE0
 * Callers:
 *     NtCreateUserProcess @ 0x14066BF50 (NtCreateUserProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     PsIsHostSilo @ 0x1402556F0 (PsIsHostSilo.c)
 *     HalSystemVectorDispatchEntry @ 0x1402D53D0 (HalSystemVectorDispatchEntry.c)
 *     PsGetEffectiveServerSilo @ 0x1402D95B0 (PsGetEffectiveServerSilo.c)
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
