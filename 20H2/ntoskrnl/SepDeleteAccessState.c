/*
 * XREFs of SepDeleteAccessState @ 0x140210E90
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x1405E566C (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x1405FDA80 (ObReferenceObjectByName.c)
 *     SeDeleteAccessState @ 0x140601D90 (SeDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x14060CAF0 (ObOpenObjectByNameEx.c)
 *     PsOpenThread @ 0x14063B5B0 (PsOpenThread.c)
 *     WmipCreateGuidObject @ 0x140668338 (WmipCreateGuidObject.c)
 *     ObOpenObjectByPointer @ 0x14067EA30 (ObOpenObjectByPointer.c)
 *     PspInsertThread @ 0x1406867E0 (PspInsertThread.c)
 *     SeSubProcessToken @ 0x14068F0A8 (SeSubProcessToken.c)
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 *     PspCombineSecurityDomains @ 0x140699828 (PspCombineSecurityDomains.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B309C (PspOneDirectionSecurityDomainCombine.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406C8BF0 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1408725DC (CmpDoAccessCheckOnKCB.c)
 *     PspDeleteObjectAccessState @ 0x14090C92C (PspDeleteObjectAccessState.c)
 *     CMFCheckAccess @ 0x14095A9F4 (CMFCheckAccess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     SeDeassignSecurity @ 0x1406C4020 (SeDeassignSecurity.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeleteAccessState(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rcx
  void *v4; // rcx
  void (*v5)(void); // rax

  v2 = *(_QWORD *)(a1 + 72);
  if ( *(_BYTE *)(a1 + 11) )
    ExFreePoolWithTag(*(PVOID *)v2, 0);
  v3 = *(void **)(a1 + 136);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = *(void **)(a1 + 152);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 48) )
      SeDeassignSecurity((PSECURITY_DESCRIPTOR *)(v2 + 48));
    v5 = *(void (**)(void))(v2 + 72);
    if ( v5 && *(_QWORD *)(v2 + 80) )
    {
      if ( *(_QWORD *)(v2 + 56) )
        v5();
      if ( *(_QWORD *)(v2 + 64) )
        (*(void (__fastcall **)(_QWORD))(v2 + 72))(*(_QWORD *)(v2 + 80));
    }
  }
}
