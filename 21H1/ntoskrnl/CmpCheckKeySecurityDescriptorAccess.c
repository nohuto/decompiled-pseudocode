/*
 * XREFs of CmpCheckKeySecurityDescriptorAccess @ 0x1406D2F90
 * Callers:
 *     CmpCheckSecurityCellAccess @ 0x1406D2F0C (CmpCheckSecurityCellAccess.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140715950 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpCheckKeyNodeStackAccess @ 0x140715AC4 (CmpCheckKeyNodeStackAccess.c)
 *     CmpCheckKcbStackAccess @ 0x14086C8F0 (CmpCheckKcbStackAccess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140206590 (SepDeleteAccessState.c)
 *     SeAccessCheck @ 0x140207F80 (SeAccessCheck.c)
 *     PsGetCurrentThreadProcess @ 0x14030E2D0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     SeCreateAccessStateEx @ 0x140613790 (SeCreateAccessStateEx.c)
 *     CmpSetAccessStateForBackupRestore @ 0x14075A914 (CmpSetAccessStateForBackupRestore.c)
 */

__int64 __fastcall CmpCheckKeySecurityDescriptorAccess(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        KPROCESSOR_MODE a2,
        ACCESS_MASK a3,
        char a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  GENERIC_MAPPING *v9; // rbx
  struct _KPROCESS *CurrentThreadProcess; // rax
  __int64 v11; // rdx
  signed int AccessState; // ebx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-B0h] BYREF
  NTSTATUS AccessStatus[3]; // [rsp+54h] [rbp-ACh] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v16[5]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[28]; // [rsp+100h] [rbp+0h] BYREF

  GrantedAccess = 0;
  AccessStatus[0] = 0;
  memset(v16, 0, sizeof(v16));
  memset(v17, 0, sizeof(v17));
  CurrentThread = KeGetCurrentThread();
  v9 = (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AccessState = SeCreateAccessStateEx(CurrentThread, CurrentThreadProcess, v16, v17, a3, v9);
  if ( AccessState >= 0 )
  {
    if ( a4 )
    {
      LOBYTE(v11) = a2;
      AccessState = CmpSetAccessStateForBackupRestore(v16, v11, SecurityDescriptor, 0LL);
      if ( AccessState < 0 )
        goto LABEL_4;
      if ( !LODWORD(v16[0].PrimaryToken) )
      {
        AccessState = 0;
        goto LABEL_4;
      }
      GrantedAccess = HIDWORD(v16[0].PrimaryToken);
    }
    AccessState = SeAccessCheck(
                    SecurityDescriptor,
                    &v16[1],
                    0,
                    a3,
                    0,
                    0LL,
                    (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                    a2,
                    &GrantedAccess,
                    AccessStatus) == 0
                ? 0xC0000022
                : 0;
LABEL_4:
    SepDeleteAccessState((__int64)v16);
    SeReleaseSubjectContext(&v16[1]);
  }
  return (unsigned int)AccessState;
}
