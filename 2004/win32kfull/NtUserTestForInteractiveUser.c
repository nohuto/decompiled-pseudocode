/*
 * XREFs of NtUserTestForInteractiveUser @ 0x1C0204760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserTestForInteractiveUser(_QWORD *a1)
{
  __int64 v2; // r8
  unsigned int v3; // ebx

  EnterSharedCrit(0LL, 1LL);
  if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
    a1 = (_QWORD *)MmUserProbeAddress;
  if ( *a1 == *(_QWORD *)(grpWinStaList + 184LL) )
    v3 = 0;
  else
    v3 = -1073741790;
  UserSessionSwitchLeaveCrit(grpWinStaList, grpWinStaList, v2);
  return v3;
}
