/*
 * XREFs of EmpRuleParserStackPush @ 0x140A4827C
 * Callers:
 *     EmpParseRuleExpression @ 0x140A4708C (EmpParseRuleExpression.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char *__fastcall EmpRuleParserStackPush(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  char *result; // rax
  _QWORD *v10; // rcx

  result = (char *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x74734D45u);
  if ( result )
  {
    v10 = result + 32;
    *((_DWORD *)result + 6) = a5;
    *(_DWORD *)result = a2;
    *((_QWORD *)result + 1) = a3;
    *((_QWORD *)result + 2) = a4;
    result = *(char **)(a1 + 8);
    *v10 = result;
    ++*(_DWORD *)a1;
    *(_QWORD *)(a1 + 8) = v10;
  }
  return result;
}
