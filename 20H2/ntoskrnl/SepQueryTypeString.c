/*
 * XREFs of SepQueryTypeString @ 0x140922F44
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1405E352C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405F44C0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1406DC5F8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x140921AAC (SepAdtObjectReferenceAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140924040 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     ObQueryTypeName @ 0x1408E0710 (ObQueryTypeName.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepQueryTypeString(__int64 a1, PVOID *a2)
{
  __int64 result; // rax
  PVOID PoolWithTag; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v6 = 0LL;
  result = ObQueryTypeName(a1, (__int64)&v6, 0, &NumberOfBytes);
  if ( (_DWORD)result == -1073741820 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E546553u);
    *a2 = PoolWithTag;
    if ( PoolWithTag )
    {
      result = ObQueryTypeName(a1, (__int64)PoolWithTag, NumberOfBytes, &NumberOfBytes);
      if ( (int)result < 0 )
      {
        ExFreePoolWithTag(*a2, 0);
        *a2 = 0LL;
        return 0LL;
      }
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
