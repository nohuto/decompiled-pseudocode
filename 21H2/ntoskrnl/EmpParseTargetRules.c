/*
 * XREFs of EmpParseTargetRules @ 0x140A47ADC
 * Callers:
 *     EmpParseInfDatabase @ 0x140A465E8 (EmpParseInfDatabase.c)
 * Callees:
 *     EmpSearchRuleDatabase @ 0x14026FDA4 (EmpSearchRuleDatabase.c)
 *     EmpSearchTargetRuleList @ 0x14026FDDC (EmpSearchTargetRuleList.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     CmpGetSectionLineIndexValueCount @ 0x140A47534 (CmpGetSectionLineIndexValueCount.c)
 *     EmpInfParseGetGuidFromName @ 0x140A479DC (EmpInfParseGetGuidFromName.c)
 *     EmpInfParseGetSectionLineCount @ 0x140A47A88 (EmpInfParseGetSectionLineCount.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140A47D1C (EmpParseTargetRuleStringIndexList.c)
 *     CmpGetSectionLineIndex @ 0x140A47FF4 (CmpGetSectionLineIndex.c)
 *     CmpGetKeyName @ 0x140A48114 (CmpGetKeyName.c)
 */

__int64 __fastcall EmpParseTargetRules(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // r13d
  unsigned int v4; // ebp
  __int64 KeyName; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdi
  int v8; // ecx
  int v9; // r15d
  void *v10; // rsi
  _QWORD *v11; // rax
  int v12; // r8d
  unsigned int v13; // r14d
  PVOID v14; // rax
  unsigned int v15; // r13d
  unsigned int i; // ebx
  __int64 SectionLineIndex; // rax
  _QWORD *v18; // rax
  PVOID PoolWithTag; // rax
  _QWORD *v21; // r15
  int v22; // [rsp+40h] [rbp-68h] BYREF
  unsigned int SectionLineIndexValueCount; // [rsp+44h] [rbp-64h]
  unsigned int SectionLineCount; // [rsp+48h] [rbp-60h]
  _QWORD *v25; // [rsp+50h] [rbp-58h]
  int GuidFromName; // [rsp+58h] [rbp-50h]
  GUID v27; // [rsp+60h] [rbp-48h] BYREF

  v27 = 0LL;
  v2 = 0;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, (__int64)"TargetRuleDef");
  v3 = SectionLineCount;
  if ( SectionLineCount )
  {
    v4 = 0;
    while ( 1 )
    {
      v2 = 0;
      KeyName = CmpGetKeyName(a1, "TargetRuleDef", v4);
      if ( !KeyName )
        goto LABEL_17;
      GuidFromName = EmpInfParseGetGuidFromName(a1, (__int64)"RuleNameGuidDef", KeyName, &v27);
      v2 = GuidFromName;
      if ( GuidFromName < 0 )
        goto LABEL_17;
      v6 = EmpSearchRuleDatabase(&v27);
      v7 = (__int64)v6;
      if ( !v6 )
        goto LABEL_17;
      v8 = *((_DWORD *)v6 + 10);
      v9 = 0;
      v10 = 0LL;
      v22 = 0;
      if ( !(*((_DWORD *)v6 + 11) + v8) )
        goto LABEL_16;
      SectionLineIndexValueCount = CmpGetSectionLineIndexValueCount(a1, (__int64)"TargetRuleDef", v4);
      if ( SectionLineIndexValueCount )
        break;
LABEL_17:
      if ( ++v4 >= v3 )
        return v2;
    }
    v11 = EmpSearchTargetRuleList(v7);
    v13 = v12 * (*(_DWORD *)(v7 + 44) + *(_DWORD *)(v7 + 40));
    v25 = v11;
    if ( v11 )
    {
      v13 += *((_DWORD *)v11 + 6);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v13, 0x74694D45u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memset(PoolWithTag, 0, 4LL * v13);
      v21 = v25;
      memmove(v10, (const void *)v25[2], 4LL * *((unsigned int *)v25 + 6));
      v9 = *((_DWORD *)v21 + 6);
      v22 = v9;
      ExFreePoolWithTag((PVOID)v25[2], 0x74694D45u);
    }
    else
    {
      v14 = ExAllocatePoolWithTag(PagedPool, 4LL * v13, 0x74694D45u);
      v10 = v14;
      if ( !v14 )
        return (unsigned int)-1073741670;
      memset(v14, 0, 4LL * v13);
      v3 = SectionLineCount;
    }
    LODWORD(v25) = 0;
    if ( SectionLineIndexValueCount )
    {
      v15 = SectionLineIndexValueCount;
      for ( i = (unsigned int)v25; i < v15; ++i )
      {
        SectionLineIndex = CmpGetSectionLineIndex(a1, "TargetRuleDef", v4, i);
        EmpParseTargetRuleStringIndexList(
          a1,
          SectionLineIndex,
          *(unsigned int *)(v7 + 40),
          *(unsigned int *)(v7 + 44),
          v10,
          v13,
          &v22);
      }
      v2 = GuidFromName;
      v3 = SectionLineCount;
      v9 = v22;
    }
    if ( !v9 )
    {
      ExFreePoolWithTag(v10, 0x74694D45u);
      goto LABEL_17;
    }
LABEL_16:
    v18 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x74694D45u);
    *(_DWORD *)v18 = 0;
    ++EmpNumberOfTargetRules;
    v18[1] = v7;
    v18[2] = v10;
    *((_DWORD *)v18 + 6) = v9;
    v18[4] = EmpTargetRuleListHead;
    EmpTargetRuleListHead = (__int64)(v18 + 4);
    goto LABEL_17;
  }
  return v2;
}
