/*
 * XREFs of _RtlpHpLfhSubsegmentCountEmptyUnits@4 @ 0x4B376F07
 * Callers:
 *     _RtlpHpLfhSubsegmentFree@16 @ 0x4B377399 (_RtlpHpLfhSubsegmentFree@16.c)
 * Callees:
 *     _RtlpHpLfhSubsegmentFindEmptyUnits@12 @ 0x4B377324 (_RtlpHpLfhSubsegmentFindEmptyUnits@12.c)
 */

int __thiscall RtlpHpLfhSubsegmentCountEmptyUnits(unsigned __int8 *this)
{
  int v1; // esi
  unsigned int v2; // edi
  int EmptyUnits; // eax
  int v5; // [esp+Ch] [ebp-4h] BYREF

  v1 = 0;
  v2 = this[29];
  if ( this[29] )
  {
    do
    {
      EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(&v5);
      if ( EmptyUnits == -1 )
        break;
      v1 += v5;
    }
    while ( v5 + EmptyUnits < v2 );
  }
  return v1;
}
