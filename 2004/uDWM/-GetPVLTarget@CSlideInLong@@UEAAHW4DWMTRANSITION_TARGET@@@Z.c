/*
 * XREFs of ?GetPVLTarget@CSlideInLong@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800AF230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSlideInLong::GetPVLTarget(__int64 a1, __int16 a2)
{
  unsigned int v2; // r9d
  int v3; // ecx
  int v4; // edx
  unsigned int *i; // r8

  v2 = -1;
  v3 = 0;
  v4 = a2 & 0xFFF;
  for ( i = `CSlideInLong::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable; (*i & 0xFFF) != v4; i += 2 )
  {
    if ( (unsigned int)++v3 >= 6 )
      return v2;
  }
  return `CSlideInLong::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable[2 * v3 + 1];
}
