/*
 * XREFs of KeSetDisableBoostThread @ 0x14075E07C
 * Callers:
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetDisableBoostThread(__int64 a1, int a2)
{
  if ( a2 )
    return _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 3u);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 3u);
}
