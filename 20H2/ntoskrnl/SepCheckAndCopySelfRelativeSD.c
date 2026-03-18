/*
 * XREFs of SepCheckAndCopySelfRelativeSD @ 0x1405952F8
 * Callers:
 *     SeOperationAuditAlarm @ 0x140920FFC (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140921CD8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140922A40 (SepAdtStagingEvent.c)
 * Callees:
 *     RtlAbsoluteToSelfRelativeSD @ 0x140764E40 (RtlAbsoluteToSelfRelativeSD.c)
 *     SepSecurityDescriptorStrictLength @ 0x14092760C (SepSecurityDescriptorStrictLength.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCheckAndCopySelfRelativeSD(__int16 *a1, PVOID *a2, ULONG *a3, _BYTE *a4)
{
  NTSTATUS v7; // ebx
  PVOID PoolWithTag; // rax
  void *v9; // rcx
  PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor; // [rsp+40h] [rbp+8h] BYREF

  AbsoluteSecurityDescriptor = a1;
  *a2 = 0LL;
  *a3 = 0;
  *a4 = 0;
  v7 = 0;
  if ( a1 )
  {
    if ( a1[1] < 0 )
    {
      *a3 = SepSecurityDescriptorStrictLength();
      *a2 = v9;
    }
    else
    {
      v7 = RtlAbsoluteToSelfRelativeSD(&AbsoluteSecurityDescriptor, 0LL, a3);
      if ( v7 == -1073741789 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, *a3, 0x70416553u);
        *a2 = PoolWithTag;
        if ( PoolWithTag )
        {
          v7 = RtlAbsoluteToSelfRelativeSD(AbsoluteSecurityDescriptor, PoolWithTag, a3);
          if ( v7 >= 0 )
          {
            *a4 = 1;
          }
          else
          {
            ExFreePoolWithTag(*a2, 0);
            *a2 = 0LL;
          }
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)v7;
}
