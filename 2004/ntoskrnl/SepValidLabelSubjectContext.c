/*
 * XREFs of SepValidLabelSubjectContext @ 0x1406183C8
 * Callers:
 *     RtlpSetSecurityObject @ 0x140669BF0 (RtlpSetSecurityObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     SepCopyTokenIntegrity @ 0x14026A848 (SepCopyTokenIntegrity.c)
 *     RtlSidDominates @ 0x140294A10 (RtlSidDominates.c)
 *     SeSinglePrivilegeCheckEx @ 0x140667BF8 (SeSinglePrivilegeCheckEx.c)
 */

BOOLEAN __fastcall SepValidLabelSubjectContext(__int64 *a1, void *a2, char a3)
{
  PSID SeMediumMandatorySid; // rdi
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r8
  BOOLEAN result; // al
  BOOLEAN Dominates; // [rsp+40h] [rbp+8h] BYREF

  Dominates = 0;
  SeMediumMandatorySid = a2;
  if ( !a2 )
    SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
  v6 = *a1;
  if ( !*a1 )
    v6 = a1[2];
  if ( *(_DWORD *)(v6 + 192) == 2 && *(int *)(v6 + 196) < 2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 48), 1u);
  SepCopyTokenIntegrity(v6);
  ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
  {
    LOBYTE(v8) = 1;
    return SeSinglePrivilegeCheckEx(SeRelabelPrivilege, a1, v8);
  }
  return result;
}
