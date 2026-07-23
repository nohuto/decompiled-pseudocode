/*
 * XREFs of ExpCaptureWnfStateName @ 0x14069EDF4
 * Callers:
 *     NtQueryWnfStateNameInformation @ 0x140604510 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateName @ 0x14069CE70 (NtDeleteWnfStateName.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14069DD8C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x14069E08C (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x14069E5A4 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x14069E930 (NtQueryWnfStateData.c)
 *     NtUnsubscribeWnfStateChange @ 0x1406A1090 (NtUnsubscribeWnfStateChange.c)
 *     ExpNtDeleteWnfStateData @ 0x1407CD97C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpCaptureWnfStateName(__int64 *a1, unsigned __int64 *a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( a3 )
  {
    v3 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v3 = (__int64)a1;
    v4 = *(_QWORD *)v3;
  }
  else
  {
    v4 = *a1;
  }
  v5 = v4 ^ 0x41C64E6DA3BC0074LL;
  *a2 = v5;
  if ( (v5 & 0xF) != 1 )
    return 3221225485LL;
  v6 = v5;
  v7 = (v5 >> 10) & 1;
  v8 = (v6 >> 6) & 0xF;
  if ( (unsigned int)v8 > 5 || (_DWORD)v7 && (v8 & 0xFFFFFFF9) != 0 )
    return 3221225485LL;
  else
    return 0LL;
}
