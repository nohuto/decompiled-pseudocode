/*
 * XREFs of HalpInterruptGetApicVersion @ 0x1403780F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x140378AF8 (HalpInterruptFindLinesForGsiRange.c)
 */

__int64 __fastcall HalpInterruptGetApicVersion(__int64 a1)
{
  __int64 LinesForGsiRange; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h]

  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(a1, (unsigned int)(a1 + 1));
  if ( LinesForGsiRange )
  {
    LOWORD(v3) = 17;
    HIBYTE(v3) = *(_BYTE *)(LinesForGsiRange + 24) - *(_BYTE *)(LinesForGsiRange + 20);
    BYTE2(v3) = HIBYTE(v3) - 1;
  }
  else
  {
    return (unsigned int)-268435456;
  }
  return v3;
}
