/*
 * XREFs of SepDeleteAccessState @ 0x140206590
 * Callers:
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 *     PsOpenThread @ 0x1405E14B4 (PsOpenThread.c)
 *     ObOpenObjectByNameEx @ 0x1405EB110 (ObOpenObjectByNameEx.c)
 *     SeDeleteAccessState @ 0x140602120 (SeDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     ObReferenceObjectByName @ 0x140613480 (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x14064B8F0 (ObReferenceObjectByNameEx.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14064CB58 (PspOneDirectionSecurityDomainCombine.c)
 *     NtCreateUserProcess @ 0x14066BF50 (NtCreateUserProcess.c)
 *     WmipCreateGuidObject @ 0x140682008 (WmipCreateGuidObject.c)
 *     PspCombineSecurityDomains @ 0x1406D1398 (PspCombineSecurityDomains.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406D2F90 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PspInsertThread @ 0x1406F3184 (PspInsertThread.c)
 *     SeSubProcessToken @ 0x1406F7240 (SeSubProcessToken.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086B9F0 (CmpDoAccessCheckOnKCB.c)
 *     PspDeleteObjectAccessState @ 0x140905A2C (PspDeleteObjectAccessState.c)
 *     CMFCheckAccess @ 0x140953564 (CMFCheckAccess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     SeDeassignSecurity @ 0x1406CF230 (SeDeassignSecurity.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
