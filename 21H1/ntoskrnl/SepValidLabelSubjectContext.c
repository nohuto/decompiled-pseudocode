/*
 * XREFs of SepValidLabelSubjectContext @ 0x14066FAE8
 * Callers:
 *     RtlpSetSecurityObject @ 0x140614910 (RtlpSetSecurityObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     RtlSidDominates @ 0x140258190 (RtlSidDominates.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     SepCopyTokenIntegrity @ 0x1402D7648 (SepCopyTokenIntegrity.c)
 *     SeSinglePrivilegeCheckEx @ 0x1405E30A8 (SeSinglePrivilegeCheckEx.c)
 */

BOOLEAN __fastcall SepValidLabelSubjectContext(struct _SECURITY_SUBJECT_CONTEXT *a1, void *a2, char a3)
{
  PSID SeMediumMandatorySid; // rdi
  __int64 ClientToken; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  BOOLEAN result; // al
  BOOLEAN Dominates; // [rsp+40h] [rbp+8h] BYREF

  Dominates = 0;
  SeMediumMandatorySid = a2;
  if ( !a2 )
    SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
  ClientToken = (__int64)a1->ClientToken;
  if ( !a1->ClientToken )
    ClientToken = (__int64)a1->PrimaryToken;
  if ( *(_DWORD *)(ClientToken + 192) == 2 && *(int *)(ClientToken + 196) < 2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(ClientToken + 48), 1u);
  SepCopyTokenIntegrity(ClientToken);
  ExReleaseResourceLite(*(PERESOURCE *)(ClientToken + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  if ( (a3 & 8) != 0 )
  {
    if ( RtlSidDominates(SeMediumMandatorySid, SeExports->SeMediumMandatorySid, &Dominates) < 0 )
      return 0;
    if ( !Dominates )
      SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
  }
  if ( RtlSidDominates(0LL, SeMediumMandatorySid, &Dominates) < 0 )
    return 0;
  result = Dominates;
  if ( !Dominates )
    return SeSinglePrivilegeCheckEx((LUID)SeRelabelPrivilege, a1, 1);
  return result;
}
