/*
 * XREFs of SepDeleteAccessState @ 0x1402990A0
 * Callers:
 *     WmipCreateGuidObject @ 0x1405DC758 (WmipCreateGuidObject.c)
 *     SeSubProcessToken @ 0x140613E54 (SeSubProcessToken.c)
 *     NtCreateUserProcess @ 0x1406149A0 (NtCreateUserProcess.c)
 *     ObReferenceObjectByNameEx @ 0x14062DD40 (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByPointer @ 0x140667220 (ObOpenObjectByPointer.c)
 *     PsOpenThread @ 0x1406677B4 (PsOpenThread.c)
 *     ObReferenceObjectByName @ 0x140668760 (ObReferenceObjectByName.c)
 *     SeDeleteAccessState @ 0x14067A200 (SeDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x140694650 (ObOpenObjectByNameEx.c)
 *     PspInsertThread @ 0x1406AE2E4 (PspInsertThread.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B5B38 (PspOneDirectionSecurityDomainCombine.c)
 *     PspCombineSecurityDomains @ 0x1406F22A4 (PspCombineSecurityDomains.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406F5B60 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086CD40 (CmpDoAccessCheckOnKCB.c)
 *     PspDeleteObjectAccessState @ 0x140906D0C (PspDeleteObjectAccessState.c)
 *     CMFCheckAccess @ 0x140954C34 (CMFCheckAccess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     SeDeassignSecurity @ 0x1406F0530 (SeDeassignSecurity.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
