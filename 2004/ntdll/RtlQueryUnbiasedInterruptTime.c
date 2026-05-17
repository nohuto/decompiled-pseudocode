/*
 * XREFs of RtlQueryUnbiasedInterruptTime @ 0x18005CDF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x180050770 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800758E0 (RtlNtStatusToDosErrorNoTeb.c)
 */

__int64 __fastcall RtlQueryUnbiasedInterruptTime(_QWORD *a1)
{
  __int64 result; // rax
  unsigned int v2; // eax

  if ( a1 )
  {
    result = 1LL;
    *a1 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  else
  {
    v2 = RtlNtStatusToDosErrorNoTeb(3221225485LL);
    RtlSetLastWin32Error(v2);
    return 0LL;
  }
  return result;
}
