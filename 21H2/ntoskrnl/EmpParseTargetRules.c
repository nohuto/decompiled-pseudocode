/*
 * XREFs of EmpParseTargetRules @ 0x140B0CDAC
 * Callers:
 *     EmpParseInfDatabase @ 0x140B0B9A8 (EmpParseInfDatabase.c)
 * Callees:
 *     EmpSearchTargetRuleList @ 0x1402DCBD4 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1402DCBFC (EmpSearchRuleDatabase.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     CmpGetSectionLineIndexValueCount @ 0x140B0C830 (CmpGetSectionLineIndexValueCount.c)
 *     EmpInfParseGetGuidFromName @ 0x140B0CCAC (EmpInfParseGetGuidFromName.c)
 *     EmpInfParseGetSectionLineCount @ 0x140B0CD58 (EmpInfParseGetSectionLineCount.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140B0CFC8 (EmpParseTargetRuleStringIndexList.c)
 *     CmpGetSectionLineIndex @ 0x140B0D2E8 (CmpGetSectionLineIndex.c)
 *     CmpGetKeyName @ 0x140B0D408 (CmpGetKeyName.c)
 */

__int64 __fastcall EmpParseTargetRules(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  __int64 KeyName; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdi
  int v7; // ecx
  int v8; // ebp
  void *v9; // r14
  _QWORD *v10; // rax
  _QWORD *v11; // r13
  int v12; // r8d
  unsigned int v13; // r15d
  unsigned int v14; // r13d
  unsigned int v15; // ebx
  int SectionLineIndex; // eax
  __int64 v17; // rax
  void *Pool2; // rax
  void *v20; // rcx
  int v21; // [rsp+40h] [rbp-58h] BYREF
  unsigned int SectionLineIndexValueCount; // [rsp+44h] [rbp-54h]
  unsigned int v23; // [rsp+48h] [rbp-50h]
  int GuidFromName; // [rsp+4Ch] [rbp-4Ch]
  unsigned int SectionLineCount; // [rsp+50h] [rbp-48h]
  GUID v26; // [rsp+58h] [rbp-40h] BYREF

  v26 = 0LL;
  v2 = 0;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, (__int64)"TargetRuleDef");
  if ( SectionLineCount )
  {
    v3 = 0;
    while ( 1 )
    {
      v2 = 0;
      KeyName = CmpGetKeyName(a1, "TargetRuleDef", v3);
      if ( !KeyName )
        goto LABEL_16;
      GuidFromName = EmpInfParseGetGuidFromName(a1, (__int64)"RuleNameGuidDef", KeyName, &v26);
      v2 = GuidFromName;
      if ( GuidFromName < 0 )
        goto LABEL_16;
      v5 = EmpSearchRuleDatabase(&v26);
      v6 = (__int64)v5;
      if ( !v5 )
        goto LABEL_16;
      v7 = *((_DWORD *)v5 + 10);
      v8 = 0;
      v9 = 0LL;
      v21 = 0;
      if ( !(*((_DWORD *)v5 + 11) + v7) )
        goto LABEL_15;
      SectionLineIndexValueCount = CmpGetSectionLineIndexValueCount(a1, (__int64)"TargetRuleDef", v3);
      if ( SectionLineIndexValueCount )
        break;
LABEL_16:
      if ( ++v3 >= SectionLineCount )
        return v2;
    }
    v10 = EmpSearchTargetRuleList(v6);
    v11 = v10;
    v13 = v12 * (*(_DWORD *)(v6 + 44) + *(_DWORD *)(v6 + 40));
    if ( v10 )
    {
      v13 += *((_DWORD *)v10 + 6);
      Pool2 = (void *)ExAllocatePool2(256LL, 4LL * v13, 0x74694D45u);
      v9 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      memmove(Pool2, (const void *)v11[2], 4LL * *((unsigned int *)v11 + 6));
      v8 = *((_DWORD *)v11 + 6);
      v20 = (void *)v11[2];
      v21 = v8;
      ExFreePoolWithTag(v20, 0x74694D45u);
    }
    else
    {
      v9 = (void *)ExAllocatePool2(256LL, 4LL * v13, 0x74694D45u);
      if ( !v9 )
        return (unsigned int)-1073741670;
    }
    v23 = 0;
    v14 = SectionLineIndexValueCount;
    if ( SectionLineIndexValueCount )
    {
      v15 = v23;
      do
      {
        SectionLineIndex = CmpGetSectionLineIndex(a1, "TargetRuleDef", v3, v15);
        EmpParseTargetRuleStringIndexList(
          a1,
          SectionLineIndex,
          *(_DWORD *)(v6 + 40),
          *(_DWORD *)(v6 + 44),
          (__int64)v9,
          v13,
          (__int64)&v21);
        ++v15;
      }
      while ( v15 < v14 );
      v2 = GuidFromName;
      v8 = v21;
    }
    if ( !v8 )
    {
      ExFreePoolWithTag(v9, 0x74694D45u);
      goto LABEL_16;
    }
LABEL_15:
    v17 = ExAllocatePool2(256LL, 0x28uLL, 0x74694D45u);
    *(_DWORD *)v17 = 0;
    ++EmpNumberOfTargetRules;
    *(_QWORD *)(v17 + 8) = v6;
    *(_QWORD *)(v17 + 16) = v9;
    *(_DWORD *)(v17 + 24) = v8;
    *(_QWORD *)(v17 + 32) = EmpTargetRuleListHead;
    EmpTargetRuleListHead = v17 + 32;
    goto LABEL_16;
  }
  return v2;
}
