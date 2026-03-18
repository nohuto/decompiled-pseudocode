/*
 * XREFs of KvfInitFeatureStates @ 0x1403CAC5C
 * Callers:
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KvfInitFeatureStates(__int64 a1)
{
  _DWORD *v1; // rdx
  _DWORD *v2; // rax
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // r8

  v1 = &KvfFeatureStates;
  v2 = &KvfFeatureStates;
  v3 = 2LL;
  do
  {
    if ( *v2 >= 8u )
      *v2 = 0;
    v2 += 6;
    --v3;
  }
  while ( v3 );
  result = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(result + 132) & 1) == 0 )
  {
    v5 = 2LL;
    do
    {
      if ( (*v1 & 2) != 0 )
      {
        result = *v1 & 0xFFFFFFFE | ((*v1 & 1) == 0) | 4;
        *v1 = result;
      }
      v1 += 6;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
