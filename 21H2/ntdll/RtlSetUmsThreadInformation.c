/*
 * XREFs of RtlSetUmsThreadInformation @ 0x1800F7650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetUmsThreadInformation(__int64 a1, int a2, _QWORD *a3, int a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( a2 == 1 )
  {
    if ( a4 == 8 )
      *(_QWORD *)(a1 + 1256) = *a3;
    else
      return (unsigned int)-1073741820;
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
