/*
 * XREFs of KeSetAutoAlignmentProcess @ 0x1407216A4
 * Callers:
 *     PspSetProcessDefaultHardErrorMode @ 0x1407217D0 (PspSetProcessDefaultHardErrorMode.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetAutoAlignmentProcess(__int64 a1, int a2)
{
  if ( a2 )
    return _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 0);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)(a1 + 632), 0);
}
