/*
 * XREFs of KeSetCheckStackExtentsProcess @ 0x1408BD89C
 * Callers:
 *     PspApplyMitigationOptions @ 0x140698088 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetCheckStackExtentsProcess(__int64 a1, int a2)
{
  if ( a2 )
    return _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 5u);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)(a1 + 632), 5u);
}
