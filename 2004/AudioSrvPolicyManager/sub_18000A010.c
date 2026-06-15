/*
 * XREFs of sub_18000A010 @ 0x18000A010
 * Callers:
 *     sub_180009B50 @ 0x180009B50 (sub_180009B50.c)
 *     sub_180009B80 @ 0x180009B80 (sub_180009B80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000A010(__int64 a1)
{
  signed __int32 v1; // r8d
  unsigned int v2; // r9d

  v1 = *(_DWORD *)(a1 + 28);
  v2 = 0x7FFFFFFF;
  if ( v1 != 0x7FFFFFFF )
  {
    do
    {
      if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 28), v1 + 1, v1) )
        break;
      v1 = *(_DWORD *)(a1 + 28);
    }
    while ( v1 != 0x7FFFFFFF );
    if ( v1 != 0x7FFFFFFF )
      return (unsigned int)(v1 + 1);
  }
  return v2;
}
