/*
 * XREFs of MmSetMinimumAgeRate @ 0x1406209E4
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406B3034 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PsGetNextPartition @ 0x140250E68 (PsGetNextPartition.c)
 */

void *__fastcall MmSetMinimumAgeRate(unsigned int a1)
{
  void *result; // rax
  void *v3; // r8
  __int64 v4; // r9
  __int16 v5; // cx
  unsigned int v6; // ecx
  unsigned int v7; // eax

  for ( result = PsGetNextPartition(0LL); ; result = PsGetNextPartition(v3) )
  {
    v3 = result;
    if ( !result )
      break;
    v4 = *(_QWORD *)(*(_QWORD *)result + 6848LL);
    if ( a1 )
    {
      if ( a1 < 0xC )
        v6 = 1;
      else
        v6 = a1 / 6;
      v7 = 0x3E8 / v6;
      v5 = 1;
      if ( v7 > 1 )
        v5 = v7;
    }
    else
    {
      v5 = 0;
    }
    *(_WORD *)(v4 + 2348) = v5;
  }
  return result;
}
