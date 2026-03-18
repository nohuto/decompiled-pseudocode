/*
 * XREFs of SepAdtInitializePrivilegeAuditing @ 0x1407AAA58
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x1407AA970 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140A63F4C (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     SepRegQueryValue @ 0x140630F58 (SepRegQueryValue.c)
 */

char SepAdtInitializePrivilegeAuditing()
{
  __int64 **v0; // rax
  int v2; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(v2) = 0;
  if ( !SepAdtRegNotifyHandle
    || (SepRegQueryValue(SepAdtRegNotifyHandle, L"FullPrivilegeAuditing", 3, 1u, &v2),
        v0 = SepFilterPrivilegesShort,
        !(_BYTE)v2) )
  {
    v0 = SepFilterPrivilegesLong;
  }
  SepFilterPrivileges = v0;
  return 1;
}
