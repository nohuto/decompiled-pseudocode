/*
 * XREFs of SeExamineGlobalSacl @ 0x140921428
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405ECB20 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeObjectReferenceAuditAlarm @ 0x14066AB5C (SeObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1407BFC00 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     CmpExamineSaclForAuditEvent @ 0x14086E8DC (CmpExamineSaclForAuditEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140919F0C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14091E3C0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     SeExamineSacl @ 0x14091DFD0 (SeExamineSacl.c)
 *     SepRmGlobalSaclFind @ 0x140921600 (SepRmGlobalSaclFind.c)
 */

void __stdcall SeExamineGlobalSacl(
        PUNICODE_STRING ObjectType,
        PACL ResourceSacl,
        PACCESS_TOKEN Token,
        ACCESS_MASK DesiredAccess,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateAudit,
        PBOOLEAN GenerateAlarm)
{
  PBOOLEAN v7; // rdi
  BOOLEAN v8; // bl
  struct _KTHREAD *CurrentThread; // rax
  ACL *v14; // rcx
  char v15; // al
  BOOLEAN v16[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+48h] [rbp-20h] BYREF

  v7 = GenerateAudit;
  v8 = 0;
  if ( GenerateAudit && !*GenerateAudit )
  {
    v17 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
    if ( (int)SepRmGlobalSaclFind(&v17, 0LL, ObjectType, 0LL) >= 0 )
    {
      v14 = *(ACL **)(v17 + 24);
      if ( v14 )
      {
        LOBYTE(GenerateAudit) = 0;
        v16[0] = 0;
        SeExamineSacl(v14, ResourceSacl, Token, DesiredAccess, AccessGranted, (PBOOLEAN)&GenerateAudit, v16);
        if ( *v7 || (v15 = 0, (_BYTE)GenerateAudit) )
          v15 = 1;
        *v7 = v15;
        if ( GenerateAlarm )
        {
          if ( *GenerateAlarm || v16[0] )
            v8 = 1;
          *GenerateAlarm = v8;
        }
      }
    }
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    KeLeaveCriticalRegion();
  }
}
