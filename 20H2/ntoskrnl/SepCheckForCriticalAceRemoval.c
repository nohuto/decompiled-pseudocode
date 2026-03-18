/*
 * XREFs of SepCheckForCriticalAceRemoval @ 0x140204C68
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x1405E2050 (SeCheckForCriticalAceRemoval.c)
 * Callees:
 *     SepSidInToken @ 0x1402057A0 (SepSidInToken.c)
 *     SepHasCriticalAcesRemoved @ 0x1405E2238 (SepHasCriticalAcesRemoved.c)
 *     SeSinglePrivilegeCheckEx @ 0x14063B9F8 (SeSinglePrivilegeCheckEx.c)
 */

_UNKNOWN **__fastcall SepCheckForCriticalAceRemoval(__int64 a1, __int64 a2, __int64 *a3, _BYTE *a4, _BYTE *a5)
{
  _UNKNOWN **result; // rax
  __int64 *v7; // rsi
  __int64 *v10; // rdx
  __int64 v11; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = a3;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  if ( !SepAllowAllApplicationAceRemoval )
  {
    v10 = a3;
    LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
    result = (_UNKNOWN **)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeSinglePrivilegeCheckEx)(
                            SeTcbPrivilege,
                            v10,
                            a3);
    if ( !(_BYTE)result )
    {
      v11 = *v7;
      if ( !*v7 )
        v11 = v7[2];
      result = (_UNKNOWN **)SepSidInToken(v11, 0, (_DWORD)SeTrustedInstallerSid, 0, 0, 0, 0);
      if ( !(_BYTE)result )
        return (_UNKNOWN **)SepHasCriticalAcesRemoved(a1, a2, a4, a5);
    }
  }
  return result;
}
