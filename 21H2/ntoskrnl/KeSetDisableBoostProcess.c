/*
 * XREFs of KeSetDisableBoostProcess @ 0x1409614D0
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetDisableBoostProcess(__int64 a1, int a2)
{
  if ( a2 )
    return _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 1u);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)(a1 + 632), 1u);
}
