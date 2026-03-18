/*
 * XREFs of SepAdtAuditObjectAccessWithContext @ 0x1405E2F30
 * Callers:
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E1B90 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtOpenObjectAuditAlarm @ 0x1406D5CC0 (NtOpenObjectAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091A408 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091A634 (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14091D110 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     SepAdtAuditThisEventWithContext @ 0x1405E3400 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1405E3480 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     RtlPrefixUnicodeString @ 0x14061B6D0 (RtlPrefixUnicodeString.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x14091C290 (SepAdtClassifyObjectIntoSubCategory.c)
 */

__int64 __fastcall SepAdtAuditObjectAccessWithContext(
        __int64 a1,
        const UNICODE_STRING *a2,
        char a3,
        char a4,
        __int64 a5,
        char a6,
        unsigned __int16 *a7)
{
  unsigned int v11; // r10d
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int16 v17; // ax

  *a7 = 118;
  v11 = a3 != 0 ? 3 : 0;
  v12 = v11 | 0x30;
  if ( !a4 )
    v12 = v11;
  result = SepAdtAuditThisEventByCategoryWithContext(2LL, v12, a5);
  if ( (_BYTE)result )
  {
    if ( a1 || a6 )
    {
      LOBYTE(v16) = a4;
      LOBYTE(v15) = a3;
      v17 = SepAdtClassifyObjectIntoSubCategory(a1, a2, v15, v16);
    }
    else if ( a2 && RtlPrefixUnicodeString(&SepSamTypeNamePrefix, a2, 0) )
    {
      v17 = 119;
    }
    else
    {
      v17 = 120;
    }
    LOBYTE(v15) = a4;
    *a7 = v17;
    LOBYTE(v14) = a3;
    return SepAdtAuditThisEventWithContext(v17, v14, v15, a5);
  }
  return result;
}
