/*
 * XREFs of CmpCheckKeySecurityDescriptorAccess @ 0x1406B5158
 * Callers:
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14065B560 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpCheckKeyNodeStackAccess @ 0x14065BF3C (CmpCheckKeyNodeStackAccess.c)
 *     CmpCheckSecurityCellAccess @ 0x1406B50AC (CmpCheckSecurityCellAccess.c)
 *     CmpCheckKcbStackAccess @ 0x140918134 (CmpCheckKcbStackAccess.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     SepDeleteAccessState @ 0x1403478A0 (SepDeleteAccessState.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1406B52CC (CmpSetAccessStateForBackupRestore.c)
 *     SeCreateAccessStateEx @ 0x14071F190 (SeCreateAccessStateEx.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall CmpCheckKeySecurityDescriptorAccess(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        KPROCESSOR_MODE a2,
        ACCESS_MASK a3,
        char a4)
{
  unsigned int CurrentThread; // edi
  char *v9; // rbx
  unsigned int CurrentThreadProcess; // eax
  __int64 v11; // rdx
  signed int AccessState; // ebx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-B0h] BYREF
  NTSTATUS AccessStatus[3]; // [rsp+54h] [rbp-ACh] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v16[5]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v17[224]; // [rsp+100h] [rbp+0h] BYREF

  GrantedAccess = 0;
  AccessStatus[0] = 0;
  memset(v16, 0, sizeof(v16));
  memset(v17, 0, sizeof(v17));
  CurrentThread = (unsigned int)KeGetCurrentThread();
  v9 = (char *)CmKeyObjectType + 76;
  CurrentThreadProcess = (unsigned int)PsGetCurrentThreadProcess();
  AccessState = SeCreateAccessStateEx(
                  CurrentThread,
                  CurrentThreadProcess,
                  (unsigned int)v16,
                  (unsigned int)v17,
                  a3,
                  (__int64)v9);
  if ( AccessState >= 0 )
  {
    if ( a4 )
    {
      LOBYTE(v11) = a2;
      AccessState = CmpSetAccessStateForBackupRestore(v16, v11, SecurityDescriptor, 0LL);
      if ( AccessState < 0 )
      {
LABEL_6:
        SepDeleteAccessState((__int64)v16);
        SeReleaseSubjectContext(&v16[1]);
        return (unsigned int)AccessState;
      }
      if ( !LODWORD(v16[0].PrimaryToken) )
      {
        AccessState = 0;
        goto LABEL_6;
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
    goto LABEL_6;
  }
  return (unsigned int)AccessState;
}
