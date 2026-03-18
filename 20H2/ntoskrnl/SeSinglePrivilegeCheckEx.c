/*
 * XREFs of SeSinglePrivilegeCheckEx @ 0x14063B9F8
 * Callers:
 *     SepCheckForCriticalAceRemoval @ 0x140204C68 (SepCheckForCriticalAceRemoval.c)
 *     SepValidLabelSubjectContext @ 0x1406305E4 (SepValidLabelSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     SepValidOwnerSubjectContext @ 0x1406C1D3C (SepValidOwnerSubjectContext.c)
 *     CmpSetAccessStateForBackupRestore @ 0x14076AF88 (CmpSetAccessStateForBackupRestore.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     SePrivilegedServiceAuditAlarm @ 0x140606DA0 (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x14060BF30 (SePrivilegeCheck.c)
 */

BOOLEAN __fastcall SeSinglePrivilegeCheckEx(LUID a1, struct _SECURITY_SUBJECT_CONTEXT *a2, KPROCESSOR_MODE a3)
{
  BOOLEAN v5; // al
  BOOLEAN v6; // di
  struct _PRIVILEGE_SET v8; // [rsp+20h] [rbp-28h] BYREF

  v8.PrivilegeCount = 1;
  v8.Control = 1;
  v8.Privilege[0].Luid = a1;
  v8.Privilege[0].Attributes = 0;
  v5 = SePrivilegeCheck(&v8, a2, a3);
  v6 = v5;
  if ( a3 )
    SePrivilegedServiceAuditAlarm(0LL, (__int64 *)a2, (int *)&v8, v5);
  return v6;
}
