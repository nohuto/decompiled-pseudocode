/*
 * XREFs of KeSetCheckStackExtentsProcess @ 0x1408BAD7C
 * Callers:
 *     PspApplyMitigationOptions @ 0x1406D8A1C (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
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
