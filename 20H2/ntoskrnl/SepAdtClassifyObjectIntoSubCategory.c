/*
 * XREFs of SepAdtClassifyObjectIntoSubCategory @ 0x1409231C0
 * Callers:
 *     SepAdtAuditObjectAccessWithContext @ 0x1405E4E14 (SepAdtAuditObjectAccessWithContext.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405F44C0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpCreateHandle @ 0x140616FD0 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1406D3078 (SeAuditHandleCreation.c)
 *     SeOperationAuditAlarm @ 0x140920FFC (SeOperationAuditAlarm.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x140205770 (SepAuditingEnabledForSubcategory.c)
 *     RtlCompareUnicodeString @ 0x140671CB0 (RtlCompareUnicodeString.c)
 *     SepIsRemovableStorageDevice @ 0x14092754C (SepIsRemovableStorageDevice.c)
 */

__int64 __fastcall SepAdtClassifyObjectIntoSubCategory(__int64 a1, const UNICODE_STRING *a2, char a3, char a4)
{
  POBJECT_TYPE *v5; // rax
  __int64 v6; // r11
  unsigned __int16 v7; // r9
  __int64 v8; // r11

  if ( !a1 )
  {
    if ( !a2 )
      return 118LL;
    if ( !RtlCompareUnicodeString(a2, &SepFileTypeName, 0) )
      return 116LL;
    if ( RtlCompareUnicodeString(a2, &SepRegistryTypeName, 0) )
      return 118LL;
    return 117LL;
  }
  v5 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  if ( v5 == CmKeyObjectType )
    return 117LL;
  if ( v5 == IoFileObjectType )
  {
    if ( SepAuditingEnabledForSubcategory(128, a3, a4)
      && (unsigned __int8)SepIsRemovableStorageDevice(*(_QWORD *)(v6 + 8)) == 1 )
    {
      return v7;
    }
    return 116LL;
  }
  if ( v5 == (POBJECT_TYPE *)IoDeviceObjectType
    && SepAuditingEnabledForSubcategory(128, a3, a4)
    && (unsigned __int8)SepIsRemovableStorageDevice(v8) == 1 )
  {
    return v7;
  }
  return 118LL;
}
