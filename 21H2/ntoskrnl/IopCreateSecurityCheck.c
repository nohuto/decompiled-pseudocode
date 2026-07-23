/*
 * XREFs of IopCreateSecurityCheck @ 0x140225208
 * Callers:
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 * Callees:
 *     SeAccessCheck @ 0x1402AB090 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     SeOpenObjectAuditAlarm @ 0x1405EA760 (SeOpenObjectAuditAlarm.c)
 *     SeAppendPrivileges @ 0x1405EA7C0 (SeAppendPrivileges.c)
 *     SeLockSubjectContext @ 0x14070D210 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14070D270 (SeUnlockSubjectContext.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

BOOLEAN __fastcall IopCreateSecurityCheck(
        __int64 a1,
        void *a2,
        struct _ACCESS_STATE *a3,
        int a4,
        int a5,
        PPRIVILEGE_SET Privileges,
        PACCESS_MASK GrantedAccess,
        PUNICODE_STRING AbsoluteObjectName,
        PUNICODE_STRING ObjectTypeName,
        __int64 a10,
        char a11)
{
  int v11; // ebx
  int v16; // eax
  __int64 v17; // r13
  PACCESS_MASK v18; // rsi
  BOOLEAN v19; // bp
  NTSTATUS AccessStatus; // [rsp+98h] [rbp+20h] BYREF

  AccessStatus = 0;
  v11 = 0;
  if ( a5 != 1 )
  {
    v16 = *(_DWORD *)(a1 + 52);
    if ( (v16 & 0x40001) != 0 || IopRequireDeviceAccessCheck && (v16 & 0x100000) != 0 )
      v11 = 2;
  }
  v17 = a10;
  --*(_WORD *)(a10 + 484);
  ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
  SeLockSubjectContext(&a3->SubjectSecurityContext);
  v18 = GrantedAccess;
  v19 = SeAccessCheck(
          *(PSECURITY_DESCRIPTOR *)(a1 + 272),
          &a3->SubjectSecurityContext,
          1u,
          a4 | v11,
          0,
          &Privileges,
          (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
          1,
          GrantedAccess,
          &AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(a3, Privileges);
    ExFreePoolWithTag(Privileges, 0);
  }
  if ( v11 && (v11 & a4) == 0 )
    *v18 &= ~v11;
  if ( a11 && v19 )
  {
    a3->PreviouslyGrantedAccess |= *v18;
    a3->RemainingDesiredAccess &= ~(*v18 | 0x2000000);
  }
  if ( a2 )
    SeOpenObjectAuditAlarm(
      ObjectTypeName,
      a2,
      AbsoluteObjectName,
      *(PSECURITY_DESCRIPTOR *)(a1 + 272),
      a3,
      0,
      v19,
      1,
      &a3->GenerateOnClose);
  SeUnlockSubjectContext(&a3->SubjectSecurityContext);
  ExReleaseResourceLite(&IopSecurityResource);
  KeLeaveCriticalRegionThread(v17);
  return v19;
}
