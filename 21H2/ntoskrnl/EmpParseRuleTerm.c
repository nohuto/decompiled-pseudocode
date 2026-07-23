/*
 * XREFs of EmpParseRuleTerm @ 0x140A46F28
 * Callers:
 *     EmpParseRuleExpression @ 0x140A4708C (EmpParseRuleExpression.c)
 * Callees:
 *     EmpSearchRuleDatabase @ 0x14026FDA4 (EmpSearchRuleDatabase.c)
 *     EmpSearchCallbackDatabase @ 0x1403B4654 (EmpSearchCallbackDatabase.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     strchr @ 0x1403D3860 (strchr.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     EmpInfParseGetGuidFromName @ 0x140A479DC (EmpInfParseGetGuidFromName.c)
 *     EmpParseRuleTermArgMapping @ 0x140A48370 (EmpParseRuleTermArgMapping.c)
 */

__int64 __fastcall EmpParseRuleTerm(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, unsigned int *a5)
{
  __int64 v5; // rbx
  PVOID PoolWithTag; // rsi
  char *v11; // rax
  char *v12; // r12
  int GuidFromName; // ebx
  _DWORD *v14; // rax
  int v15; // r14d
  int v16; // ebp
  int v17; // r15d
  unsigned int v18; // edi
  _DWORD *v20; // rax
  __int128 v21; // [rsp+38h] [rbp-60h] BYREF

  v5 = a2 + 1;
  PoolWithTag = 0LL;
  v21 = 0LL;
  v11 = strchr((const char *)(a2 + 1), 40);
  v12 = v11;
  if ( !v11 )
    return (unsigned int)-1073741811;
  *v11 = 0;
  if ( *(_BYTE *)a2 == 63 )
  {
    GuidFromName = EmpInfParseGetGuidFromName(a1, "CallbackGuidDef", v5, &v21);
    if ( GuidFromName < 0 )
      return (unsigned int)GuidFromName;
    v20 = EmpSearchCallbackDatabase(&v21);
    if ( v20 )
    {
      *a3 = v20;
      v15 = v20[14];
      v16 = v20[15];
      v17 = v20[16];
      goto LABEL_6;
    }
    return (unsigned int)-1073741275;
  }
  GuidFromName = EmpInfParseGetGuidFromName(a1, "RuleNameGuidDef", v5, &v21);
  if ( GuidFromName < 0 )
    return (unsigned int)GuidFromName;
  v14 = EmpSearchRuleDatabase(&v21);
  if ( !v14 )
    return (unsigned int)-1073741275;
  *a3 = v14;
  v15 = v14[10];
  v16 = v14[11];
  v17 = v14[12];
LABEL_6:
  *v12 = 40;
  v18 = v17 + v15 + v16;
  if ( v18 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v18, 0x74734D45u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    if ( !(unsigned __int8)EmpParseRuleTermArgMapping(v12, v17) )
    {
      GuidFromName = -1073741811;
      ExFreePoolWithTag(PoolWithTag, 0x74734D45u);
      return (unsigned int)GuidFromName;
    }
  }
  *a4 = PoolWithTag;
  *a5 = v18;
  return (unsigned int)GuidFromName;
}
