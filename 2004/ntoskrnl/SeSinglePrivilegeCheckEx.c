/*
 * XREFs of SeSinglePrivilegeCheckEx @ 0x140667BF8
 * Callers:
 *     SepCheckForCriticalAceRemoval @ 0x140272120 (SepCheckForCriticalAceRemoval.c)
 *     SepValidLabelSubjectContext @ 0x1406183C8 (SepValidLabelSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     SepValidOwnerSubjectContext @ 0x1406EDDBC (SepValidOwnerSubjectContext.c)
 *     CmpSetAccessStateForBackupRestore @ 0x14075C818 (CmpSetAccessStateForBackupRestore.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14068EA00 (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x140693160 (SePrivilegeCheck.c)
 */

BOOLEAN __fastcall SeSinglePrivilegeCheckEx(LUID a1, struct _SECURITY_SUBJECT_CONTEXT *a2, KPROCESSOR_MODE a3)
{
  BOOLEAN v5; // al
  __int64 v6; // r9
  BOOLEAN v7; // di
  struct _PRIVILEGE_SET v9; // [rsp+20h] [rbp-28h] BYREF

  v9.PrivilegeCount = 1;
  v9.Control = 1;
  v9.Privilege[0].Luid = a1;
  v9.Privilege[0].Attributes = 0;
  v5 = SePrivilegeCheck(&v9, a2, a3);
  v7 = v5;
  if ( a3 )
  {
    LOBYTE(v6) = v5;
    SePrivilegedServiceAuditAlarm(0LL, a2, &v9, v6);
  }
  return v7;
}
