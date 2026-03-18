/*
 * XREFs of CmpSearchLineInSectionByIndex @ 0x140A48200
 * Callers:
 *     CmpGetSectionLineIndexValueCount @ 0x140A475E4 (CmpGetSectionLineIndexValueCount.c)
 *     EmpInfParseGetSectionLineCount @ 0x140A47B38 (EmpInfParseGetSectionLineCount.c)
 *     CmpGetSectionLineIndex @ 0x140A480A4 (CmpGetSectionLineIndex.c)
 *     CmpGetKeyName @ 0x140A481C4 (CmpGetKeyName.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CmpSearchLineInSectionByIndex(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  _QWORD *result; // rax

  v2 = 0;
  if ( !a1 )
    return 0LL;
  result = *(_QWORD **)(a1 + 16);
  if ( a2 )
  {
    do
    {
      if ( !result )
        break;
      result = (_QWORD *)*result;
      ++v2;
    }
    while ( v2 < a2 );
  }
  return result;
}
