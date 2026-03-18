/*
 * XREFs of ExpCaptureWnfStateName @ 0x14079474C
 * Callers:
 *     NtQueryWnfStateNameInformation @ 0x140791110 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateName @ 0x1407920F0 (NtDeleteWnfStateName.c)
 *     NtUnsubscribeWnfStateChange @ 0x1407928B0 (NtUnsubscribeWnfStateChange.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1407931C0 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x140793B84 (ExpNtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140794AD0 (NtQueryWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x14079982C (ExpWnfSubscribeWnfStateChange.c)
 *     ExpNtDeleteWnfStateData @ 0x14085EB0C (ExpNtDeleteWnfStateData.c)
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
