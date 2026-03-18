/*
 * XREFs of SepQueryNameString @ 0x1406321F0
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405ECB20 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1406267D4 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepValidateReferencedCachedHandles @ 0x140631DF4 (SepValidateReferencedCachedHandles.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140919F0C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x14091B37C (SeOperationAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14091BE2C (SepAdtObjectReferenceAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14091E3C0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x14065FDA0 (ObQueryNameStringMode.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1406B8108 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepQueryNameString(__int64 a1, PVOID *a2)
{
  int NameStringMode; // eax
  int v5; // ebx
  PVOID PoolWithTag; // rax
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  NameStringMode = ObQueryNameStringMode(a1, 0, 0, (unsigned int)&NumberOfBytes, 0);
  v5 = NameStringMode;
  if ( NameStringMode == -1073741820 || NameStringMode == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E4F6553u);
    *a2 = PoolWithTag;
    if ( PoolWithTag )
    {
      v5 = ObQueryNameStringMode(a1, (_DWORD)PoolWithTag, NumberOfBytes, (unsigned int)&NumberOfBytes, 0);
      if ( v5 < 0 || !*(_WORD *)*a2 )
      {
        ExFreePoolWithTag(*a2, 0);
        *a2 = 0LL;
        if ( v5 >= 0
          && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)] == PsProcessType )
        {
          PsGetAllocatedFullProcessImageNameEx(a1, a2);
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
