/*
 * XREFs of SepCheckForCriticalAceRemoval @ 0x140272120
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x14063EBA0 (SeCheckForCriticalAceRemoval.c)
 * Callees:
 *     SepSidInToken @ 0x14026D774 (SepSidInToken.c)
 *     SepHasCriticalAcesRemoved @ 0x14063C470 (SepHasCriticalAcesRemoved.c)
 *     SeSinglePrivilegeCheckEx @ 0x140667BF8 (SeSinglePrivilegeCheckEx.c)
 */

_UNKNOWN **__fastcall SepCheckForCriticalAceRemoval(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_DESCRIPTOR a2,
        __int64 *a3,
        _BYTE *a4,
        _BYTE *a5)
{
  _UNKNOWN **result; // rax
  __int64 *v6; // rsi
  __int64 *v9; // rdx
  __int64 v10; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v6 = a3;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  if ( !SepAllowAllApplicationAceRemoval )
  {
    v9 = a3;
    LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
    result = (_UNKNOWN **)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeSinglePrivilegeCheckEx)(
                            SeTcbPrivilege,
                            v9,
                            a3);
    if ( !(_BYTE)result )
    {
      v10 = *v6;
      if ( !*v6 )
        v10 = v6[2];
      result = (_UNKNOWN **)SepSidInToken(v10, 0LL, (__int64)SeTrustedInstallerSid, 0LL, 0, 0, 0);
      if ( !(_BYTE)result )
        return (_UNKNOWN **)SepHasCriticalAcesRemoved(SecurityDescriptor, a2);
    }
  }
  return result;
}
