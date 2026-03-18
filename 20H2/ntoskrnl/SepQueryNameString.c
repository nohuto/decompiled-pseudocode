/*
 * XREFs of SepQueryNameString @ 0x14068E6AC
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1405E352C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405F44C0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepValidateReferencedCachedHandles @ 0x14068E2B0 (SepValidateReferencedCachedHandles.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091FB8C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x140920FFC (SeOperationAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x140921AAC (SepAdtObjectReferenceAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140924040 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x1406350A0 (ObQueryNameStringMode.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14064D5D8 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepQueryNameString(char *a1, PVOID *a2)
{
  int v4; // eax
  int v5; // ebx
  PVOID PoolWithTag; // rax
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v4 = ObQueryNameStringMode(a1, 0LL, 0, &NumberOfBytes, 0);
  v5 = v4;
  if ( v4 == -1073741820 || v4 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E4F6553u);
    *a2 = PoolWithTag;
    if ( PoolWithTag )
    {
      v5 = ObQueryNameStringMode(a1, (__int64)PoolWithTag, NumberOfBytes, &NumberOfBytes, 0);
      if ( v5 < 0 || !*(_WORD *)*a2 )
      {
        ExFreePoolWithTag(*a2, 0);
        *a2 = 0LL;
        if ( v5 >= 0
          && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8)] == PsProcessType )
        {
          PsGetAllocatedFullProcessImageNameEx((__int64)a1, (__int64)a2);
        }
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
